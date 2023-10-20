#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "StoreOffer.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Store {
    struct GetStoreOffersResponse {
        vector<RGN::Modules::Store::StoreOffer> offers;

        friend void to_json(nlohmann::json& nlohmann_json_j, const GetStoreOffersResponse& nlohmann_json_t) {
            nlohmann_json_j["offers"] = nlohmann_json_t.offers;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, GetStoreOffersResponse& nlohmann_json_t) {
            if (nlohmann_json_j.contains("offers")) {
                nlohmann_json_j.at("offers").get_to(nlohmann_json_t.offers);
            }
        }
    };
}}}