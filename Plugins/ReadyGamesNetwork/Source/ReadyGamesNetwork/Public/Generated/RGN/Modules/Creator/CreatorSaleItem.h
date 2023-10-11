#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../Currency/Currency.h"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace Creator {
    struct CreatorSaleItem {
        string id;
        string name;
        int32_t totalUnit = 0;
        vector<RGN::Modules::Currency::Currency> totalCurrencies;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(CreatorSaleItem, id, name, totalUnit, totalCurrencies)
    };
}}}