// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../Model/Request/BaseRequestData.h"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace Inventory {
struct UpgradeRequestData : public RGN::Model::Request::BaseRequestData {
    string ownedItemId;
    string upgradeId;
    int32_t newUpgradeLevel = 0;
    NLOHMANN_DEFINE_TYPE_INTRUSIVE(UpgradeRequestData, ownedItemId, upgradeId, newUpgradeLevel)
};
}}}