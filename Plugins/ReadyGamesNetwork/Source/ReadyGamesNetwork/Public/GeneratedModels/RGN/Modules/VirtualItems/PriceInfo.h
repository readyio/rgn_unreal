// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace VirtualItems {
struct PriceInfo {
    vector<string> appIds;
    string itemId;
    string name;
    int32_t quantity;
    int32_t quantityWithoutDiscount;
    string group;
    NLOHMANN_DEFINE_TYPE_INTRUSIVE(PriceInfo, appIds, itemId, name, quantity, quantityWithoutDiscount, group)
};
}}}