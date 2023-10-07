// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace Currency {
struct RGNCoinEconomyProduct {
    string uid;
    float priceInUSD;
    int32_t quantity;
    NLOHMANN_DEFINE_TYPE_INTRUSIVE(RGNCoinEconomyProduct, uid, priceInUSD, quantity)
};
}}}