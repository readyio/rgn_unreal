#pragma once

#include "RGNConfigureData.h"
#include "RGNEnvironmentTarget.h"
#include "../Utility/CancellationToken.h"
#include "../json.hpp"
#include <string>
#include <unordered_map>

namespace RGN {
    class RGNCore {
    private:
        static std::string _appId;
        static std::string _apiKey;
        static RGNEnvironmentTarget _environmentTarget;
        static bool _useFunctionsEmulator;
        static std::string _emulatorHostAndPort;
        static void LogSdkInitializeEvent();

    public:
        static void Initialize(RGNConfigureData configureData, std::function<void()> onInitialize);
        static void SetEmulator(bool useEmulator, std::string endpoint);
        static void Update();
        static void InternalCallAPI(const std::string& name, const std::string& body,
            const std::function<void(const std::string&)>& complete, const std::function<void(const int, const std::string&)>& fail,
            bool computeHmac, CancellationToken cancellationToken);
        static void NonAuthInternalCallAPI(const std::string& name, const std::string& body,
            const std::function<void(const std::string&)>& complete, const std::function<void(const int, const std::string&)>& fail);
        static std::string GetApiRegion();
        static std::string GetApiProjectId();
        static std::string GetApiUrl();
        static std::string GetOAuthUrl();
        static std::string GetStorageBucket();
        static std::string GetAppId();
        static std::string GetApiKey();
        static RGNEnvironmentTarget GetEnvironmentTarget();
        static std::string GetUserId();
        static std::string GetSdkVersion();
        /***
         * CallAPI<void,void>
         **/
        static void CallAPI(const std::string& name,
            const std::function<void(void)>& complete,
            const std::function<void(const int, const std::string&)>& fail,
            bool computeHmac, CancellationToken cancellationToken) {
            InternalCallAPI(
                name, "", [complete](std::string response)
                { complete(); },
                fail, computeHmac, cancellationToken);
        }
        static void CallAPI(const std::string& name,
            const std::function<void(void)>& complete,
            const std::function<void(const int, const std::string&)>& fail, bool computeHmac = false) {
            CallAPI(name, complete, fail, computeHmac, CancellationToken());
        }
        /***
         * CallAPI<std::string,std::string>
         **/
        static void CallAPI(const std::string& name, const std::string& body,
            const std::function<void(const std::string&)>& complete,
            const std::function<void(const int, const std::string&)>& fail,
            bool computeHmac, CancellationToken cancellationToken) {
            InternalCallAPI(name, body, complete, fail, computeHmac, cancellationToken);
        }
        static void CallAPI(std::string name, std::string body,
            const std::function<void(const std::string&)>& complete,
            const std::function<void(const int, const std::string&)>& fail, bool computeHmac = false) {
            CallAPI(name, body, complete, fail, computeHmac, CancellationToken());
        }
        /***
         * CallAPI<nlohmann::json,std::string>
         **/
        static void CallAPI(const std::string& name, const nlohmann::json& body,
            const std::function<void(const std::string&)>& complete,
            const std::function<void(const int, const std::string&)>& fail,
            bool computeHmac, CancellationToken cancellationToken) {
            InternalCallAPI(name, body.dump(), complete, fail, computeHmac, cancellationToken);
        }
        static void CallAPI(const std::string& name, const nlohmann::json& body,
            const std::function<void(const std::string&)>& complete,
            const std::function<void(const int, const std::string&)>& fail, bool computeHmac = false) {
            CallAPI(name, body, complete, fail, computeHmac, CancellationToken());
        }
        /***
         * CallAPI<std::string,void>
         **/
        static void CallAPI(const std::string& name, const std::string& body,
            const std::function<void(void)>& complete,
            const std::function<void(const int, const std::string&)>& fail,
            bool computeHmac, CancellationToken cancellationToken) {
            InternalCallAPI(
                name, body, [complete](std::string response)
                { complete(); },
                fail, computeHmac, cancellationToken);
        }
        static void CallAPI(const std::string& name, const std::string& body,
            const std::function<void(void)>& complete,
            const std::function<void(const int, const std::string&)>& fail, bool computeHmac = false) {
            CallAPI(name, body, complete, fail, computeHmac, CancellationToken());
        }
        /***
         * CallAPI<CustomModel,CustomModel>
         **/
        template <class TRequestBody, class TResponse>
        static void CallAPI(const std::string& name, const TRequestBody& body,
            const std::function<void(const TResponse&)>& complete,
            const std::function<void(const int, const std::string&)>& fail,
            bool computeHmac, CancellationToken cancellationToken) {
            nlohmann::json bodyJson = body;
            InternalCallAPI(
                name, bodyJson.dump(), [complete](std::string response)
                {
                    nlohmann::json responseJson = nlohmann::json::parse(response);
                    complete(responseJson.template get<TResponse>()); },
                fail, computeHmac, cancellationToken);
        }
        template <class TRequestBody, class TResponse>
        static void CallAPI(const std::string& name, const TRequestBody& body,
            const std::function<void(const TResponse&)>& complete,
            const std::function<void(const int, const std::string&)>& fail, bool computeHmac = false) {
            CallAPI<TRequestBody, TResponse>(name, body, complete, fail, computeHmac, CancellationToken());
        }
        /***
         * CallAPI<CustomModel,std::string>
         **/
        template <class TRequestBody>
        static void CallAPI(const std::string& name, const TRequestBody& body,
            const std::function<void(const std::string&)>& complete,
            const std::function<void(const int, const std::string&)>& fail,
            bool computeHmac, CancellationToken cancellationToken) {
            nlohmann::json bodyJson = body;
            InternalCallAPI(
                name, bodyJson.dump(), [complete](std::string response)
                { complete(response); },
                fail, computeHmac, cancellationToken);
        }
        template <class TRequestBody>
        static void CallAPI(const std::string& name, const TRequestBody& body,
            const std::function<void(const std::string&)>& complete,
            const std::function<void(const int, const std::string&)>& fail, bool computeHmac = false) {
            CallAPI<TRequestBody>(name, body, complete, fail, computeHmac, CancellationToken());
        }
        /***
         * CallAPI<CustomModel,void>
         **/
        template <class TRequestBody>
        static void CallAPI(const std::string& name, const TRequestBody& body,
            const std::function<void(void)>& complete,
            const std::function<void(const int, const std::string&)>& fail, bool computeHmac, CancellationToken cancellationToken) {
            nlohmann::json bodyJson = body;
            InternalCallAPI(
                name, bodyJson.dump(), [complete](std::string response)
                { complete(); },
                fail, computeHmac, cancellationToken);
        }
        template <class TRequestBody>
        static void CallAPI(const std::string& name, const TRequestBody& body,
            const std::function<void(void)>& complete,
            const std::function<void(const int, const std::string&)>& fail, bool computeHmac = false) {
            CallAPI<TRequestBody>(name, body, complete, fail, computeHmac, CancellationToken());
        }
    };
}