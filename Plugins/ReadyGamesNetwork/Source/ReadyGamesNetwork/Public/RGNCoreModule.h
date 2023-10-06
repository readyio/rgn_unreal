#pragma once

#include "HttpAdapter.h"
#include "HttpMethod.h"
#include "HttpHeaders.h"
#include "HttpResponse.h"
#include "HttpUtility.h"
#include "DeepLinkAdapter.h"
#include "DeepLinkListener.h"
#include <string>
#include <functional>

class RGNCoreModule {
private:
    static DeepLinkListener* _deepLinkListener;
    static std::string _appId;
    static std::string _idToken;

    static void OnDeepLink(std::string payload);

public:
    static void Initialize();
    static void Deinitialize();

    static void Configure(std::string& appId);
    static const std::string getApiUrl();
    static const std::string& getAppId();

    static void SignIn();
    static void SignOut();

    static void Request(std::string url, HttpMethod method, HttpHeaders& headers, std::string body, const std::function<void(HttpResponse)>& callback);
};