// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "InventoryItemData.h"
#include "../VirtualItems/VirtualItem.h"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace Inventory {
    struct InventoryItemsWithVirtualItemsData {
        vector<RGN::Modules::Inventory::InventoryItemData> items;
        vector<RGN::Modules::VirtualItems::VirtualItem> virtualItems;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(InventoryItemsWithVirtualItemsData, items, virtualItems)
    };
}}}