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
                auto json_appPackageName = nlohmann_json_j.at("appPackageName");
                if (!json_appPackageName.is_null() && json_appPackageName.is_string()) {
                    json_appPackageName.get_to(nlohmann_json_t.appPackageName);
                }
            }
            if (nlohmann_json_j.contains("ownedItemId")) {
                auto json_ownedItemId = nlohmann_json_j.at("ownedItemId");
                if (!json_ownedItemId.is_null() && json_ownedItemId.is_string()) {
                    json_ownedItemId.get_to(nlohmann_json_t.ownedItemId);
                }
            }
            if (nlohmann_json_j.contains("upgradeId")) {
                auto json_upgradeId = nlohmann_json_j.at("upgradeId");
                if (!json_upgradeId.is_null() && json_upgradeId.is_string()) {
                    json_upgradeId.get_to(nlohmann_json_t.upgradeId);
                }
            }
            if (nlohmann_json_j.contains("newUpgradeLevel")) {
                auto json_newUpgradeLevel = nlohmann_json_j.at("newUpgradeLevel");
                if (!json_newUpgradeLevel.is_null() && json_newUpgradeLevel.is_number()) {
                    json_newUpgradeLevel.get_to(nlohmann_json_t.newUpgradeLevel);
                }
            }
        }
    };
}}}