#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "VirtualItem.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace VirtualItems {
    struct AddVirtualItemResponseData {
        RGN::Modules::VirtualItems::VirtualItem virtualItem;

        friend void to_json(nlohmann::json& nlohmann_json_j, const AddVirtualItemResponseData& nlohmann_json_t) {
            nlohmann_json_j["virtualItem"] = nlohmann_json_t.virtualItem;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, AddVirtualItemResponseData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("virtualItem")) {
                auto json_virtualItem = nlohmann_json_j.at("virtualItem");
                if (!json_virtualItem.is_null()) {
                    json_virtualItem.get_to(nlohmann_json_t.virtualItem);
                }
            }
        }
    };
}}}