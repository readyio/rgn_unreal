#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace VirtualItems {
    /**
     * Represents properties associated with a virtual item within the Ready Games Network (RGN).
     */
    struct Properties {
        /**
         * List of application identifiers where the properties are used.
         */
        vector<string> appIds;
        /**
         * Game-specific properties in JSON format.
         */
        string json;

        friend void to_json(nlohmann::json& nlohmann_json_j, const Properties& nlohmann_json_t) {
            nlohmann_json_j["appIds"] = nlohmann_json_t.appIds;
            nlohmann_json_j["json"] = nlohmann_json_t.json;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, Properties& nlohmann_json_t) {
            if (nlohmann_json_j.contains("appIds")) {
                auto json_appIds = nlohmann_json_j.at("appIds");
                if (!json_appIds.is_null() && json_appIds.is_array()) {
                    json_appIds.get_to(nlohmann_json_t.appIds);
                }
            }
            if (nlohmann_json_j.contains("json")) {
                auto json_json = nlohmann_json_j.at("json");
                if (!json_json.is_null() && json_json.is_string()) {
                    json_json.get_to(nlohmann_json_t.json);
                }
            }
        }
    };
}}}