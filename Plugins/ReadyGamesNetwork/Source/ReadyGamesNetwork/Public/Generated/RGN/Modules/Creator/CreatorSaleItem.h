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
                nlohmann_json_j.at("id").get_to(nlohmann_json_t.id);
            }
            if (nlohmann_json_j.contains("name")) {
                nlohmann_json_j.at("name").get_to(nlohmann_json_t.name);
            }
            if (nlohmann_json_j.contains("totalUnit")) {
                nlohmann_json_j.at("totalUnit").get_to(nlohmann_json_t.totalUnit);
            }
            if (nlohmann_json_j.contains("totalCurrencies")) {
                nlohmann_json_j.at("totalCurrencies").get_to(nlohmann_json_t.totalCurrencies);
            }
        }
    };
}}}