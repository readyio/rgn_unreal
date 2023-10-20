#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../Model/Request/BaseMigrationRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Currency {
    struct PurchaseCurrencyProductRequestData : public RGN::Model::Request::BaseMigrationRequestData {
        string productId;

        friend void to_json(nlohmann::json& nlohmann_json_j, const PurchaseCurrencyProductRequestData& nlohmann_json_t) {
            nlohmann_json_j["version"] = nlohmann_json_t.version;
            nlohmann_json_j["appPackageName"] = nlohmann_json_t.appPackageName;
            nlohmann_json_j["productId"] = nlohmann_json_t.productId;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, PurchaseCurrencyProductRequestData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("version")) {
                nlohmann_json_j.at("version").get_to(nlohmann_json_t.version);
            }
            if (nlohmann_json_j.contains("appPackageName")) {
                nlohmann_json_j.at("appPackageName").get_to(nlohmann_json_t.appPackageName);
            }
            if (nlohmann_json_j.contains("productId")) {
                nlohmann_json_j.at("productId").get_to(nlohmann_json_t.productId);
            }
        }
    };
}}}