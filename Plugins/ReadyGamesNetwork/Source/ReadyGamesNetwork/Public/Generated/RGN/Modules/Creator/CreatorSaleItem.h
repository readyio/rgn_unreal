#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../Currency/Currency.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Creator {
    struct CreatorSaleItem {
        string id;
        string name;
        int32_t totalUnit = 0;
        vector<RGN::Modules::Currency::Currency> totalCurrencies;

        friend void to_json(nlohmann::json& nlohmann_json_j, const CreatorSaleItem& nlohmann_json_t) {
            nlohmann_json_j["id"] = nlohmann_json_t.id;
            nlohmann_json_j["name"] = nlohmann_json_t.name;
            nlohmann_json_j["totalUnit"] = nlohmann_json_t.totalUnit;
            nlohmann_json_j["totalCurrencies"] = nlohmann_json_t.totalCurrencies;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, CreatorSaleItem& nlohmann_json_t) {
            if (nlohmann_json_j.contains("id")) {
                auto json_id = nlohmann_json_j.at("id");
                if (!json_id.is_null() && json_id.is_string()) {
                    json_id.get_to(nlohmann_json_t.id);
                }
            }
            if (nlohmann_json_j.contains("name")) {
                auto json_name = nlohmann_json_j.at("name");
                if (!json_name.is_null() && json_name.is_string()) {
                    json_name.get_to(nlohmann_json_t.name);
                }
            }
            if (nlohmann_json_j.contains("totalUnit")) {
                auto json_totalUnit = nlohmann_json_j.at("totalUnit");
                if (!json_totalUnit.is_null() && json_totalUnit.is_number()) {
                    json_totalUnit.get_to(nlohmann_json_t.totalUnit);
                }
            }
            if (nlohmann_json_j.contains("totalCurrencies")) {
                auto json_totalCurrencies = nlohmann_json_j.at("totalCurrencies");
                if (!json_totalCurrencies.is_null() && json_totalCurrencies.is_array()) {
                    json_totalCurrencies.get_to(nlohmann_json_t.totalCurrencies);
                }
            }
        }
    };
}}}