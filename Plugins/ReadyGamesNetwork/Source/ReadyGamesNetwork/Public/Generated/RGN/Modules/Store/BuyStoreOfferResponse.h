#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "PurchaseItem.h"
#include "../Currency/Currency.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Store {
    struct BuyStoreOfferResponse {
        string offerId;
        vector<RGN::Modules::Store::PurchaseItem> purchasedItems;
        vector<RGN::Modules::Currency::Currency> updatedCurrencies;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(BuyStoreOfferResponse, offerId, purchasedItems, updatedCurrencies)
    };
}}}