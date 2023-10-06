#include "RGNCoreModule.h"
#include "OSAdapter.h"

DeepLinkListener* RGNCoreModule::_deepLinkListener = nullptr;
std::string RGNCoreModule::_appId = "";
std::string RGNCoreModule::_idToken = "";

void RGNCoreModule::Initialize() {
    DeepLinkAdapter::Initialize();
    DeepLinkAdapter::Start();
    // TODO: Read auth session from disk
}

void RGNCoreModule::Deinitialize() {
    DeepLinkAdapter::Stop();
}

void RGNCoreModule::Configure(std::string& appId) {
    _appId = appId;
}

const std::string RGNCoreModule::getApiUrl() {
    return "https://us-central1-readymaster-development.cloudfunctions.net/";
}

const std::string& RGNCoreModule::getAppId() {
    return _appId;
}

void RGNCoreModule::SignIn() {
    if (_deepLinkListener != nullptr) {
        delete _deepLinkListener;
    }

    std::string redirectUrl = _appId + "://";
    // TODO: Do not use hardcoded base url
    std::string url = "https://development-oauth.ready.gg/?url_redirect=" + redirectUrl + "%2F&returnSecureToken=true&appId=" + _appId;
    OSAdapter::OpenURL(url);

    _deepLinkListener = new DeepLinkListener([](std::string payload) {
        OnDeepLink(payload);
        DeepLinkAdapter::RemoveListener(_deepLinkListener);
        delete _deepLinkListener;
    });
    DeepLinkAdapter::AddListener(_deepLinkListener);
}

void RGNCoreModule::SignOut() {
    _idToken = "";
    // TODO: Clean stored at disk auth session
}

void RGNCoreModule::Request(std::string url, HttpMethod method, HttpHeaders& headers, std::string body, const std::function<void(HttpResponse)>& callback) {
    if (!_idToken.empty()) {
        headers.add("Authorization", "Bearer " + _idToken);
    }
    HttpAdapter::Request(url, method, headers, body, callback);
}

void RGNCoreModule::OnDeepLink(std::string payload) {
    std::unordered_map<std::string, std::string> payloadArgs = HttpUtility::ParseURL(payload);
    if (payloadArgs.find("token") != payloadArgs.end()) {
        _idToken = payloadArgs.at("token");
    }
}