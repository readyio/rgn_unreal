#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../VirtualItems/PriceInfo.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Store {
    struct LootBox {
        /**
         * Unique id of the store offer
         */
        string id;
        /**
         * Store offer name
         * Is used also to store localization key for the name
         */
        string name;
        /**
         * Application id where this item is used
         */
        string appId;
        /**
         * Total amount of lootBox
         */
        int64_t totalQuantity = 0;
        /**
         * Count lootBoxes was purchased
         */
        int64_t purchasedQuantity = 0;
        /**
         * Count lootBoxes left can be open
         */
        int64_t availableQuantity = 0;
        /**
         * Date and time when the store offer was created
         * In milliseconds since midnight, January 1, 1970 UTC.
         * Refer to T:RGN.Utility.DateTimeUtility for helper methods.
         * This field is automatically populated by the backend
         */
        int64_t createdAt = 0;
        /**
         * Date and time when the store offer data was last time updated
         * In milliseconds since midnight, January 1, 1970 UTC.
         * Refer to T:RGN.Utility.DateTimeUtility for helper methods.
         * This field is automatically populated by the backend
         */
        int64_t updatedAt = 0;
        /**
         * User Id who created the store offer
         * This field is automatically populated by the backend
         */
        string createdBy;
        /**
         * User Id who last time updated the store offer
         * This field is automatically populated by the backend
         */
        string updatedBy;
        /**
         * Price information for the lootBox
         */
        vector<RGN::Modules::VirtualItems::PriceInfo> prices;

        friend void to_json(nlohmann::json& nlohmann_json_j, const LootBox& nlohmann_json_t) {
            nlohmann_json_j["id"] = nlohmann_json_t.id;
            nlohmann_json_j["name"] = nlohmann_json_t.name;
            nlohmann_json_j["appId"] = nlohmann_json_t.appId;
            nlohmann_json_j["totalQuantity"] = nlohmann_json_t.totalQuantity;
            nlohmann_json_j["purchasedQuantity"] = nlohmann_json_t.purchasedQuantity;
            nlohmann_json_j["availableQuantity"] = nlohmann_json_t.availableQuantity;
            nlohmann_json_j["createdAt"] = nlohmann_json_t.createdAt;
            nlohmann_json_j["updatedAt"] = nlohmann_json_t.updatedAt;
            nlohmann_json_j["createdBy"] = nlohmann_json_t.createdBy;
            nlohmann_json_j["updatedBy"] = nlohmann_json_t.updatedBy;
            nlohmann_json_j["prices"] = nlohmann_json_t.prices;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, LootBox& nlohmann_json_t) {
            if (nlohmann_json_j.contains("id")) {
                nlohmann_json_j.at("id").get_to(nlohmann_json_t.id);
            }
            if (nlohmann_json_j.contains("name")) {
                nlohmann_json_j.at("name").get_to(nlohmann_json_t.name);
            }
            if (nlohmann_json_j.contains("appId")) {
                nlohmann_json_j.at("appId").get_to(nlohmann_json_t.appId);
            }
            if (nlohmann_json_j.contains("totalQuantity")) {
                nlohmann_json_j.at("totalQuantity").get_to(nlohmann_json_t.totalQuantity);
            }
            if (nlohmann_json_j.contains("purchasedQuantity")) {
                nlohmann_json_j.at("purchasedQuantity").get_to(nlohmann_json_t.purchasedQuantity);
            }
            if (nlohmann_json_j.contains("availableQuantity")) {
                nlohmann_json_j.at("availableQuantity").get_to(nlohmann_json_t.availableQuantity);
            }
            if (nlohmann_json_j.contains("createdAt")) {
                nlohmann_json_j.at("createdAt").get_to(nlohmann_json_t.createdAt);
            }
            if (nlohmann_json_j.contains("updatedAt")) {
                nlohmann_json_j.at("updatedAt").get_to(nlohmann_json_t.updatedAt);
            }
            if (nlohmann_json_j.contains("createdBy")) {
                nlohmann_json_j.at("createdBy").get_to(nlohmann_json_t.createdBy);
            }
            if (nlohmann_json_j.contains("updatedBy")) {
                nlohmann_json_j.at("updatedBy").get_to(nlohmann_json_t.updatedBy);
            }
            if (nlohmann_json_j.contains("prices")) {
                nlohmann_json_j.at("prices").get_to(nlohmann_json_t.prices);
            }
        }
    };
}}}