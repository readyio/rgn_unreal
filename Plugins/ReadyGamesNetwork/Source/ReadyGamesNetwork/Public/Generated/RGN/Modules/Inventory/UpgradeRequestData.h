#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../Model/Request/BaseRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Inventory {
    struct UpgradeRequestData : public RGN::Model::Request::BaseRequestData {
        string ownedItemId;
        string upgradeId;
        int32_t newUpgradeLevel = 0;

        friend void to_json(nlohmann::json& nlohmann_json_j, const UpgradeRequestData& nlohmann_json_t) {
            nlohmann_json_j["appPackageName"] = nlohmann_json_t.appPackageName;
            nlohmann_json_j["ownedItemId"] = nlohmann_json_t.ownedItemId;
            nlohmann_json_j["upgradeId"] = nlohmann_json_t.upgradeId;
            nlohmann_json_j["newUpgradeLevel"] = nlohmann_json_t.newUpgradeLevel;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, UpgradeRequestData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("appPackageName")) {
                nlohmann_json_j.at("appPackageName").get_to(nlohmann_json_t.appPackageName);
            }
            if (nlohmann_json_j.contains("ownedItemId")) {
                nlohmann_json_j.at("ownedItemId").get_to(nlohmann_json_t.ownedItemId);
            }
            if (nlohmann_json_j.contains("upgradeId")) {
                nlohmann_json_j.at("upgradeId").get_to(nlohmann_json_t.upgradeId);
            }
            if (nlohmann_json_j.contains("newUpgradeLevel")) {
                nlohmann_json_j.at("newUpgradeLevel").get_to(nlohmann_json_t.newUpgradeLevel);
            }
        }
    };
}}}