#pragma once

#include "../json.hpp"
#include "../DeepLink/DeepLink.h"
#include "../Http/Http.h"
#include "RGNConfigureData.h"
#include "RGNEnvironmentTarget.h"
#include "RGNAuthCallback.h"
#include "CancellationToken.h"
#include <vector>
#include <string>
#include <functional>

using namespace std;
using json = nlohmann::json;

class RGNCore {
private:
    static vector<RGNAuthCallback*> _authCallbacks;
    static string _appId;
    static RGNEnvironmentTarget _environmentTarget;
    static string _userId;
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

    static void Configure(RGNConfigureData configureData);

    static void SubscribeToAuthCallback(RGNAuthCallback* callback);
    static void UnsubscribeFromAuthCallback(RGNAuthCallback* callback);

    static void DevSignIn(string email, string password);
    static void SignIn();
    static void SignOut();
    static void RefreshTokens(const function<void(bool)>& callback);

    static bool IsLoggedIn();
    static string GetUserId();
    static string GetUserToken();
    static string GetAppId();
    static string GetStorageBucket();

    static void CallAPI(string name, json body, const function<void(json)>& complete, const function<void(int, string)> fail, CancellationToken cancellationToken);
    static void CallAPI(string name, json body, const function<void(json)>& complete, const function<void(int, string)> fail);
    
    template<class TRequestBody, class TResponse>
    static void CallAPI(string name, TRequestBody body, const function<void(TResponse)>& complete, const function<void(int, string)> fail, CancellationToken cancellationToken) {
        json bodyJson = body;
        CallAPI(name, bodyJson,
            [complete](json response) {
                TResponse tResponse = response.template get<TResponse>();
                complete(tResponse);
            },
        fail, cancellationToken);
    }

    template<class TRequestBody, class TResponse>
    static void CallAPI(string name, TRequestBody body, const function<void(TResponse)>& complete, const function<void(int, string)> fail) {
        CallAPI<TRequestBody, TResponse>(name, body, complete, fail, CancellationToken());
    }

    template<class TRequestBody>
    static void CallAPI(string name, TRequestBody body, const function<void(void)>& complete, const function<void(int, string)> fail, CancellationToken cancellationToken) {
        json bodyJson = body;
        CallAPI(name, bodyJson,
            [complete](json response) {
                complete();
            },
        fail, cancellationToken);
    }

    template<class TRequestBody>
    static void CallAPI(string name, TRequestBody body, const function<void(void)>& complete, const function<void(int, string)> fail) {
        CallAPI<TRequestBody>(name, body, complete, fail, CancellationToken());
    }
};
