#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace VirtualItems {
    /**
     * Represents pricing information for an item in the store.
     */
    struct PriceInfo {
        /**
         * List of application ids where this price information is used
         */
        vector<string> appIds;
        /**
         * Virtual item id related to this price information
         */
        string itemId;
        /**
         * Name of the coin. Reserved name is "rgn-coin"
         */
        string name;
        /**
         * Quantity of the coins the virtual item is sold for
         */
        int32_t quantity = 0;
        /**
         * Quantity of the coins the virtual item is sold for without discount
         * This field serves UI purposes to indicate "for sale" items
         */
        int32_t quantityWithoutDiscount = 0;
        /**
         * Group information of the price. It is possible to group multiple prices together.
         * For example, you can sell a virtual item for "coin_name_1" and "coin_name_2" coins
         * This field works like a tag. Two prices with the same group name are combined together
         */
        string group;
        /**
         * Date and time when the price will be updated
         * in milliseconds since midnight, January 1, 1970 UTC.
         * Refer to T:RGN.Utility.DateTimeUtility for helper methods.
         * This field is automatically populated by the backend when you schedule price changes
         */
        int64_t nextPriceChangeAt = 0;

        friend void to_json(nlohmann::json& nlohmann_json_j, const PriceInfo& nlohmann_json_t) {
            nlohmann_json_j["appIds"] = nlohmann_json_t.appIds;
            nlohmann_json_j["itemId"] = nlohmann_json_t.itemId;
            nlohmann_json_j["name"] = nlohmann_json_t.name;
            nlohmann_json_j["quantity"] = nlohmann_json_t.quantity;
            nlohmann_json_j["quantityWithoutDiscount"] = nlohmann_json_t.quantityWithoutDiscount;
            nlohmann_json_j["group"] = nlohmann_json_t.group;
            nlohmann_json_j["nextPriceChangeAt"] = nlohmann_json_t.nextPriceChangeAt;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, PriceInfo& nlohmann_json_t) {
            if (nlohmann_json_j.contains("appIds")) {
                auto json_appIds = nlohmann_json_j.at("appIds");
                if (!json_appIds.is_null() && json_appIds.is_array()) {
                    json_appIds.get_to(nlohmann_json_t.appIds);
                }
            }
            if (nlohmann_json_j.contains("itemId")) {
                auto json_itemId = nlohmann_json_j.at("itemId");
                if (!json_itemId.is_null() && json_itemId.is_string()) {
                    json_itemId.get_to(nlohmann_json_t.itemId);
                }
            }
            if (nlohmann_json_j.contains("name")) {
                auto json_name = nlohmann_json_j.at("name");
                if (!json_name.is_null() && json_name.is_string()) {
                    json_name.get_to(nlohmann_json_t.name);
                }
            }
            if (nlohmann_json_j.contains("quantity")) {
                auto json_quantity = nlohmann_json_j.at("quantity");
                if (!json_quantity.is_null() && json_quantity.is_number()) {
                    json_quantity.get_to(nlohmann_json_t.quantity);
                }
            }
            if (nlohmann_json_j.contains("quantityWithoutDiscount")) {
                auto json_quantityWithoutDiscount = nlohmann_json_j.at("quantityWithoutDiscount");
                if (!json_quantityWithoutDiscount.is_null() && json_quantityWithoutDiscount.is_number()) {
                    json_quantityWithoutDiscount.get_to(nlohmann_json_t.quantityWithoutDiscount);
                }
            }
            if (nlohmann_json_j.contains("group")) {
                auto json_group = nlohmann_json_j.at("group");
                if (!json_group.is_null() && json_group.is_string()) {
                    json_group.get_to(nlohmann_json_t.group);
                }
            }
            if (nlohmann_json_j.contains("nextPriceChangeAt")) {
                auto json_nextPriceChangeAt = nlohmann_json_j.at("nextPriceChangeAt");
                if (!json_nextPriceChangeAt.is_null() && json_nextPriceChangeAt.is_number()) {
                    json_nextPriceChangeAt.get_to(nlohmann_json_t.nextPriceChangeAt);
                }
            }
        }
    };
}}}