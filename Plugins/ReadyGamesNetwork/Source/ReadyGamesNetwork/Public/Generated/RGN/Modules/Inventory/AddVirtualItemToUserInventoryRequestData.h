#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "InventoryItemData.h"
#include "../../Model/Request/BaseRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Inventory {
    /**
     * Request to add new item in user inventory
     */
    struct AddVirtualItemToUserInventoryRequestData : public RGN::Model::Request::BaseRequestData {
        string userId;
        RGN::Modules::Inventory::InventoryItemData virtualItemInventoryData;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(AddVirtualItemToUserInventoryRequestData, userId, virtualItemInventoryData)
    };
}}}