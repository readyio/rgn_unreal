// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace Currency {
struct CurrencyOffer {
    string productId;
    string offeredProductId;
    double remainingTime;
    float offeringPrice;
    string promotionalMessage;
    NLOHMANN_DEFINE_TYPE_INTRUSIVE(CurrencyOffer, productId, offeredProductId, remainingTime, offeringPrice, promotionalMessage)
};
}}}