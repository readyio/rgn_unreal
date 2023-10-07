// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace Inventory {
struct VirtualItemUpgrade {
    string upgradeId;
    int32_t upgradeLevel = 0;
    NLOHMANN_DEFINE_TYPE_INTRUSIVE(VirtualItemUpgrade, upgradeId, upgradeLevel)
};
}}}