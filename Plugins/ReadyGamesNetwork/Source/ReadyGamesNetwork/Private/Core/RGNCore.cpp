#include "Core/RGNCore.h"
#include "Os/Os.h"
#include "SharedPrefs/SharedPrefs.h"

using json = nlohmann::json;

vector<RGNAuthCallback*> RGNCore::_authCallbacks = vector<RGNAuthCallback*>();

string RGNCore::_appId = "";
RGNEnvironmentTarget RGNCore::_environmentTarget = RGNEnvironmentTarget::NONE;
string RGNCore::_idToken = "";
string RGNCore::_refreshToken = "";

void RGNCore::Initialize() {
    DeepLink::Initialize();
    DeepLink::Start();
}

void RGNCore::Deinitialize() {
    DeepLink::Stop();
}

void RGNCore::Configure(RGNConfigureData configureData) {
    _appId = configureData.appId;
    _environmentTarget = configureData.environmentTarget;

    LoadAuthSession();
}

void RGNCore::SubscribeToAuthCallback(RGNAuthCallback* callback) {
    _authCallbacks.push_back(callback);
}

void RGNCore::UnsubscribeFromAuthCallback(RGNAuthCallback* callback) {
    auto it = find(_authCallbacks.begin(), _authCallbacks.end(), callback);
    if (it != _authCallbacks.end()) {
        _authCallbacks.erase(it);
    }
}

void RGNCore::DevSignIn(string email, string password) {
    string url = GetApiUrl() + "user-signInWithEmailPassword";

    HttpHeaders headers;
    headers.add("Content-type", "application/json");

    json requestJson;
    requestJson["email"] = email;
    requestJson["password"] = password;
    requestJson["appId"] = _appId;
    requestJson["returnSecureToken"] = true;

    Http::Request(url, HttpMethod::POST, headers, requestJson.dump(),
        [](HttpResponse httpResponse) {
            int httpResponseCode = httpResponse.getResponseCode();
            string httpResponseBody = httpResponse.getResponseBody();

            if (httpResponseCode == 200) {
                json responseJson = json::parse(httpResponseBody);
                _idToken = responseJson.at("idToken");
                _refreshToken = responseJson.at("refreshToken");
                SaveAuthSession();
                NotifyAuthChange();
            }
        }
    );
}

void RGNCore::SignIn() {
    string redirectUrl = _appId + "://";
    string url = GetOAuthUrl() + redirectUrl + "%2F&returnSecureToken=true&appId=" + _appId;
    Os::OpenURL(url);

    DeepLinkCallback* deepLinkCallback = new DeepLinkCallback([&](string payload) {
        OnDeepLink(payload);
        DeepLink::Unsubscribe(deepLinkCallback);
    });
    DeepLink::Subscribe(deepLinkCallback);
}

void RGNCore::SignOut() {
    _idToken = "";
    _refreshToken = "";
    SaveAuthSession();
}

bool RGNCore::IsLoggedIn() {
    return !_idToken.empty();
}

string RGNCore::GetUserToken() {
    return _idToken;
}

string RGNCore::GetApiUrl() {
    switch (_environmentTarget) {
        case RGNEnvironmentTarget::DEVELOPMENT:
            return "https://us-central1-readymaster-development.cloudfunctions.net/";
        case RGNEnvironmentTarget::STAGING:
            return "https://us-central1-readysandbox.cloudfunctions.net/";
        case RGNEnvironmentTarget::PRODUCTION:
            return "https://us-central1-readymaster-2b268.cloudfunctions.net/";
    }
    return "";
}

string RGNCore::GetOAuthUrl() {
    switch (_environmentTarget) {
        case RGNEnvironmentTarget::DEVELOPMENT:
            return "https://development-oauth.ready.gg/?url_redirect=";
        case RGNEnvironmentTarget::STAGING:
            return "https://staging-oauth.ready.gg/?url_redirect=";
        case RGNEnvironmentTarget::PRODUCTION:
            return "https://oauth.ready.gg/?url_redirect=";
    }
    return "";
}

void RGNCore::LoadAuthSession() {
    bool wasNotLoggedIn = !IsLoggedIn();

    string authDataString;
    if (SharedPrefs::Load("AuthSession", authDataString)) {
        json authDataJson = json::parse(authDataString);
        bool authIsValid = authDataJson.contains("idToken") && authDataJson.contains("refreshToken");
        if (authIsValid) {
            _idToken = authDataJson["idToken"].get<string>();
            _refreshToken = authDataJson["refreshToken"].get<string>();
        }
    }

    if (wasNotLoggedIn && IsLoggedIn()) {
        NotifyAuthChange();
    }
}

void RGNCore::SaveAuthSession() {
    json authDataJson;
    authDataJson["idToken"] = _idToken;
    authDataJson["refreshToken"] = _refreshToken;
    SharedPrefs::Save("AuthSession", authDataJson.dump());
}

void RGNCore::OnDeepLink(string payload) {
    unordered_map<string, string> payloadArgs = HttpUtility::ParseURL(payload);
    bool tokenExists = payloadArgs.find("token") != payloadArgs.end();
    if (tokenExists) {
        _idToken = payloadArgs.at("token");
        // TODO: grab refreshToken too (if there is course)
        SaveAuthSession();
        NotifyAuthChange();
    }
}

void RGNCore::NotifyAuthChange() {
    bool isLoggedIn = IsLoggedIn();
    for (auto callback : _authCallbacks) {
        callback->raise(isLoggedIn);
    }
}