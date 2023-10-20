#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../VirtualItems/VirtualItem.h"
#include "../Inventory/InventoryItemData.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Store {
    struct PurchaseItem {
        RGN::Modules::VirtualItems::VirtualItem virtualItem;
        RGN::Modules::Inventory::InventoryItemData inventoryItem;

        friend void to_json(nlohmann::json& nlohmann_json_j, const PurchaseItem& nlohmann_json_t) {
            nlohmann_json_j["virtualItem"] = nlohmann_json_t.virtualItem;
            nlohmann_json_j["inventoryItem"] = nlohmann_json_t.inventoryItem;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, PurchaseItem& nlohmann_json_t) {
            if (nlohmann_json_j.contains("virtualItem")) {
                nlohmann_json_j.at("virtualItem").get_to(nlohmann_json_t.virtualItem);
            }
            if (nlohmann_json_j.contains("inventoryItem")) {
                nlohmann_json_j.at("inventoryItem").get_to(nlohmann_json_t.inventoryItem);
            }
        }
    };
}}}