#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../Currency/Currency.h"
#include "CreatorSaleItem.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Creator {
    struct CreatorData {
        vector<RGN::Modules::Currency::Currency> unclaimedCurrencies;
        vector<RGN::Modules::Creator::CreatorSaleItem> creatorSaleItems;

        friend void to_json(nlohmann::json& nlohmann_json_j, const CreatorData& nlohmann_json_t) {
            nlohmann_json_j["unclaimedCurrencies"] = nlohmann_json_t.unclaimedCurrencies;
            nlohmann_json_j["creatorSaleItems"] = nlohmann_json_t.creatorSaleItems;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, CreatorData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("unclaimedCurrencies")) {
                nlohmann_json_j.at("unclaimedCurrencies").get_to(nlohmann_json_t.unclaimedCurrencies);
            }
            if (nlohmann_json_j.contains("creatorSaleItems")) {
                nlohmann_json_j.at("creatorSaleItems").get_to(nlohmann_json_t.creatorSaleItems);
            }
        }
    };
}}}