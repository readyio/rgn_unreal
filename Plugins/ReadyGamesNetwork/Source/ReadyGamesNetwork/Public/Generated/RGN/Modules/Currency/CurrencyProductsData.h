#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "CurrencyProduct.h"
#include "CurrencyOffer.h"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace Currency {
    struct CurrencyProductsData {
        vector<RGN::Modules::Currency::CurrencyProduct> products;
        vector<RGN::Modules::Currency::CurrencyOffer> offers;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(CurrencyProductsData, products, offers)
    };
}}}