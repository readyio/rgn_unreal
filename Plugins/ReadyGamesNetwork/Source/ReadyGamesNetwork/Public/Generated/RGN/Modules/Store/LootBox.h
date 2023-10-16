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
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(LootBox, id, name, appId, totalQuantity, purchasedQuantity, availableQuantity, createdAt, updatedAt, createdBy, updatedBy, prices)
    };
}}}