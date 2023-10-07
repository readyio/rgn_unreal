// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "Currency.h"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace Currency {
struct PurchaseInfo {
    vector<RGN::Modules::Currency::Currency> cost;
    int32_t quantity;
    NLOHMANN_DEFINE_TYPE_INTRUSIVE(PurchaseInfo, cost, quantity)
};
}}}