// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "VirtualItem.h"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace VirtualItems {
    struct VirtualItemsResponseData {
        vector<RGN::Modules::VirtualItems::VirtualItem> virtualItems;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(VirtualItemsResponseData, virtualItems)
    };
}}}