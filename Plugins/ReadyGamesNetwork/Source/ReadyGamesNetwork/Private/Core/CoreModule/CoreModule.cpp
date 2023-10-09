#include "Core/CoreModule/CoreModule.h"
#include "Os/Os.h"
#include "SharedPrefs/SharedPrefs.h"

using json = nlohmann::json;

std::vector<AuthChangeCallback*> CoreModule::_authChangeCallbacks = std::vector<AuthChangeCallback*>();

std::string CoreModule::_appId = "";
EnvironmentTarget CoreModule::_environmentTarget = EnvironmentTarget::NONE;
std::string CoreModule::_idToken = "";
std::string CoreModule::_refreshToken = "";

void CoreModule::Initialize() {
    DeepLink::Initialize();
    DeepLink::Start();
}

void CoreModule::Deinitialize() {
    DeepLink::Stop();
}

void CoreModule::Configure(ConfigureData configureData) {
    _appId = configureData.appId;
    _environmentTarget = configureData.environmentTarget;

    LoadAuthSession();
}

void CoreModule::SubscribeToAuthChange(AuthChangeCallback* callback) {
    _authChangeCallbacks.push_back(callback);
}

void CoreModule::UnsubscribeFromAuthChange(AuthChangeCallback* callback) {
    auto it = std::find(_authChangeCallbacks.begin(), _authChangeCallbacks.end(), callback);
    if (it != _authChangeCallbacks.end()) {
        _authChangeCallbacks.erase(it);
    }
}

void CoreModule::DevSignIn(std::string email, std::string password) {
    std::string url = GetApiUrl() + "user-signInWithEmailPassword";

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
            std::string httpResponseBody = httpResponse.getResponseBody();

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

void CoreModule::SignIn() {
    std::string redirectUrl = _appId + "://";
    std::string url = GetOAuthUrl() + redirectUrl + "%2F&returnSecureToken=true&appId=" + _appId;
    Os::OpenURL(url);

    DeepLinkCallback* deepLinkCallback = new DeepLinkCallback([&](std::string payload) {
        OnDeepLink(payload);
        DeepLink::Unsubscribe(deepLinkCallback);
    });
    DeepLink::Subscribe(deepLinkCallback);
}

void CoreModule::SignOut() {
    _idToken = "";
    _refreshToken = "";
    SaveAuthSession();
}

bool CoreModule::IsLoggedIn() {
    return !_idToken.empty();
}

std::string CoreModule::GetUserToken() {
    return _idToken;
}

std::string CoreModule::GetApiUrl() {
    switch (_environmentTarget) {
        case EnvironmentTarget::DEVELOPMENT:
            return "https://us-central1-readymaster-development.cloudfunctions.net/";
        case EnvironmentTarget::STAGING:
            return "https://us-central1-readysandbox.cloudfunctions.net/";
        case EnvironmentTarget::PRODUCTION:
            return "https://us-central1-readymaster-2b268.cloudfunctions.net/";
    }
    return "";
}

std::string CoreModule::GetOAuthUrl() {
    switch (_environmentTarget) {
        case EnvironmentTarget::DEVELOPMENT:
            return "https://development-oauth.ready.gg/?url_redirect=";
        case EnvironmentTarget::STAGING:
            return "https://staging-oauth.ready.gg/?url_redirect=";
        case EnvironmentTarget::PRODUCTION:
            return "https://oauth.ready.gg/?url_redirect=";
    }
    return "";
}

void CoreModule::LoadAuthSession() {
    bool wasNotLoggedIn = !IsLoggedIn();

    std::string authDataString;
    if (SharedPrefs::Load("AuthSession", authDataString)) {
        json authDataJson = json::parse(authDataString);
        bool authIsValid = authDataJson.contains("idToken") && authDataJson.contains("refreshToken");
        if (authIsValid) {
            _idToken = authDataJson["idToken"].get<std::string>();
            _refreshToken = authDataJson["refreshToken"].get<std::string>();
        }
    }

    if (wasNotLoggedIn && IsLoggedIn()) {
        NotifyAuthChange();
    }
}

void CoreModule::SaveAuthSession() {
    json authDataJson;
    authDataJson["idToken"] = _idToken;
    authDataJson["refreshToken"] = _refreshToken;
    SharedPrefs::Save("AuthSession", authDataJson.dump());
}

void CoreModule::OnDeepLink(std::string payload) {
    std::unordered_map<std::string, std::string> payloadArgs = HttpUtility::ParseURL(payload);
    bool tokenExists = payloadArgs.find("token") != payloadArgs.end();
    if (tokenExists) {
        _idToken = payloadArgs.at("token");
        // TODO: grab refreshToken too (if there is course)
        SaveAuthSession();
        NotifyAuthChange();
    }
}

void CoreModule::NotifyAuthChange() {
    bool isLoggedIn = IsLoggedIn();
    for (auto callback : _authChangeCallbacks) {
        callback->raise(isLoggedIn);
    }
}