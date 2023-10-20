#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "Currency.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Currency {
    struct AddUserCurrenciesResponseData {
        vector<RGN::Modules::Currency::Currency> userCurrencies;

        friend void to_json(nlohmann::json& nlohmann_json_j, const AddUserCurrenciesResponseData& nlohmann_json_t) {
            nlohmann_json_j["userCurrencies"] = nlohmann_json_t.userCurrencies;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, AddUserCurrenciesResponseData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("userCurrencies")) {
                nlohmann_json_j.at("userCurrencies").get_to(nlohmann_json_t.userCurrencies);
            }
        }
    };
}}}