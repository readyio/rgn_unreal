#include "Core/CoreModule/CoreModule.h"
#include "Os/Os.h"
#include "json.hpp"

using json = nlohmann::json;

DeepLinkCallback* CoreModule::_deepLinkCallback = nullptr;

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

void CoreModule::SubscribeToOnSignIn() {

}

void CoreModule::UnsubscribeFromOnSignIn() {

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
            }
        }
    );
}

void CoreModule::SignIn() {
    if (_deepLinkCallback != nullptr) {
        delete _deepLinkCallback;
    }

    std::string redirectUrl = _appId + "://";
    std::string url = GetOAuthUrl() + "?url_redirect=" + redirectUrl + "%2F&returnSecureToken=true&appId=" + _appId;
    Os::OpenURL(url);

    _deepLinkCallback = new DeepLinkCallback([](std::string payload) {
        OnDeepLink(payload);
        DeepLink::Subscribe(_deepLinkCallback);
        delete _deepLinkCallback;
    });
    DeepLink::Unsubscribe(_deepLinkCallback);
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
    if (payloadArgs.find("token") != payloadArgs.end()) {
        _idToken = payloadArgs.at("token");
    }
}