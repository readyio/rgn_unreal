#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "TimeInfo.h"
#include "../VirtualItems/Properties.h"
#include "../VirtualItems/PriceInfo.h"
#include "../VirtualItems/VirtualItem.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Store {
    struct StoreOffer {
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
         * Store offer description
         * Is used also to store localization key for the name
         */
        string description;
        /**
         * List of application ids where this item is used
         */
        vector<string> appIds;
        /**
         * List of tags to filter the offers
         * You can place multiple store offers into one category tag
         * For example in a shooter game: "guns", "rifles"
         * Or you can also have one store offer for every category
         * with multiple virtual items
         */
        vector<string> tags;
        /**
         * Store offer image url
         */
        string imageUrl;
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
         * The time when the store offer is available
         * This is used for limited time offers (LTO)
         */
        RGN::Modules::Store::TimeInfo time;
        /**
         * List of store offer custom json. It is used to store
         * game specific json in json format.
         * For example: you can attach some json like
         * "additiona_description", "in_app_products" to this offer
         */
        vector<RGN::Modules::VirtualItems::Properties> properties;
        /**
         * Virtual items ids list
         * It contains the virtual items available to sell
         */
        vector<string> itemIds;
        /**
         * Price information for the store offer virtual items
         * It is very powerful: you can sell the same virtual item for different
         * currencies and prices in the same store offer.
         * You can also combine two and more {currency, price} to sell one item
         * by using the group field. To "group" currencies and prices together.
         */
        vector<RGN::Modules::VirtualItems::PriceInfo> prices;
        vector<RGN::Modules::VirtualItems::VirtualItem> virtualItems;

        friend void to_json(nlohmann::json& nlohmann_json_j, const StoreOffer& nlohmann_json_t) {
            nlohmann_json_j["id"] = nlohmann_json_t.id;
            nlohmann_json_j["name"] = nlohmann_json_t.name;
            nlohmann_json_j["description"] = nlohmann_json_t.description;
            nlohmann_json_j["appIds"] = nlohmann_json_t.appIds;
            nlohmann_json_j["tags"] = nlohmann_json_t.tags;
            nlohmann_json_j["imageUrl"] = nlohmann_json_t.imageUrl;
            nlohmann_json_j["createdAt"] = nlohmann_json_t.createdAt;
            nlohmann_json_j["updatedAt"] = nlohmann_json_t.updatedAt;
            nlohmann_json_j["createdBy"] = nlohmann_json_t.createdBy;
            nlohmann_json_j["updatedBy"] = nlohmann_json_t.updatedBy;
            nlohmann_json_j["time"] = nlohmann_json_t.time;
            nlohmann_json_j["properties"] = nlohmann_json_t.properties;
            nlohmann_json_j["itemIds"] = nlohmann_json_t.itemIds;
            nlohmann_json_j["prices"] = nlohmann_json_t.prices;
            nlohmann_json_j["virtualItems"] = nlohmann_json_t.virtualItems;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, StoreOffer& nlohmann_json_t) {
            if (nlohmann_json_j.contains("id")) {
                nlohmann_json_j.at("id").get_to(nlohmann_json_t.id);
            }
            if (nlohmann_json_j.contains("name")) {
                nlohmann_json_j.at("name").get_to(nlohmann_json_t.name);
            }
            if (nlohmann_json_j.contains("description")) {
                nlohmann_json_j.at("description").get_to(nlohmann_json_t.description);
            }
            if (nlohmann_json_j.contains("appIds")) {
                nlohmann_json_j.at("appIds").get_to(nlohmann_json_t.appIds);
            }
            if (nlohmann_json_j.contains("tags")) {
                nlohmann_json_j.at("tags").get_to(nlohmann_json_t.tags);
            }
            if (nlohmann_json_j.contains("imageUrl")) {
                nlohmann_json_j.at("imageUrl").get_to(nlohmann_json_t.imageUrl);
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
            if (nlohmann_json_j.contains("time")) {
                nlohmann_json_j.at("time").get_to(nlohmann_json_t.time);
            }
            if (nlohmann_json_j.contains("properties")) {
                nlohmann_json_j.at("properties").get_to(nlohmann_json_t.properties);
            }
            if (nlohmann_json_j.contains("itemIds")) {
                nlohmann_json_j.at("itemIds").get_to(nlohmann_json_t.itemIds);
            }
            if (nlohmann_json_j.contains("prices")) {
                nlohmann_json_j.at("prices").get_to(nlohmann_json_t.prices);
            }
            if (nlohmann_json_j.contains("virtualItems")) {
                nlohmann_json_j.at("virtualItems").get_to(nlohmann_json_t.virtualItems);
            }
        }
    };
}}}