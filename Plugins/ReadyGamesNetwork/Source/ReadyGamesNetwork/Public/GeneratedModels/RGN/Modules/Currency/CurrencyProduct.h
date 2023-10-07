// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace Currency {
    struct CurrencyProduct {
        string id;
        string currencyName;
        float price = 0;
        int32_t quantity = 0;
        string type;
        string promotionalSticker;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(CurrencyProduct, id, currencyName, price, quantity, type, promotionalSticker)
    };
}}}