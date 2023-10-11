#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
using json = nlohmann::json;
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
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(PriceInfo, appIds, itemId, name, quantity, quantityWithoutDiscount, group)
    };
}}}