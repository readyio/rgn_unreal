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

    static void InternalCallAPI(string name, string body,
        const function<void(string)>& complete, const function<void(int, string)>& fail, CancellationToken cancellationToken);
    static void NonAuthInternalCallAPI(string name, string body,
        const function<void(string)>& complete, const function<void(int, string)>& fail);
    static void LoadAuthSession();
    static void SaveAuthSession();
    static void NotifyAuthChange();
    static void OnDeepLink(string payload, const function<void(bool)>& onSignIn);

public:
    static void Initialize();
    static void Deinitialize();

    static void Configure(RGNConfigureData configureData);

    static void SubscribeToAuthCallback(RGNAuthCallback* onAuthChange);
    static void UnsubscribeFromAuthCallback(RGNAuthCallback* onAuthChange);

    static void DevSignIn(string email, string password, const function<void(bool)>& onSignIn);
    static void SignIn(const function<void(bool)>& onSignIn);
    static void SignOut();
    static void RefreshTokens(const function<void(bool)>& callback);

    static bool IsLoggedIn();
    static string GetUserId();
    static string GetUserToken();
    static string GetAppId();
    static string GetStorageBucket();
 
    /***
    * CallAPI<void,void>
    **/
    static void CallAPI(string name,
        const function<void(void)>& complete,
        const function<void(int, string)>& fail, CancellationToken cancellationToken) {
        InternalCallAPI(name, "", [complete](string response) {
            complete();
        }, fail, cancellationToken);
    }
    static void CallAPI(string name,
        const function<void(void)>& complete,
        const function<void(int, string)>& fail) {
        CallAPI(name, complete, fail, CancellationToken());
    }
    /***
    * CallAPI<string,string>
    **/
    static void CallAPI(string name, string body,
        const function<void(string)>& complete,
        const function<void(int, string)>& fail, CancellationToken cancellationToken) {
        InternalCallAPI(name, body, complete, fail, cancellationToken);
    }
    static void CallAPI(string name, string body,
        const function<void(string)>& complete,
        const function<void(int, string)>& fail) {
        CallAPI(name, body, complete, fail, CancellationToken());
    }
    /***
    * CallAPI<json,string>
    **/
    static void CallAPI(string name, json body,
        const function<void(string)>& complete,
        const function<void(int, string)>& fail, CancellationToken cancellationToken) {
        InternalCallAPI(name, body.dump(), complete, fail, cancellationToken);
    }
    static void CallAPI(string name, json body,
        const function<void(string)>& complete,
        const function<void(int, string)>& fail) {
        CallAPI(name, body, complete, fail, CancellationToken());
    }
    /***
    * CallAPI<string,void>
    **/
    static void CallAPI(string name, string body,
        const function<void(void)>& complete,
        const function<void(int, string)>& fail, CancellationToken cancellationToken) {
        InternalCallAPI(name, body, [complete](string response) {
            complete();
        }, fail, cancellationToken);
    }
    static void CallAPI(string name, string body,
        const function<void(void)>& complete,
        const function<void(int, string)>& fail) {
        CallAPI(name, body, complete, fail, CancellationToken());
    }
    /***
    * CallAPI<CustomModel,CustomModel>
    **/
    template<class TRequestBody, class TResponse>
    static void CallAPI(string name, TRequestBody body,
        const function<void(TResponse)>& complete,
        const function<void(int, string)>& fail, CancellationToken cancellationToken) {
        json bodyJson = body;
        InternalCallAPI(name, bodyJson.dump(), [complete](string response) {
            json responseJson = json::parse(response);
            complete(responseJson.template get<TResponse>());
        }, fail, cancellationToken);
    }
    template<class TRequestBody, class TResponse>
    static void CallAPI(string name, TRequestBody body,
        const function<void(TResponse)>& complete,
        const function<void(int, string)>& fail) {
        CallAPI<TRequestBody, TResponse>(name, body, complete, fail, CancellationToken());
    }
    /***
    * CallAPI<CustomModel,string>
    **/
    template<class TRequestBody>
    static void CallAPI(string name, TRequestBody body,
        const function<void(string)>& complete,
        const function<void(int, string)>& fail, CancellationToken cancellationToken) {
        json bodyJson = body;
        InternalCallAPI(name, bodyJson.dump(), [complete](string response) {
            complete(response);
            }, fail, cancellationToken);
    }
    template<class TRequestBody>
    static void CallAPI(string name, TRequestBody body,
        const function<void(string)>& complete,
        const function<void(int, string)>& fail) {
        CallAPI<TRequestBody>(name, body, complete, fail, CancellationToken());
    }
    /***
    * CallAPI<CustomModel,void>
    **/
    template<class TRequestBody>
    static void CallAPI(string name, TRequestBody body,
        const function<void(void)>& complete,
        const function<void(int, string)>& fail, CancellationToken cancellationToken) {
        json bodyJson = body;
        InternalCallAPI(name, bodyJson.dump(), [complete](string response) {
            complete();
            }, fail, cancellationToken);
    }
    template<class TRequestBody>
    static void CallAPI(string name, TRequestBody body,
        const function<void(void)>& complete,
        const function<void(int, string)>& fail) {
        CallAPI<TRequestBody>(name, body, complete, fail, CancellationToken());
    }
};
