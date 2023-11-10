#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../../../Core/RGNCore.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Model { namespace Request {
    /**
     * Base class for request data that is sent to a server.
     * It includes common data that is required for all requests.
     */
    struct BaseRequestData {
        /**
         * The package name of the app making the request. This is typically used for identification purposes.
         */
        string appPackageName = RGNCore::GetAppId();

        friend void to_json(nlohmann::json& nlohmann_json_j, const BaseRequestData& nlohmann_json_t) {
            nlohmann_json_j["appPackageName"] = nlohmann_json_t.appPackageName;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, BaseRequestData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("appPackageName")) {
                auto json_appPackageName = nlohmann_json_j.at("appPackageName");
                if (!json_appPackageName.is_null() && json_appPackageName.is_string()) {
                    json_appPackageName.get_to(nlohmann_json_t.appPackageName);
                }
            }
        }
    };
}}}