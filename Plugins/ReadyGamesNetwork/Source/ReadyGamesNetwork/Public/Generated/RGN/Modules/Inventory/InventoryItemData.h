#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "VirtualItemUpgrade.h"
#include "../VirtualItems/Properties.h"
#include "../VirtualItems/VirtualItem.h"
#include <string>
#include <vector>
#include <unordered_map>
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
        RGN::Modules::VirtualItems::VirtualItem virtualItem;

        friend void to_json(nlohmann::json& nlohmann_json_j, const InventoryItemData& nlohmann_json_t) {
            nlohmann_json_j["id"] = nlohmann_json_t.id;
            nlohmann_json_j["virtualItemId"] = nlohmann_json_t.virtualItemId;
            nlohmann_json_j["appIds"] = nlohmann_json_t.appIds;
            nlohmann_json_j["tags"] = nlohmann_json_t.tags;
            nlohmann_json_j["quantity"] = nlohmann_json_t.quantity;
            nlohmann_json_j["status"] = nlohmann_json_t.status;
            nlohmann_json_j["createdAt"] = nlohmann_json_t.createdAt;
            nlohmann_json_j["updatedAt"] = nlohmann_json_t.updatedAt;
            nlohmann_json_j["itemUpgrades"] = nlohmann_json_t.itemUpgrades;
            nlohmann_json_j["properties"] = nlohmann_json_t.properties;
            nlohmann_json_j["virtualItem"] = nlohmann_json_t.virtualItem;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, InventoryItemData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("id")) {
                auto json_id = nlohmann_json_j.at("id");
                if (!json_id.is_null() && json_id.is_string()) {
                    json_id.get_to(nlohmann_json_t.id);
                }
            }
            if (nlohmann_json_j.contains("virtualItemId")) {
                auto json_virtualItemId = nlohmann_json_j.at("virtualItemId");
                if (!json_virtualItemId.is_null() && json_virtualItemId.is_string()) {
                    json_virtualItemId.get_to(nlohmann_json_t.virtualItemId);
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
            if (nlohmann_json_j.contains("quantity")) {
                auto json_quantity = nlohmann_json_j.at("quantity");
                if (!json_quantity.is_null() && json_quantity.is_number()) {
                    json_quantity.get_to(nlohmann_json_t.quantity);
                }
            }
            if (nlohmann_json_j.contains("status")) {
                auto json_status = nlohmann_json_j.at("status");
                if (!json_status.is_null() && json_status.is_string()) {
                    json_status.get_to(nlohmann_json_t.status);
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
            if (nlohmann_json_j.contains("itemUpgrades")) {
                auto json_itemUpgrades = nlohmann_json_j.at("itemUpgrades");
                if (!json_itemUpgrades.is_null() && json_itemUpgrades.is_array()) {
                    json_itemUpgrades.get_to(nlohmann_json_t.itemUpgrades);
                }
            }
            if (nlohmann_json_j.contains("properties")) {
                auto json_properties = nlohmann_json_j.at("properties");
                if (!json_properties.is_null() && json_properties.is_array()) {
                    json_properties.get_to(nlohmann_json_t.properties);
                }
            }
            if (nlohmann_json_j.contains("virtualItem")) {
                auto json_virtualItem = nlohmann_json_j.at("virtualItem");
                if (!json_virtualItem.is_null()) {
                    json_virtualItem.get_to(nlohmann_json_t.virtualItem);
                }
            }
        }
    };
}}}