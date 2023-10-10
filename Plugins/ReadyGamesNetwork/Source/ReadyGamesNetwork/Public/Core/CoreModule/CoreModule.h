#pragma once

#include "../../json.hpp"
#include "../../DeepLink/DeepLink.h"
#include "../../Http/Http.h"
#include "../ConfigureData.h"
#include "../EnvironmentTarget.h"
#include "AuthChangeCallback.h"
#include <vector>
#include <string>
#include <functional>

using namespace std;
using json = nlohmann::json;

class CoreModule {
private:
    static vector<AuthChangeCallback*> _authChangeCallbacks;

    static string _appId;
    static EnvironmentTarget _environmentTarget;
    static string _idToken;
    static string _refreshToken;

    static string GetApiUrl();
    static string GetOAuthUrl();

    static void LoadAuthSession();
    static void SaveAuthSession();

    static void NotifyAuthChange();

    static void OnDeepLink(string payload);

public:
    static void Initialize();
    static void Deinitialize();

    static void Configure(ConfigureData configureData);

    static void SubscribeToAuthChange(AuthChangeCallback* callback);
    static void UnsubscribeFromAuthChange(AuthChangeCallback* callback);

    static void DevSignIn(string email, string password);
    static void SignIn();
    static void SignOut();

    static bool IsLoggedIn();
    static string GetUserToken();

    template <class TRequestBody, class TResponse>
    static void CallAPI(string name, TRequestBody body, const function<void(TResponse)>& complete, const function<void(int, string)> fail) {
        HttpHeaders headers;
        headers.add("Content-type", "application/json");
        if (!_idToken.empty()) {
            headers.add("Authorization", "Bearer " + _idToken);
        }
        string url = GetApiUrl() + name;
        json bodyJson = body;
        Http::Request(url, HttpMethod::POST, headers, bodyJson.dump(),
            [complete, fail](HttpResponse httpResponse) {
                int httpResponseCode = httpResponse.getResponseCode();
                string httpResponseBody = httpResponse.getResponseBody();

                if (httpResponseCode == 200) {
                    json responseJson = json::parse(httpResponseBody);
                    TResponse response = responseJson.template get<TResponse>();
                    complete(response);
                }
                else {
                    fail(httpResponseCode, httpResponseBody);
                }
            }
        );
    }
};