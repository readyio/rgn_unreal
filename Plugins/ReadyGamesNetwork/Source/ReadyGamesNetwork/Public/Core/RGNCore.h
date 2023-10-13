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
    static string GetUserToken();

    static string GetAppId() { return _appId; }

    template <class TRequestBody, class TResponse>
    static void CallAPI(string name, TRequestBody body, const function<void(TResponse)>& complete, const function<void(int, string)> fail,
        CancellationToken* cancellationToken) 
    {
        HttpHeaders headers;
        headers.add("Content-type", "application/json");
        if (!_idToken.empty()) {
            headers.add("Authorization", "Bearer " + _idToken);
        }
        string url = GetApiUrl() + name;
        json bodyJson = body;
        Http::Request(url, HttpMethod::POST, headers, bodyJson.dump(), [name, body, complete, fail, cancellationToken](HttpResponse httpResponse) {
            if (cancellationToken && cancellationToken->isCancellationRequested()) {
                return;
            }

            int httpResponseCode = httpResponse.getResponseCode();
            string httpResponseBody = httpResponse.getResponseBody();

            if (httpResponseCode == 200) {
                json responseJson = json::parse(httpResponseBody);
                TResponse response = responseJson.template get<TResponse>();
                complete(response);
            }
            else if (httpResponseCode == 401) {
                if (_refreshToken != "") {
                    RefreshTokens([name, body, complete, fail, cancellationToken, httpResponseCode, httpResponseBody](bool successRefreshTokens) {
                        if (cancellationToken && cancellationToken->isCancellationRequested()) {
                            return;
                        }
                            
                        if (successRefreshTokens) {
                            CallAPI<TRequestBody, TResponse>(name, body, complete, fail, cancellationToken);
                        }
                        else {
                            SignOut();
                            fail(httpResponseCode, httpResponseBody);
                        }
                    });
                }
                else {
                    SignOut();
                    fail(httpResponseCode, httpResponseBody);
                }
            }
            else {
                SignOut();
                fail(httpResponseCode, httpResponseBody);
            }
        });
    }

    template <class TRequestBody, class TResponse>
    static void CallAPI(string name, TRequestBody body, const function<void(TResponse)>& complete, const function<void(int, string)> fail) {
        CallAPI<TRequestBody, TResponse>(name, body, complete, fail, nullptr);
    }

    template <class TRequestBody>
    static void CallAPI(string name, TRequestBody body, const function<void()>& complete, const function<void(int, string)> fail,
        CancellationToken* cancellationToken) 
    {
        HttpHeaders headers;
        headers.add("Content-type", "application/json");
        if (!_idToken.empty()) {
            headers.add("Authorization", "Bearer " + _idToken);
        }
        string url = GetApiUrl() + name;
        json bodyJson = body;
        Http::Request(url, HttpMethod::POST, headers, bodyJson.dump(), [name, body, complete, fail, cancellationToken](HttpResponse httpResponse) {
            if (cancellationToken && cancellationToken->isCancellationRequested()) {
                return;
            }

            int httpResponseCode = httpResponse.getResponseCode();
            string httpResponseBody = httpResponse.getResponseBody();

            if (httpResponseCode == 200) {
                complete();
            }
            else if (httpResponseCode == 401) {
                if (_refreshToken != "") {
                    RefreshTokens([name, body, complete, fail, cancellationToken, httpResponseCode, httpResponseBody](bool successRefreshTokens) {
                        if (cancellationToken && cancellationToken->isCancellationRequested()) {
                            return;
                        }

                        if (successRefreshTokens) {
                            CallAPI<TRequestBody>(name, body, complete, fail, cancellationToken);
                        }
                        else {
                            SignOut();
                            fail(httpResponseCode, httpResponseBody);
                        }
                    });
                }
                else {
                    SignOut();
                    fail(httpResponseCode, httpResponseBody);
                }
            }
            else {
                SignOut();
                fail(httpResponseCode, httpResponseBody);
            }
        });
    }

    template <class TRequestBody>
    static void CallAPI(string name, TRequestBody body, const function<void()>& complete, const function<void(int, string)> fail) {
        CallAPI<TRequestBody>(name, body, complete, fail, nullptr);
    }
};