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

        friend void to_json(nlohmann::json& nlohmann_json_j, const PurchaseResult& nlohmann_json_t) {
            nlohmann_json_j["offerId"] = nlohmann_json_t.offerId;
            nlohmann_json_j["items"] = nlohmann_json_t.items;
            nlohmann_json_j["updatedCurrencies"] = nlohmann_json_t.updatedCurrencies;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, PurchaseResult& nlohmann_json_t) {
            if (nlohmann_json_j.contains("offerId")) {
                auto json_offerId = nlohmann_json_j.at("offerId");
                if (!json_offerId.is_null() && json_offerId.is_string()) {
                    json_offerId.get_to(nlohmann_json_t.offerId);
                }
            }
            if (nlohmann_json_j.contains("items")) {
                auto json_items = nlohmann_json_j.at("items");
                if (!json_items.is_null() && json_items.is_array()) {
                    json_items.get_to(nlohmann_json_t.items);
                }
            }
            if (nlohmann_json_j.contains("updatedCurrencies")) {
                auto json_updatedCurrencies = nlohmann_json_j.at("updatedCurrencies");
                if (!json_updatedCurrencies.is_null() && json_updatedCurrencies.is_array()) {
                    json_updatedCurrencies.get_to(nlohmann_json_t.updatedCurrencies);
                }
            }
        }
    };
}}}