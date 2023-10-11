#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "TimeInfo.h"
#include "../VirtualItems/Properties.h"
#include "../VirtualItems/PriceInfo.h"
using json = nlohmann::json;
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
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(StoreOffer, id, name, description, appIds, tags, imageUrl, createdAt, updatedAt, createdBy, updatedBy, time, properties, itemIds, prices)
    };
}}}