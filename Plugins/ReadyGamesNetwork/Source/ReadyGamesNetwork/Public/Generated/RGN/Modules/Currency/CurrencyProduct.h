#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Currency {
    struct CurrencyProduct {
        string id;
        string currencyName;
        float price = 0;
        int32_t quantity = 0;
        string type;
        string promotionalSticker;

        friend void to_json(nlohmann::json& nlohmann_json_j, const CurrencyProduct& nlohmann_json_t) {
            nlohmann_json_j["id"] = nlohmann_json_t.id;
            nlohmann_json_j["currencyName"] = nlohmann_json_t.currencyName;
            nlohmann_json_j["price"] = nlohmann_json_t.price;
            nlohmann_json_j["quantity"] = nlohmann_json_t.quantity;
            nlohmann_json_j["type"] = nlohmann_json_t.type;
            nlohmann_json_j["promotionalSticker"] = nlohmann_json_t.promotionalSticker;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, CurrencyProduct& nlohmann_json_t) {
            if (nlohmann_json_j.contains("id")) {
                nlohmann_json_j.at("id").get_to(nlohmann_json_t.id);
            }
            if (nlohmann_json_j.contains("currencyName")) {
                nlohmann_json_j.at("currencyName").get_to(nlohmann_json_t.currencyName);
            }
            if (nlohmann_json_j.contains("price")) {
                nlohmann_json_j.at("price").get_to(nlohmann_json_t.price);
            }
            if (nlohmann_json_j.contains("quantity")) {
                nlohmann_json_j.at("quantity").get_to(nlohmann_json_t.quantity);
            }
            if (nlohmann_json_j.contains("type")) {
                nlohmann_json_j.at("type").get_to(nlohmann_json_t.type);
            }
            if (nlohmann_json_j.contains("promotionalSticker")) {
                nlohmann_json_j.at("promotionalSticker").get_to(nlohmann_json_t.promotionalSticker);
            }
        }
    };
}}}