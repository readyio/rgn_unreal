#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "StoreOffer.h"
#include "../VirtualItems/VirtualItem.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Store {
    struct GetStoreOffersWithVirtualItemsDataResponse {
        vector<RGN::Modules::Store::StoreOffer> offers;
        vector<RGN::Modules::VirtualItems::VirtualItem> virtualItems;

        friend void to_json(nlohmann::json& nlohmann_json_j, const GetStoreOffersWithVirtualItemsDataResponse& nlohmann_json_t) {
            nlohmann_json_j["offers"] = nlohmann_json_t.offers;
            nlohmann_json_j["virtualItems"] = nlohmann_json_t.virtualItems;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, GetStoreOffersWithVirtualItemsDataResponse& nlohmann_json_t) {
            if (nlohmann_json_j.contains("offers")) {
                auto json_offers = nlohmann_json_j.at("offers");
                if (!json_offers.is_null() && json_offers.is_array()) {
                    json_offers.get_to(nlohmann_json_t.offers);
                }
            }
            if (nlohmann_json_j.contains("virtualItems")) {
                auto json_virtualItems = nlohmann_json_j.at("virtualItems");
                if (!json_virtualItems.is_null() && json_virtualItems.is_array()) {
                    json_virtualItems.get_to(nlohmann_json_t.virtualItems);
                }
            }
        }
    };
}}}