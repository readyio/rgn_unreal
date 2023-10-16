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
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(PurchaseItem, virtualItem, inventoryItem)
    };
}}}