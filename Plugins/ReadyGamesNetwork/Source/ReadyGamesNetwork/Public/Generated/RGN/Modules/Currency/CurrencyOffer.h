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
        double remainingTime = 0;
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
                nlohmann_json_j.at("productId").get_to(nlohmann_json_t.productId);
            }
            if (nlohmann_json_j.contains("offeredProductId")) {
                nlohmann_json_j.at("offeredProductId").get_to(nlohmann_json_t.offeredProductId);
            }
            if (nlohmann_json_j.contains("remainingTime")) {
                nlohmann_json_j.at("remainingTime").get_to(nlohmann_json_t.remainingTime);
            }
            if (nlohmann_json_j.contains("offeringPrice")) {
                nlohmann_json_j.at("offeringPrice").get_to(nlohmann_json_t.offeringPrice);
            }
            if (nlohmann_json_j.contains("promotionalMessage")) {
                nlohmann_json_j.at("promotionalMessage").get_to(nlohmann_json_t.promotionalMessage);
            }
        }
    };
}}}