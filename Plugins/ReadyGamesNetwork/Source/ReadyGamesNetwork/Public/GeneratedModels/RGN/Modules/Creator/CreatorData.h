#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../Currency/Currency.h"
#include "CreatorSaleItem.h"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace Creator {
    struct CreatorData {
        vector<RGN::Modules::Currency::Currency> unclaimedCurrencies;
        vector<RGN::Modules::Creator::CreatorSaleItem> creatorSaleItems;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(CreatorData, unclaimedCurrencies, creatorSaleItems)
    };
}}}