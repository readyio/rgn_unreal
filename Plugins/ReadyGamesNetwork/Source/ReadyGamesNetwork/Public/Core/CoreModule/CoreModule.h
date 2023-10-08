#pragma once

#include "../../DeepLink/DeepLink.h"
#include "../../Http/Http.h"
#include "../ConfigureData.h"
#include "../EnvironmentTarget.h"
#include <vector>
#include <string>
#include <functional>

class CoreModule {
private:
    static DeepLinkCallback* _deepLinkCallback;

    static std::string _appId;
    static EnvironmentTarget _environmentTarget;
    static std::string _idToken;
    static std::string _refreshToken;

    static std::string GetApiUrl();
    static std::string GetOAuthUrl();
    static void OnDeepLink(std::string payload);

public:
    static void Initialize();
    static void Deinitialize();

    static void Configure(ConfigureData configureData);

    static void SubscribeToOnSignIn();
    static void UnsubscribeFromOnSignIn();

    static void DevSignIn(std::string email, std::string password);
    static void SignIn();
    static void SignOut();

    template <class TRequestBody, class TResponse>
    static void CallAPI(std::string name, TRequestBody body, const std::function<void(TResponse)>& complete, const std::function<void(int, std::string)> fail) {
        HttpHeaders headers;
        headers.add("Content-type", "application/json");
        if (!_idToken.empty()) {
            headers.add("Authorization", "Bearer " + _idToken);
        }
        std::string url = GetApiUrl() + name;
        Http::Request(url, HttpMethod::POST, headers, body.serialize(),
            [complete, fail](HttpResponse httpResponse) {
                int httpResponseCode = httpResponse.getResponseCode();
                std::string httpResponseBody = httpResponse.getResponseBody();

                if (httpResponseCode == 200) {
                    TResponse response(httpResponseBody);
                    complete(response);
                }
                else {
                    fail(httpResponseCode, httpResponseBody);
                }
            }
        );
    }
};