// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "VirtualItemUpgrade.h"
#include "../VirtualItems/Properties.h"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace Inventory {
    struct InventoryItemData {
        string id;
        string virtualItemId;
        vector<string> appIds;
        vector<string> tags;
        int32_t quantity = 0;
        string status;
        int64_t createdAt = 0;
        int64_t updatedAt = 0;
        vector<RGN::Modules::Inventory::VirtualItemUpgrade> itemUpgrades;
        vector<RGN::Modules::VirtualItems::Properties> properties;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(InventoryItemData, id, virtualItemId, appIds, tags, quantity, status, createdAt, updatedAt, itemUpgrades, properties)
    };
}}}