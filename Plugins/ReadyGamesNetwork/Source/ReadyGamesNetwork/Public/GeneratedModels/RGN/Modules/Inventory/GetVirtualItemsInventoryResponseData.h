// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "InventoryItemData.h"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace Inventory {
struct GetVirtualItemsInventoryResponseData {
    vector<RGN::Modules::Inventory::InventoryItemData> virtualItemInventoryDatas;
    NLOHMANN_DEFINE_TYPE_INTRUSIVE(GetVirtualItemsInventoryResponseData, virtualItemInventoryDatas)
};
}}}