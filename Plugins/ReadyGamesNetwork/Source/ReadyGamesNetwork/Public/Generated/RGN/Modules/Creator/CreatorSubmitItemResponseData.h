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
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(CreatorSubmitItemResponseData, addedItem)
    };
}}}