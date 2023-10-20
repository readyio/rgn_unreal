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

        friend void to_json(nlohmann::json& nlohmann_json_j, const BuyStoreOfferResponse& nlohmann_json_t) {
            nlohmann_json_j["offerId"] = nlohmann_json_t.offerId;
            nlohmann_json_j["purchasedItems"] = nlohmann_json_t.purchasedItems;
            nlohmann_json_j["updatedCurrencies"] = nlohmann_json_t.updatedCurrencies;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, BuyStoreOfferResponse& nlohmann_json_t) {
            if (nlohmann_json_j.contains("offerId")) {
                nlohmann_json_j.at("offerId").get_to(nlohmann_json_t.offerId);
            }
            if (nlohmann_json_j.contains("purchasedItems")) {
                nlohmann_json_j.at("purchasedItems").get_to(nlohmann_json_t.purchasedItems);
            }
            if (nlohmann_json_j.contains("updatedCurrencies")) {
                nlohmann_json_j.at("updatedCurrencies").get_to(nlohmann_json_t.updatedCurrencies);
            }
        }
    };
}}}