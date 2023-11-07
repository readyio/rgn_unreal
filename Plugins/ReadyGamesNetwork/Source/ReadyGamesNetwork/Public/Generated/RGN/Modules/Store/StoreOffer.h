#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../Model/TimeInfo.h"
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
        RGN::Model::TimeInfo time;
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
                auto json_id = nlohmann_json_j.at("id");
                if (!json_id.is_null() && json_id.is_string()) {
                    json_id.get_to(nlohmann_json_t.id);
                }
            }
            if (nlohmann_json_j.contains("name")) {
                auto json_name = nlohmann_json_j.at("name");
                if (!json_name.is_null() && json_name.is_string()) {
                    json_name.get_to(nlohmann_json_t.name);
                }
            }
            if (nlohmann_json_j.contains("description")) {
                auto json_description = nlohmann_json_j.at("description");
                if (!json_description.is_null() && json_description.is_string()) {
                    json_description.get_to(nlohmann_json_t.description);
                }
            }
            if (nlohmann_json_j.contains("appIds")) {
                auto json_appIds = nlohmann_json_j.at("appIds");
                if (!json_appIds.is_null() && json_appIds.is_array()) {
                    json_appIds.get_to(nlohmann_json_t.appIds);
                }
            }
            if (nlohmann_json_j.contains("tags")) {
                auto json_tags = nlohmann_json_j.at("tags");
                if (!json_tags.is_null() && json_tags.is_array()) {
                    json_tags.get_to(nlohmann_json_t.tags);
                }
            }
            if (nlohmann_json_j.contains("imageUrl")) {
                auto json_imageUrl = nlohmann_json_j.at("imageUrl");
                if (!json_imageUrl.is_null() && json_imageUrl.is_string()) {
                    json_imageUrl.get_to(nlohmann_json_t.imageUrl);
                }
            }
            if (nlohmann_json_j.contains("createdAt")) {
                auto json_createdAt = nlohmann_json_j.at("createdAt");
                if (!json_createdAt.is_null() && json_createdAt.is_number()) {
                    json_createdAt.get_to(nlohmann_json_t.createdAt);
                }
            }
            if (nlohmann_json_j.contains("updatedAt")) {
                auto json_updatedAt = nlohmann_json_j.at("updatedAt");
                if (!json_updatedAt.is_null() && json_updatedAt.is_number()) {
                    json_updatedAt.get_to(nlohmann_json_t.updatedAt);
                }
            }
            if (nlohmann_json_j.contains("createdBy")) {
                auto json_createdBy = nlohmann_json_j.at("createdBy");
                if (!json_createdBy.is_null() && json_createdBy.is_string()) {
                    json_createdBy.get_to(nlohmann_json_t.createdBy);
                }
            }
            if (nlohmann_json_j.contains("updatedBy")) {
                auto json_updatedBy = nlohmann_json_j.at("updatedBy");
                if (!json_updatedBy.is_null() && json_updatedBy.is_string()) {
                    json_updatedBy.get_to(nlohmann_json_t.updatedBy);
                }
            }
            if (nlohmann_json_j.contains("time")) {
                auto json_time = nlohmann_json_j.at("time");
                if (!json_time.is_null()) {
                    json_time.get_to(nlohmann_json_t.time);
                }
            }
            if (nlohmann_json_j.contains("properties")) {
                auto json_properties = nlohmann_json_j.at("properties");
                if (!json_properties.is_null() && json_properties.is_array()) {
                    json_properties.get_to(nlohmann_json_t.properties);
                }
            }
            if (nlohmann_json_j.contains("itemIds")) {
                auto json_itemIds = nlohmann_json_j.at("itemIds");
                if (!json_itemIds.is_null() && json_itemIds.is_array()) {
                    json_itemIds.get_to(nlohmann_json_t.itemIds);
                }
            }
            if (nlohmann_json_j.contains("prices")) {
                auto json_prices = nlohmann_json_j.at("prices");
                if (!json_prices.is_null() && json_prices.is_array()) {
                    json_prices.get_to(nlohmann_json_t.prices);
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