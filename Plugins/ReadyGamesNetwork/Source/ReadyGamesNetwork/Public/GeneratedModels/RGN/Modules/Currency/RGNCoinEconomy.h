// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "RGNCoinEconomyProduct.h"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace Currency {
    struct RGNCoinEconomy {
        vector<RGN::Modules::Currency::RGNCoinEconomyProduct> products;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(RGNCoinEconomy, products)
    };
}}}