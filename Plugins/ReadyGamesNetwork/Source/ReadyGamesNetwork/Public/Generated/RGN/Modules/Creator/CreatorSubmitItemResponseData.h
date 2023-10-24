#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../VirtualItems/VirtualItem.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Creator {
    struct CreatorSubmitItemResponseData {
        RGN::Modules::VirtualItems::VirtualItem addedItem;

        friend void to_json(nlohmann::json& nlohmann_json_j, const CreatorSubmitItemResponseData& nlohmann_json_t) {
            nlohmann_json_j["addedItem"] = nlohmann_json_t.addedItem;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, CreatorSubmitItemResponseData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("addedItem")) {
                auto json_addedItem = nlohmann_json_j.at("addedItem");
                if (!json_addedItem.is_null()) {
                    json_addedItem.get_to(nlohmann_json_t.addedItem);
                }
            }
        }
    };
}}}