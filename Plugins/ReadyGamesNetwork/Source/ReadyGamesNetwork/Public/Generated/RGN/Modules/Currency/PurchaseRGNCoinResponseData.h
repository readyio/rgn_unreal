#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "Currency.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Currency {
    struct PurchaseRGNCoinResponseData {
        bool success = false;
        vector<RGN::Modules::Currency::Currency> currencies;

        friend void to_json(nlohmann::json& nlohmann_json_j, const PurchaseRGNCoinResponseData& nlohmann_json_t) {
            nlohmann_json_j["success"] = nlohmann_json_t.success;
            nlohmann_json_j["currencies"] = nlohmann_json_t.currencies;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, PurchaseRGNCoinResponseData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("success")) {
                nlohmann_json_j.at("success").get_to(nlohmann_json_t.success);
            }
            if (nlohmann_json_j.contains("currencies")) {
                nlohmann_json_j.at("currencies").get_to(nlohmann_json_t.currencies);
            }
        }
    };
}}}