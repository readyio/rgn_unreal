#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Inventory {
    struct VirtualItemUpgrade {
        string upgradeId;
        int32_t upgradeLevel = 0;

        friend void to_json(nlohmann::json& nlohmann_json_j, const VirtualItemUpgrade& nlohmann_json_t) {
            nlohmann_json_j["upgradeId"] = nlohmann_json_t.upgradeId;
            nlohmann_json_j["upgradeLevel"] = nlohmann_json_t.upgradeLevel;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, VirtualItemUpgrade& nlohmann_json_t) {
            if (nlohmann_json_j.contains("upgradeId")) {
                auto json_upgradeId = nlohmann_json_j.at("upgradeId");
                if (!json_upgradeId.is_null() && json_upgradeId.is_string()) {
                    json_upgradeId.get_to(nlohmann_json_t.upgradeId);
                }
            }
            if (nlohmann_json_j.contains("upgradeLevel")) {
                auto json_upgradeLevel = nlohmann_json_j.at("upgradeLevel");
                if (!json_upgradeLevel.is_null() && json_upgradeLevel.is_number()) {
                    json_upgradeLevel.get_to(nlohmann_json_t.upgradeLevel);
                }
            }
        }
    };
}}}