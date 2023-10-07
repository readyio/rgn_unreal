// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "VirtualItemUpgrade.h"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace Inventory {
    struct UpgradesResponseData {
        string ownedItemId;
        string virtualItemId;
        vector<RGN::Modules::Inventory::VirtualItemUpgrade> itemUpgrades;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(UpgradesResponseData, ownedItemId, virtualItemId, itemUpgrades)
    };
}}}