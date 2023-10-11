#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "VirtualItemUpgrade.h"
#include "../VirtualItems/Properties.h"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace Inventory {
    /**
     * Represents the data structure of an inventory item within the Ready Games Network (RGN).
     */
    struct InventoryItemData {
        /**
         * Unique id of the inventory item
         */
        string id;
        /**
         * The Virtual Item id for this inventory item
         */
        string virtualItemId;
        /**
         * List of application ids where this item is used
         */
        vector<string> appIds;
        /**
         * List of tags to filter the offers
         * You can place multiple inventory items into one category tag
         * For example in a shooter game: "guns", "rifles"
         * Later in the UI you can get only inventory items for specific tag
         */
        vector<string> tags;
        /**
         * How many items the user have in inventory
         * If the Virtual Item is non stackable, then this value should be
         * always one
         * For stackable Virtual Items it represents the count of Virtual Items
         * in user inventory.
         */
        int32_t quantity = 0;
        /**
         * Current status of inventory item
         * Always confirmed for nonNFT items
         * NFT items after purchase have pending status
         * After blockchain confirmation the item
         * will have confirmed status
         */
        string status;
        /**
         * Date and time when the inventory item was created
         * in milliseconds since midnight, January 1, 1970 UTC.
         * Refer to T:RGN.Utility.DateTimeUtility for helper methods.
         * This field is automatically populated by the backend
         */
        int64_t createdAt = 0;
        /**
         * Date and time when the inventory item data was last time updated
         * in milliseconds since midnight, January 1, 1970 UTC.
         * Refer to T:RGN.Utility.DateTimeUtility for helper methods.
         * This field is automatically populated by the backend
         */
        int64_t updatedAt = 0;
        /**
         * The upgrades for non stackable virtual item
         * The user can upgrade the Virtual Items he owns
         * The upgrades can change some of the json of Virtual Items
         * It is possible to have multiple upgrades with different names and values
         * for one item.
         */
        vector<RGN::Modules::Inventory::VirtualItemUpgrade> itemUpgrades;
        /**
         * List of inventory item custom json. It is used to store
         * game specific json in json format.
         * For example: you can attach some json like
         * "additiona_description", "in_app_products", "display_animation" for this
         * inventory item
         */
        vector<RGN::Modules::VirtualItems::Properties> properties;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(InventoryItemData, id, virtualItemId, appIds, tags, quantity, status, createdAt, updatedAt, itemUpgrades, properties)
    };
}}}