#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Currency {
    struct RGNCoinEconomyProduct {
        string uid;
        float priceInUSD = 0;
        int32_t quantity = 0;

        friend void to_json(nlohmann::json& nlohmann_json_j, const RGNCoinEconomyProduct& nlohmann_json_t) {
            nlohmann_json_j["uid"] = nlohmann_json_t.uid;
            nlohmann_json_j["priceInUSD"] = nlohmann_json_t.priceInUSD;
            nlohmann_json_j["quantity"] = nlohmann_json_t.quantity;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, RGNCoinEconomyProduct& nlohmann_json_t) {
            if (nlohmann_json_j.contains("uid")) {
                nlohmann_json_j.at("uid").get_to(nlohmann_json_t.uid);
            }
            if (nlohmann_json_j.contains("priceInUSD")) {
                nlohmann_json_j.at("priceInUSD").get_to(nlohmann_json_t.priceInUSD);
            }
            if (nlohmann_json_j.contains("quantity")) {
                nlohmann_json_j.at("quantity").get_to(nlohmann_json_t.quantity);
            }
        }
    };
}}}