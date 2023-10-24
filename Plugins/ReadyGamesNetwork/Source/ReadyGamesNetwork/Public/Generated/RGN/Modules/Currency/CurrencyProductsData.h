#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "CurrencyProduct.h"
#include "CurrencyOffer.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Currency {
    struct CurrencyProductsData {
        vector<RGN::Modules::Currency::CurrencyProduct> products;
        vector<RGN::Modules::Currency::CurrencyOffer> offers;

        friend void to_json(nlohmann::json& nlohmann_json_j, const CurrencyProductsData& nlohmann_json_t) {
            nlohmann_json_j["products"] = nlohmann_json_t.products;
            nlohmann_json_j["offers"] = nlohmann_json_t.offers;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, CurrencyProductsData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("products")) {
                auto json_products = nlohmann_json_j.at("products");
                if (!json_products.is_null() && json_products.is_array()) {
                    json_products.get_to(nlohmann_json_t.products);
                }
            }
            if (nlohmann_json_j.contains("offers")) {
                auto json_offers = nlohmann_json_j.at("offers");
                if (!json_offers.is_null() && json_offers.is_array()) {
                    json_offers.get_to(nlohmann_json_t.offers);
                }
            }
        }
    };
}}}