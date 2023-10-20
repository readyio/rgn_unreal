#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "BaseRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Model { namespace Request {
    /**
     * This class supports multiple versions of an API by appending a "version" parameter to the request data.
     */
    struct BaseMigrationRequestData : public RGN::Model::Request::BaseRequestData {
        /**
         * Represents the current version of the API implementation on the server.
         */
        int32_t version = 2;

        friend void to_json(nlohmann::json& nlohmann_json_j, const BaseMigrationRequestData& nlohmann_json_t) {
            nlohmann_json_j["appPackageName"] = nlohmann_json_t.appPackageName;
            nlohmann_json_j["version"] = nlohmann_json_t.version;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, BaseMigrationRequestData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("appPackageName")) {
                nlohmann_json_j.at("appPackageName").get_to(nlohmann_json_t.appPackageName);
            }
            if (nlohmann_json_j.contains("version")) {
                nlohmann_json_j.at("version").get_to(nlohmann_json_t.version);
            }
        }
    };
}}}