#include "Core/RGNCore.h"
#include "Core/RGNAnalytics.h"
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
bool RGNCore::_useFunctionsEmulator = false;
string RGNCore::_emulatorHostAndPort = "";
string RGNCore::_userId = "";
string RGNCore::_idToken = "";
string RGNCore::_refreshToken = "";

void RGNCore::Initialize(RGNConfigureData configureData) {
    _appId = configureData.appId;
    _environmentTarget = configureData.environmentTarget;
    _useFunctionsEmulator = configureData.useFunctionsEmulator;
    _emulatorHostAndPort = configureData.emulatorHost + ":" + configureData.emulatorPort;

    DeepLink::Initialize();
    DeepLink::Start();
    RGNAnalytics::Initialize();

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

void RGNCore::DevSignIn(string email, string password, const function<void(bool)>& onSignIn) {
    json requestBody;
    requestBody["email"] = email;
    requestBody["password"] = password;
    requestBody["appId"] = _appId;
    requestBody["returnSecureToken"] = true;

    RGNCore::NonAuthInternalCallAPI("user-signInWithEmailPassword", requestBody.dump(),
        [onSignIn](string response) {
            json jsonResponse = json::parse(response);
            _userId = jsonResponse.at("userId");
            _idToken = jsonResponse.at("idToken");
            _refreshToken = jsonResponse.at("refreshToken");

            SaveAuthSession();
            NotifyAuthChange();

            if (onSignIn) {
                onSignIn(true);
            }
        },
        [onSignIn](int httpCode, string httpMessage) {
            if (onSignIn) {
                onSignIn(false);
            }
        }
    );
}

void RGNCore::SignIn(const function<void(bool)>& onSignIn) {
    string redirectUrl = _appId + "://";
    string url = GetOAuthUrl() + redirectUrl + "%2F&returnSecureToken=true&returnRefreshToken=true&appId=" + _appId;
    Os::OpenURL(url);
    DeepLink::Listen([onSignIn](string payload) {
        OnDeepLink(payload, onSignIn);
    });
}

void RGNCore::SignInAnonymously(const function<void(bool)>& onSignIn) {
    json requestBody;
    requestBody["appId"] = _appId;
    requestBody["returnSecureToken"] = true;

    RGNCore::NonAuthInternalCallAPI("user-signUpAnonymously", requestBody.dump(),
        [onSignIn](string response) {
            json jsonResponse = json::parse(response);
            _userId = jsonResponse.at("userId");
            _idToken = jsonResponse.at("idToken");
            _refreshToken = jsonResponse.at("refreshToken");

            SaveAuthSession();
            NotifyAuthChange();

            if (onSignIn) {
                onSignIn(true);
            }
        },
        [onSignIn](int httpCode, string httpMessage) {
            if (onSignIn) {
                onSignIn(false);
            }
        }
    );
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

    RGNCore::NonAuthInternalCallAPI("user-refreshTokens", requestBody.dump(),
        [callback](string response) {
            json jsonResponse = json::parse(response);
            _userId = jsonResponse.at("userId");
            _idToken = jsonResponse.at("idToken");
            _refreshToken = jsonResponse.at("refreshToken");

            SaveAuthSession();
            NotifyAuthChange();

            if (callback) {
                callback(true);
            }
        },
        [callback](int httpCode, string httpMessage) {
            if (callback) {
                callback(false);
            }
        }
    );
}

bool RGNCore::IsLoggedIn() {
    return _userId != "" && _idToken != "";
}

string RGNCore::GetUserId() {
    return _userId;
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

string RGNCore::GetApiRegion() {
    return "us-central1";
}

string RGNCore::GetApiProjectId() {
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

string RGNCore::GetApiUrl() {
    if (_useFunctionsEmulator) {
        return "http://" + _emulatorHostAndPort + "/" + GetApiProjectId() + "/" + GetApiRegion() + "/";
    }
    return "https://" + GetApiRegion() + "-" + GetApiProjectId() + ".cloudfunctions.net/";
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

void RGNCore::InternalCallAPI(string name, string body,
    const function<void(const string&)>& complete,
    const function<void(const int, const string&)>& fail, CancellationToken cancellationToken) {
    HttpHeaders headers;
    headers.add("Content-type", "application/json");
    if (!_idToken.empty()) {
        headers.add("Authorization", "Bearer " + _idToken);
    }
    string url = GetApiUrl() + name;
    Http::Request(url, HttpMethod::POST, headers, body, [name, body, complete, fail, cancellationToken](HttpResponse httpResponse) {
        if (cancellationToken.isCancellationRequested()) {
            return;
        }

        int httpResponseCode = httpResponse.getResponseCode();
        string httpResponseBody = httpResponse.getResponseBody();

        if (httpResponseCode == 200) {
            complete(httpResponseBody);
        }
        else if (httpResponseCode == 401) {
            if (_refreshToken != "") {
                RefreshTokens([name, body, complete, fail, cancellationToken, httpResponseCode, httpResponseBody](bool successRefreshTokens) {
                    if (cancellationToken.isCancellationRequested()) {
                        return;
                    }

                    if (successRefreshTokens) {
                        InternalCallAPI(name, body, complete, fail, cancellationToken);
                    }
                    else {
                        SignOut();
                        if (fail) {
                            fail(httpResponseCode, httpResponseBody);
                        }
                    }
                    });
            }
            else {
                SignOut();
                if (fail) {
                    fail(httpResponseCode, httpResponseBody);
                }
            }
        }
        else {
            if (fail) {
                fail(httpResponseCode, httpResponseBody);
            }
        }
    });
}

void RGNCore::NonAuthInternalCallAPI(string name, string body,
    const function<void(const string&)>& complete, const function<void(const int, const string&)>& fail) {
    HttpHeaders headers;
    headers.add("Content-type", "application/json");
    string url = GetApiUrl() + name;
    Http::Request(url, HttpMethod::POST, headers, body, [complete, fail](HttpResponse httpResponse) {
        int httpResponseCode = httpResponse.getResponseCode();
        string httpResponseBody = httpResponse.getResponseBody();

        if (httpResponseCode == 200) {
            complete(httpResponseBody);
        }
        else {
            if (fail) {
                fail(httpResponseCode, httpResponseBody);
            }
        }
    });
}

void RGNCore::LoadAuthSession() {
    bool wasNotLoggedIn = !IsLoggedIn();

    string authDataString;
    if (SharedPrefs::Load("AuthSession", authDataString)) {
        json authDataJson = json::parse(authDataString);
        _userId = authDataJson.contains("userId") ? authDataJson["userId"].get<string>() : "";
        _idToken = authDataJson.contains("idToken") ? authDataJson["idToken"].get<string>() : "";
        _refreshToken = authDataJson.contains("refreshToken") ? authDataJson["refreshToken"].get<string>() : "";
    }

    if (wasNotLoggedIn && IsLoggedIn()) {
        NotifyAuthChange();
    }
}

void RGNCore::SaveAuthSession() {
    json authDataJson;
    authDataJson["userId"] = _userId;
    authDataJson["idToken"] = _idToken;
    authDataJson["refreshToken"] = _refreshToken;
    SharedPrefs::Save("AuthSession", authDataJson.dump());
}

void RGNCore::NotifyAuthChange() {
    bool isLoggedIn = IsLoggedIn();
    for (auto callback : _authCallbacks) {
        callback->onAuthChange(isLoggedIn);
    }
}

void RGNCore::OnDeepLink(string payload, const function<void(bool)>& onSignIn) {
    unordered_map<string, string> payloadArgs = HttpUtility::ParseURL(payload);
    bool tokenExists = payloadArgs.find("token") != payloadArgs.end();
    if (tokenExists) {
        _refreshToken = payloadArgs.at("token");
        RefreshTokens(onSignIn);
    }
}