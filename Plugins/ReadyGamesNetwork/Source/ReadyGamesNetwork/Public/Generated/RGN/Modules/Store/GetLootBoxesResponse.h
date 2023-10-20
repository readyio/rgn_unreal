#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "LootBox.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Store {
    struct GetLootBoxesResponse {
        vector<RGN::Modules::Store::LootBox> lootBoxes;

        friend void to_json(nlohmann::json& nlohmann_json_j, const GetLootBoxesResponse& nlohmann_json_t) {
            nlohmann_json_j["lootBoxes"] = nlohmann_json_t.lootBoxes;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, GetLootBoxesResponse& nlohmann_json_t) {
            if (nlohmann_json_j.contains("lootBoxes")) {
                nlohmann_json_j.at("lootBoxes").get_to(nlohmann_json_t.lootBoxes);
            }
        }
    };
}}}