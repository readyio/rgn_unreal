#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "VirtualItemUpgrade.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Inventory {
    struct UpgradesResponseData {
        string ownedItemId;
        string virtualItemId;
        vector<RGN::Modules::Inventory::VirtualItemUpgrade> itemUpgrades;

        friend void to_json(nlohmann::json& nlohmann_json_j, const UpgradesResponseData& nlohmann_json_t) {
            nlohmann_json_j["ownedItemId"] = nlohmann_json_t.ownedItemId;
            nlohmann_json_j["virtualItemId"] = nlohmann_json_t.virtualItemId;
            nlohmann_json_j["itemUpgrades"] = nlohmann_json_t.itemUpgrades;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, UpgradesResponseData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("ownedItemId")) {
                auto json_ownedItemId = nlohmann_json_j.at("ownedItemId");
                if (!json_ownedItemId.is_null() && json_ownedItemId.is_string()) {
                    json_ownedItemId.get_to(nlohmann_json_t.ownedItemId);
                }
            }
            if (nlohmann_json_j.contains("virtualItemId")) {
                auto json_virtualItemId = nlohmann_json_j.at("virtualItemId");
                if (!json_virtualItemId.is_null() && json_virtualItemId.is_string()) {
                    json_virtualItemId.get_to(nlohmann_json_t.virtualItemId);
                }
            }
            if (nlohmann_json_j.contains("itemUpgrades")) {
                auto json_itemUpgrades = nlohmann_json_j.at("itemUpgrades");
                if (!json_itemUpgrades.is_null() && json_itemUpgrades.is_array()) {
                    json_itemUpgrades.get_to(nlohmann_json_t.itemUpgrades);
                }
            }
        }
    };
}}}