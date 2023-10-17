#include "Core/RGNCore.h"
#include "Os/Os.h"
#include "SharedPrefs/SharedPrefs.h"
#include "Generated/RGN/Model/Request/RefreshTokensRequestData.h"
#include "Generated/RGN/Model/Response/RefreshTokensResponseData.h"

using json = nlohmann::json;
using RefreshTokensRequestData = RGN::Model::Request::RefreshTokensRequestData;
using RefreshTokensResponseData = RGN::Model::Response::RefreshTokensResponseData;

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
    json requestBody;
    requestBody["email"] = email;
    requestBody["password"] = password;
    requestBody["appId"] = _appId;
    requestBody["returnSecureToken"] = true;

    RGNCore::CallAPI("user-signInWithEmailPassword", requestBody,
        [](json response) {
            _idToken = response.at("idToken");
            _refreshToken = response.at("refreshToken");
            SaveAuthSession();
            NotifyAuthChange();
        },
        [](int code, string message) {
            // Dev Sign In Failed
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
    NotifyAuthChange();
}

void RGNCore::RefreshTokens(const function<void(bool)>& callback) {
    json requestBody;
    requestBody["appPackageName"] = _appId;
    requestBody["refreshToken"] = _refreshToken;

    RGNCore::CallAPI("user-refreshTokens", requestBody,
        [callback](json response) {
            _idToken = response.at("idToken");
            _refreshToken = response.at("refreshToken");
            SaveAuthSession();
            NotifyAuthChange();
            callback(true);
        },
        [callback](int code, string message) {
            callback(false);
        }
    );
}

bool RGNCore::IsLoggedIn() {
    return _idToken != "";
}

string RGNCore::GetUserToken() {
    return _idToken;
}

string RGNCore::GetAppId() {
    return _appId; 
}

string RGNCore::GetStorageBucket() {
    switch (_environmentTarget) {
    case RGNEnvironmentTarget::DEVELOPMENT:
        return "readymaster-development";
    case RGNEnvironmentTarget::STAGING:
        return "readysandbox";
    case RGNEnvironmentTarget::PRODUCTION:
        return "readymaster-2b268";
    }
    return "";
}

void RGNCore::CallAPI(string name, json body, const function<void(json)>& complete, const function<void(int, string)> fail, CancellationToken cancellationToken) {
    HttpHeaders headers;
    headers.add("Content-type", "application/json");
    if (!_idToken.empty()) {
        headers.add("Authorization", "Bearer " + _idToken);
    }
    string url = GetApiUrl() + name;
    Http::Request(url, HttpMethod::POST, headers, body.dump(), [name, body, complete, fail, cancellationToken](HttpResponse httpResponse) {
        if (cancellationToken.isCancellationRequested()) {
            return;
        }

        int httpResponseCode = httpResponse.getResponseCode();
        string httpResponseBody = httpResponse.getResponseBody();

        if (httpResponseCode == 200) {
            json response = json::parse(httpResponseBody);
            complete(response);
        }
        else if (httpResponseCode == 401) {
            if (_refreshToken != "") {
                RefreshTokens([name, body, complete, fail, cancellationToken, httpResponseCode, httpResponseBody](bool successRefreshTokens) {
                    if (cancellationToken.isCancellationRequested()) {
                        return;
                    }

                    if (successRefreshTokens) {
                        CallAPI(name, body, complete, fail, cancellationToken);
                    }
                    else {
                        SignOut();
                        fail(httpResponseCode, httpResponseBody);
                    }
                    });
            }
            else {
                SignOut();
                fail(httpResponseCode, httpResponseBody);
            }
        }
        else {
            SignOut();
            fail(httpResponseCode, httpResponseBody);
        }
    });
}

void RGNCore::CallAPI(string name, json body, const function<void(json)>& complete, const function<void(int, string)> fail) {
    CallAPI(name, body, complete, fail, CancellationToken());
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
        // TODO: grab refreshToken
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