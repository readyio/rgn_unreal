#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../VirtualItems/VirtualItem.h"
#include "../../Model/Request/BaseRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Inventory {
    struct ChangeVirtualItemsQuantityResponseData : public RGN::Model::Request::BaseRequestData {
        vector<RGN::Modules::VirtualItems::VirtualItem> updatedItems;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(ChangeVirtualItemsQuantityResponseData, updatedItems)
    };
}}}