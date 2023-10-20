#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "VirtualItem.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace VirtualItems {
    struct VirtualItemsResponseData {
        vector<RGN::Modules::VirtualItems::VirtualItem> virtualItems;

        friend void to_json(nlohmann::json& nlohmann_json_j, const VirtualItemsResponseData& nlohmann_json_t) {
            nlohmann_json_j["virtualItems"] = nlohmann_json_t.virtualItems;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, VirtualItemsResponseData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("virtualItems")) {
                nlohmann_json_j.at("virtualItems").get_to(nlohmann_json_t.virtualItems);
            }
        }
    };
}}}