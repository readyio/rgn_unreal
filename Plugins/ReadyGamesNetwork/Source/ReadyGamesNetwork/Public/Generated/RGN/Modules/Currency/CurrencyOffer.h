#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Currency {
    struct CurrencyOffer {
        string productId;
        string offeredProductId;
        int64_t remainingTime = 0;
        float offeringPrice = 0;
        string promotionalMessage;

        friend void to_json(nlohmann::json& nlohmann_json_j, const CurrencyOffer& nlohmann_json_t) {
            nlohmann_json_j["productId"] = nlohmann_json_t.productId;
            nlohmann_json_j["offeredProductId"] = nlohmann_json_t.offeredProductId;
            nlohmann_json_j["remainingTime"] = nlohmann_json_t.remainingTime;
            nlohmann_json_j["offeringPrice"] = nlohmann_json_t.offeringPrice;
            nlohmann_json_j["promotionalMessage"] = nlohmann_json_t.promotionalMessage;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, CurrencyOffer& nlohmann_json_t) {
            if (nlohmann_json_j.contains("productId")) {
                auto json_productId = nlohmann_json_j.at("productId");
                if (!json_productId.is_null() && json_productId.is_string()) {
                    json_productId.get_to(nlohmann_json_t.productId);
                }
            }
            if (nlohmann_json_j.contains("offeredProductId")) {
                auto json_offeredProductId = nlohmann_json_j.at("offeredProductId");
                if (!json_offeredProductId.is_null() && json_offeredProductId.is_string()) {
                    json_offeredProductId.get_to(nlohmann_json_t.offeredProductId);
                }
            }
            if (nlohmann_json_j.contains("remainingTime")) {
                auto json_remainingTime = nlohmann_json_j.at("remainingTime");
                if (!json_remainingTime.is_null() && json_remainingTime.is_number()) {
                    json_remainingTime.get_to(nlohmann_json_t.remainingTime);
                }
            }
            if (nlohmann_json_j.contains("offeringPrice")) {
                auto json_offeringPrice = nlohmann_json_j.at("offeringPrice");
                if (!json_offeringPrice.is_null() && json_offeringPrice.is_number()) {
                    json_offeringPrice.get_to(nlohmann_json_t.offeringPrice);
                }
            }
            if (nlohmann_json_j.contains("promotionalMessage")) {
                auto json_promotionalMessage = nlohmann_json_j.at("promotionalMessage");
                if (!json_promotionalMessage.is_null() && json_promotionalMessage.is_string()) {
                    json_promotionalMessage.get_to(nlohmann_json_t.promotionalMessage);
                }
            }
        }
    };
}}}