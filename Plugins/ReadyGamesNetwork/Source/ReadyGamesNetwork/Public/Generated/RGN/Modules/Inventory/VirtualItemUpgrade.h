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
                nlohmann_json_j.at("upgradeId").get_to(nlohmann_json_t.upgradeId);
            }
            if (nlohmann_json_j.contains("upgradeLevel")) {
                nlohmann_json_j.at("upgradeLevel").get_to(nlohmann_json_t.upgradeLevel);
            }
        }
    };
}}}