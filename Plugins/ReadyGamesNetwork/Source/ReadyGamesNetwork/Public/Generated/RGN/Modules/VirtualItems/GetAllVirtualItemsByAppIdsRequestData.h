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
                nlohmann_json_j.at("version").get_to(nlohmann_json_t.version);
            }
            if (nlohmann_json_j.contains("appPackageName")) {
                nlohmann_json_j.at("appPackageName").get_to(nlohmann_json_t.appPackageName);
            }
            if (nlohmann_json_j.contains("appIds")) {
                nlohmann_json_j.at("appIds").get_to(nlohmann_json_t.appIds);
            }
            if (nlohmann_json_j.contains("limit")) {
                nlohmann_json_j.at("limit").get_to(nlohmann_json_t.limit);
            }
            if (nlohmann_json_j.contains("startAfter")) {
                nlohmann_json_j.at("startAfter").get_to(nlohmann_json_t.startAfter);
            }
        }
    };
}}}