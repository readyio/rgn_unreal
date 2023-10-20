#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "Currency.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Currency {
    struct UserCurrencyData {
        vector<RGN::Modules::Currency::Currency> currencies;

        friend void to_json(nlohmann::json& nlohmann_json_j, const UserCurrencyData& nlohmann_json_t) {
            nlohmann_json_j["currencies"] = nlohmann_json_t.currencies;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, UserCurrencyData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("currencies")) {
                nlohmann_json_j.at("currencies").get_to(nlohmann_json_t.currencies);
            }
        }
    };
}}}