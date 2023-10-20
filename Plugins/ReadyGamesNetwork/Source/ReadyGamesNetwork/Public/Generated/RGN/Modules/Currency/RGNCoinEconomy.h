#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "RGNCoinEconomyProduct.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Currency {
    struct RGNCoinEconomy {
        vector<RGN::Modules::Currency::RGNCoinEconomyProduct> products;

        friend void to_json(nlohmann::json& nlohmann_json_j, const RGNCoinEconomy& nlohmann_json_t) {
            nlohmann_json_j["products"] = nlohmann_json_t.products;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, RGNCoinEconomy& nlohmann_json_t) {
            if (nlohmann_json_j.contains("products")) {
                nlohmann_json_j.at("products").get_to(nlohmann_json_t.products);
            }
        }
    };
}}}