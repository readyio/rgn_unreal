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
                auto json_version = nlohmann_json_j.at("version");
                if (!json_version.is_null() && json_version.is_number()) {
                    json_version.get_to(nlohmann_json_t.version);
                }
            }
            if (nlohmann_json_j.contains("appPackageName")) {
                auto json_appPackageName = nlohmann_json_j.at("appPackageName");
                if (!json_appPackageName.is_null() && json_appPackageName.is_string()) {
                    json_appPackageName.get_to(nlohmann_json_t.appPackageName);
                }
            }
            if (nlohmann_json_j.contains("productId")) {
                auto json_productId = nlohmann_json_j.at("productId");
                if (!json_productId.is_null() && json_productId.is_string()) {
                    json_productId.get_to(nlohmann_json_t.productId);
                }
            }
        }
    };
}}}