#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../VirtualItems/PriceInfo.h"
#include "../../Model/Request/BaseRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Store {
    struct SetPricesRequestData : public RGN::Model::Request::BaseRequestData {
        string offerId;
        vector<RGN::Modules::VirtualItems::PriceInfo> prices;

        friend void to_json(nlohmann::json& nlohmann_json_j, const SetPricesRequestData& nlohmann_json_t) {
            nlohmann_json_j["appPackageName"] = nlohmann_json_t.appPackageName;
            nlohmann_json_j["offerId"] = nlohmann_json_t.offerId;
            nlohmann_json_j["prices"] = nlohmann_json_t.prices;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, SetPricesRequestData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("appPackageName")) {
                auto json_appPackageName = nlohmann_json_j.at("appPackageName");
                if (!json_appPackageName.is_null() && json_appPackageName.is_string()) {
                    json_appPackageName.get_to(nlohmann_json_t.appPackageName);
                }
            }
            if (nlohmann_json_j.contains("offerId")) {
                auto json_offerId = nlohmann_json_j.at("offerId");
                if (!json_offerId.is_null() && json_offerId.is_string()) {
                    json_offerId.get_to(nlohmann_json_t.offerId);
                }
            }
            if (nlohmann_json_j.contains("prices")) {
                auto json_prices = nlohmann_json_j.at("prices");
                if (!json_prices.is_null() && json_prices.is_array()) {
                    json_prices.get_to(nlohmann_json_t.prices);
                }
            }
        }
    };
}}}