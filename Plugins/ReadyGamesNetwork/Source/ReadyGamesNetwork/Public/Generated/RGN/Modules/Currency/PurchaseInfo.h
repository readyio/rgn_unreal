#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "Currency.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Currency {
    struct PurchaseInfo {
        vector<RGN::Modules::Currency::Currency> cost;
        int32_t quantity = 0;

        friend void to_json(nlohmann::json& nlohmann_json_j, const PurchaseInfo& nlohmann_json_t) {
            nlohmann_json_j["cost"] = nlohmann_json_t.cost;
            nlohmann_json_j["quantity"] = nlohmann_json_t.quantity;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, PurchaseInfo& nlohmann_json_t) {
            if (nlohmann_json_j.contains("cost")) {
                auto json_cost = nlohmann_json_j.at("cost");
                if (!json_cost.is_null() && json_cost.is_array()) {
                    json_cost.get_to(nlohmann_json_t.cost);
                }
            }
            if (nlohmann_json_j.contains("quantity")) {
                auto json_quantity = nlohmann_json_j.at("quantity");
                if (!json_quantity.is_null() && json_quantity.is_number()) {
                    json_quantity.get_to(nlohmann_json_t.quantity);
                }
            }
        }
    };
}}}