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
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(AddVirtualItemResponseData, virtualItem)
    };
}}}