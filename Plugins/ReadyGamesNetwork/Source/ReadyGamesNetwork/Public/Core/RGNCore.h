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
    static string _apiKey;
    static RGNEnvironmentTarget _environmentTarget;
    static bool _useFunctionsEmulator;
    static string _emulatorHostAndPort;
    static string _userId;
    static string _idToken;
    static string _refreshToken;

    static string GetApiRegion();
    static string GetApiProjectId();
    static string GetApiUrl();
    static string GetOAuthUrl();
    static string GetApiKey();

    static void InternalCallAPI(const string& name, const string& body,
        const function<void(const string&)>& complete, const function<void(const int, const string&)>& fail,
        bool computeHmac, CancellationToken cancellationToken);
    static void NonAuthInternalCallAPI(const string& name, const string& body,
        const function<void(const string&)>& complete, const function<void(const int, const string&)>& fail);
    static void LoadAuthSession();
    static void SaveAuthSession();
    static void NotifyAuthChange();
    static void OnDeepLink(const string& payload, const function<void(bool)>& onSignIn);

public:
    static void Initialize(RGNConfigureData configureData);

    static void SubscribeToAuthCallback(RGNAuthCallback* onAuthChange);
    static void UnsubscribeFromAuthCallback(RGNAuthCallback* onAuthChange);

    static void DevSignIn(const string& email, const string& password, const function<void(bool)>& onSignIn);
    static void SignIn(const function<void(bool)>& onSignIn);
    static void SignInAnonymously(const function<void(bool)>& onSignIn);
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
    static void CallAPI(const string& name,
        const function<void(void)>& complete,
        const function<void(const int, const string&)>& fail,
        bool computeHmac, CancellationToken cancellationToken) {
        InternalCallAPI(name, "", [complete](string response) {
            complete();
        }, fail, computeHmac, cancellationToken);
    }
    static void CallAPI(const string& name,
        const function<void(void)>& complete,
        const function<void(const int, const string&)>& fail, bool computeHmac = false) {
        CallAPI(name, complete, fail, computeHmac, CancellationToken());
    }
    /***
    * CallAPI<string,string>
    **/
    static void CallAPI(const string& name, const string& body,
        const function<void(const string&)>& complete,
        const function<void(const int, const string&)>& fail,
        bool computeHmac, CancellationToken cancellationToken) {
        InternalCallAPI(name, body, complete, fail, computeHmac, cancellationToken);
    }
    static void CallAPI(string name, string body,
        const function<void(const string&)>& complete,
        const function<void(const int, const string&)>& fail, bool computeHmac = false) {
        CallAPI(name, body, complete, fail, computeHmac, CancellationToken());
    }
    /***
    * CallAPI<json,string>
    **/
    static void CallAPI(const string& name, const json& body,
        const function<void(const string&)>& complete,
        const function<void(const int, const string&)>& fail,
        bool computeHmac, CancellationToken cancellationToken) {
        InternalCallAPI(name, body.dump(), complete, fail, computeHmac, cancellationToken);
    }
    static void CallAPI(const string& name, const json& body,
        const function<void(const string&)>& complete,
        const function<void(const int, const string&)>& fail, bool computeHmac = false) {
        CallAPI(name, body, complete, fail, computeHmac, CancellationToken());
    }
    /***
    * CallAPI<string,void>
    **/
    static void CallAPI(const string& name, const string& body,
        const function<void(void)>& complete,
        const function<void(const int, const string&)>& fail,
        bool computeHmac, CancellationToken cancellationToken) {
        InternalCallAPI(name, body, [complete](string response) {
            complete();
        }, fail, computeHmac, cancellationToken);
    }
    static void CallAPI(const string& name, const string& body,
        const function<void(void)>& complete,
        const function<void(const int, const string&)>& fail, bool computeHmac = false) {
        CallAPI(name, body, complete, fail, computeHmac, CancellationToken());
    }
    /***
    * CallAPI<CustomModel,CustomModel>
    **/
    template<class TRequestBody, class TResponse>
    static void CallAPI(const string& name, const TRequestBody& body,
        const function<void(const TResponse&)>& complete,
        const function<void(const int, const string&)>& fail,
        bool computeHmac, CancellationToken cancellationToken) {
        json bodyJson = body;
        InternalCallAPI(name, bodyJson.dump(), [complete](string response) {
            json responseJson = json::parse(response);
            complete(responseJson.template get<TResponse>());
        }, fail, computeHmac, cancellationToken);
    }
    template<class TRequestBody, class TResponse>
    static void CallAPI(const string& name, const TRequestBody& body,
        const function<void(const TResponse&)>& complete,
        const function<void(const int, const string&)>& fail, bool computeHmac = false) {
        CallAPI<TRequestBody, TResponse>(name, body, complete, fail, computeHmac, CancellationToken());
    }
    /***
    * CallAPI<CustomModel,string>
    **/
    template<class TRequestBody>
    static void CallAPI(const string& name, const TRequestBody& body,
        const function<void(const string&)>& complete,
        const function<void(const int, const string&)>& fail,
        bool computeHmac, CancellationToken cancellationToken) {
        json bodyJson = body;
        InternalCallAPI(name, bodyJson.dump(), [complete](string response) {
            complete(response);
            }, fail, computeHmac, cancellationToken);
    }
    template<class TRequestBody>
    static void CallAPI(const string& name, const TRequestBody& body,
        const function<void(const string&)>& complete,
        const function<void(const int, const string&)>& fail, bool computeHmac = false) {
        CallAPI<TRequestBody>(name, body, complete, fail, computeHmac, CancellationToken());
    }
    /***
    * CallAPI<CustomModel,void>
    **/
    template<class TRequestBody>
    static void CallAPI(const string& name, const TRequestBody& body,
        const function<void(void)>& complete,
        const function<void(const int, const string&)>& fail, bool computeHmac, CancellationToken cancellationToken) {
        json bodyJson = body;
        InternalCallAPI(name, bodyJson.dump(), [complete](string response) {
            complete();
            }, fail, computeHmac, cancellationToken);
    }
    template<class TRequestBody>
    static void CallAPI(const string& name, const TRequestBody& body,
        const function<void(void)>& complete,
        const function<void(const int, const string&)>& fail, bool computeHmac = false) {
        CallAPI<TRequestBody>(name, body, complete, fail, false, CancellationToken());
    }
};
