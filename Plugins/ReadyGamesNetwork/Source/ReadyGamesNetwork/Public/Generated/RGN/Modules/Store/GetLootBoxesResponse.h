#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "LootBox.h"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace Store {
    struct GetLootBoxesResponse {
        vector<RGN::Modules::Store::LootBox> lootBoxes;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(GetLootBoxesResponse, lootBoxes)
    };
}}}