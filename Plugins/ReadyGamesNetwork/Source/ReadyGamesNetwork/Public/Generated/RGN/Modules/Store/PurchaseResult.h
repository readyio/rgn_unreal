#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../Inventory/InventoryItemData.h"
#include "../Currency/Currency.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Store {
    struct PurchaseResult {
        string offerId;
        vector<RGN::Modules::Inventory::InventoryItemData> items;
        vector<RGN::Modules::Currency::Currency> updatedCurrencies;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(PurchaseResult, offerId, items, updatedCurrencies)
    };
}}}