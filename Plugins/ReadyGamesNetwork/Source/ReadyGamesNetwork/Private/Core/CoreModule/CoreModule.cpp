#include "Core/CoreModule/CoreModule.h"
#include "Os/Os.h"
#include "Blueprints/WalletsModule/Responses/BP_CreateWalletResponse.h"
#include "Runtime/JsonUtilities/Public/JsonObjectConverter.h"

using json = nlohmann::json;

std::vector<SignInCallback*> CoreModule::_signInCallbacks = std::vector<SignInCallback*>();

std::string CoreModule::_appId = "";
EnvironmentTarget CoreModule::_environmentTarget = EnvironmentTarget::NONE;
std::string CoreModule::_idToken = "";
std::string CoreModule::_refreshToken = "";

void CoreModule::Initialize() {
    DeepLink::Initialize();
    DeepLink::Start();
    // TODO: Read auth session from disk
}

void CoreModule::Deinitialize() {
    DeepLink::Stop();
}

void CoreModule::Configure(ConfigureData configureData) {
    _appId = configureData.appId;
    _environmentTarget = configureData.environmentTarget;
}

void CoreModule::SubscribeToOnSignIn(SignInCallback* callback) {
    _signInCallbacks.push_back(callback);
}

void CoreModule::UnsubscribeFromOnSignIn(SignInCallback* callback) {
    auto it = std::find(_signInCallbacks.begin(), _signInCallbacks.end(), callback);
    if (it != _signInCallbacks.end()) {
        _signInCallbacks.erase(it);
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
            }

            for (auto callback : _signInCallbacks) {
                callback->raise(httpResponseCode == 200);
            }
        }
    );
}

void CoreModule::SignIn() {
    std::string redirectUrl = _appId + "://";
    std::string url = GetOAuthUrl() + "?url_redirect=" + redirectUrl + "%2F&returnSecureToken=true&appId=" + _appId;
    Os::OpenURL(url);

    DeepLinkCallback* deepLinkCallback = new DeepLinkCallback([&](std::string payload) {
        OnDeepLink(payload);
        DeepLink::Subscribe(deepLinkCallback);
    });
    DeepLink::Unsubscribe(deepLinkCallback);
}

void CoreModule::SignOut() {
    _idToken = "";
    _refreshToken = "";
    // TODO: Clean stored at disk auth session
}

std::string CoreModule::GetApiUrl() {
    switch (_environmentTarget) {
        case EnvironmentTarget::DEVELOPMENT:
            return "https://us-central1-readymaster-development.cloudfunctions.net/";
        case EnvironmentTarget::STAGING:
            return "https://us-central1-readymaster-development.cloudfunctions.net/"; // TODO: Change api url to staging api url
        case EnvironmentTarget::PRODUCTION:
            return "https://us-central1-readymaster-development.cloudfunctions.net/"; // TODO: Change api url to production api url
    }
    return "";
}

std::string CoreModule::GetOAuthUrl() {
    switch (_environmentTarget) {
        case EnvironmentTarget::DEVELOPMENT:
            return "https://development-oauth.ready.gg/";
        case EnvironmentTarget::STAGING:
            return "https://development-oauth.ready.gg/"; // TODO: Change oauth url to staging oauth url
        case EnvironmentTarget::PRODUCTION:
            return "https://development-oauth.ready.gg/"; // TODO: Change oauth url to production oauth url
    }
    return "";
}

void CoreModule::OnDeepLink(std::string payload) {
    std::unordered_map<std::string, std::string> payloadArgs = HttpUtility::ParseURL(payload);
    bool tokenExists = payloadArgs.find("token") != payloadArgs.end();
    if (tokenExists) {
        _idToken = payloadArgs.at("token");
        // TODO: grab refreshToken too (if there is course)
    }
    for (auto callback : _signInCallbacks) {
        callback->raise(false);
    }
}