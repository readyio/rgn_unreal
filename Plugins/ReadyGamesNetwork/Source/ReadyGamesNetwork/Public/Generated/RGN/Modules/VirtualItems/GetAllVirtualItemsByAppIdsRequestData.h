#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../Model/Request/BaseMigrationRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace VirtualItems {
    struct GetAllVirtualItemsByAppIdsRequestData : public RGN::Model::Request::BaseMigrationRequestData {
        vector<string> appIds;
        int32_t limit = 0;
        string startAfter;

        friend void to_json(nlohmann::json& nlohmann_json_j, const GetAllVirtualItemsByAppIdsRequestData& nlohmann_json_t) {
            nlohmann_json_j["version"] = nlohmann_json_t.version;
            nlohmann_json_j["appPackageName"] = nlohmann_json_t.appPackageName;
            nlohmann_json_j["appIds"] = nlohmann_json_t.appIds;
            nlohmann_json_j["limit"] = nlohmann_json_t.limit;
            nlohmann_json_j["startAfter"] = nlohmann_json_t.startAfter;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, GetAllVirtualItemsByAppIdsRequestData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("version")) {
                auto json_version = nlohmann_json_j.at("version");
                if (!json_version.is_null() && json_version.is_number()) {
                    json_version.get_to(nlohmann_json_t.version);
                }
            }
            if (nlohmann_json_j.contains("appPackageName")) {
                auto json_appPackageName = nlohmann_json_j.at("appPackageName");
                if (!json_appPackageName.is_null() && json_appPackageName.is_string()) {
                    json_appPackageName.get_to(nlohmann_json_t.appPackageName);
                }
            }
            if (nlohmann_json_j.contains("appIds")) {
                auto json_appIds = nlohmann_json_j.at("appIds");
                if (!json_appIds.is_null() && json_appIds.is_array()) {
                    json_appIds.get_to(nlohmann_json_t.appIds);
                }
            }
            if (nlohmann_json_j.contains("limit")) {
                auto json_limit = nlohmann_json_j.at("limit");
                if (!json_limit.is_null() && json_limit.is_number()) {
                    json_limit.get_to(nlohmann_json_t.limit);
                }
            }
            if (nlohmann_json_j.contains("startAfter")) {
                auto json_startAfter = nlohmann_json_j.at("startAfter");
                if (!json_startAfter.is_null() && json_startAfter.is_string()) {
                    json_startAfter.get_to(nlohmann_json_t.startAfter);
                }
            }
        }
    };
}}}