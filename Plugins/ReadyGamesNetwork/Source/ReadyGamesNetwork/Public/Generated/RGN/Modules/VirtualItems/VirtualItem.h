#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "VirtualItemImage.h"
#include "AddressableInfo.h"
#include "Properties.h"
#include "PriceInfo.h"
#include "BlockchainInfo.h"
#include "MaterialInfo.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace VirtualItems {
    struct VirtualItem {
        /**
         * Unique id of the virtual item
         */
        string id;
        /**
         * Virtual item name
         * Is used also to store localization key for the name
         */
        string name;
        /**
         * Virtual item description
         * Is used also to store localization key for the description
         */
        string description;
        /**
         * Virtual item image object
         * Contains urls to different size of source uploaded image
         */
        RGN::Modules::VirtualItems::VirtualItemImage image;
        /**
         * Date and time when the virtual item was created
         * in milliseconds since midnight, January 1, 1970 UTC.
         * Refer to T:RGN.Utility.DateTimeUtility for helper methods.
         * This field is automatically populated by the backend
         */
        int64_t createdAt = 0;
        /**
         * Date and time when the virtual item data was last time updated
         * in milliseconds since midnight, January 1, 1970 UTC.
         * Refer to T:RGN.Utility.DateTimeUtility for helper methods.
         * This field is automatically populated by the backend
         */
        int64_t updatedAt = 0;
        /**
         * User Id who created the virtual item
         * This field is automatically populated by the backend
         */
        string createdBy;
        /**
         * User Id who last time updated the item
         * This field is automatically populated by the backend
         */
        string updatedBy;
        /**
         * This field is used to indicate if an item can be stacked
         * When you add stackable items to user inventory, the items count is increased
         * When you add non stackable items to user inventory, this operation creates
         * a new item in inventory
         * Only non stackable items can be upgraded
         */
        bool isStackable = false;
        /**
         * Indicates if the virtual item is a NFT.
         * Please use IsNFT() method to check if item is a NFT.
         * The NFT virtual items require primary user wallet
         * For more information see the API in WalletsModule
         */
        bool isNFT = false;
        /**
         * List of application ids where this item is used
         */
        vector<string> appIds;
        /**
         * List of tags to filter the items
         * You can place multiple items into one category tag
         * For example in a shooter game: "guns", "rifles"
         */
        vector<string> tags;
        /**
         * List of childs of the current virtual item. Virtual items ids list.
         * It is used to build tree structure hierarchies.
         */
        vector<string> childs;
        /**
         * List of addressable ids for the virtual item binary data
         */
        vector<RGN::Modules::VirtualItems::AddressableInfo> addressableIds;
        /**
         * List of virtual item custom json. It is used to store game specific
         * json in json format.
         * For example: you can attach some json like "damage", "range",
         * "fireRate" attached to this item
         */
        vector<RGN::Modules::VirtualItems::Properties> properties;
        /**
         * Array of prices for the virtual item
         * A virtual item can be sold for different currencies with different prices
         * It is also possible to combine two and more currencies to sell the item
         */
        vector<RGN::Modules::VirtualItems::PriceInfo> prices;
        /**
         * How much quantity of the goods left (use only for NFT items)
         */
        int64_t totalQuantity = 0;
        /**
         * In case the virtual item is minted, the blockchain information is here
         */
        RGN::Modules::VirtualItems::BlockchainInfo blockchain;
        vector<string> compatibleItemIds;
        vector<RGN::Modules::VirtualItems::MaterialInfo> materialInfos;

        friend void to_json(nlohmann::json& nlohmann_json_j, const VirtualItem& nlohmann_json_t) {
            nlohmann_json_j["id"] = nlohmann_json_t.id;
            nlohmann_json_j["name"] = nlohmann_json_t.name;
            nlohmann_json_j["description"] = nlohmann_json_t.description;
            nlohmann_json_j["image"] = nlohmann_json_t.image;
            nlohmann_json_j["createdAt"] = nlohmann_json_t.createdAt;
            nlohmann_json_j["updatedAt"] = nlohmann_json_t.updatedAt;
            nlohmann_json_j["createdBy"] = nlohmann_json_t.createdBy;
            nlohmann_json_j["updatedBy"] = nlohmann_json_t.updatedBy;
            nlohmann_json_j["isStackable"] = nlohmann_json_t.isStackable;
            nlohmann_json_j["isNFT"] = nlohmann_json_t.isNFT;
            nlohmann_json_j["appIds"] = nlohmann_json_t.appIds;
            nlohmann_json_j["tags"] = nlohmann_json_t.tags;
            nlohmann_json_j["childs"] = nlohmann_json_t.childs;
            nlohmann_json_j["addressableIds"] = nlohmann_json_t.addressableIds;
            nlohmann_json_j["properties"] = nlohmann_json_t.properties;
            nlohmann_json_j["prices"] = nlohmann_json_t.prices;
            nlohmann_json_j["totalQuantity"] = nlohmann_json_t.totalQuantity;
            nlohmann_json_j["blockchain"] = nlohmann_json_t.blockchain;
            nlohmann_json_j["compatibleItemIds"] = nlohmann_json_t.compatibleItemIds;
            nlohmann_json_j["materialInfos"] = nlohmann_json_t.materialInfos;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, VirtualItem& nlohmann_json_t) {
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
            if (nlohmann_json_j.contains("image")) {
                auto json_image = nlohmann_json_j.at("image");
                if (!json_image.is_null()) {
                    json_image.get_to(nlohmann_json_t.image);
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
            if (nlohmann_json_j.contains("isStackable")) {
                auto json_isStackable = nlohmann_json_j.at("isStackable");
                if (!json_isStackable.is_null() && json_isStackable.is_boolean()) {
                    json_isStackable.get_to(nlohmann_json_t.isStackable);
                }
            }
            if (nlohmann_json_j.contains("isNFT")) {
                auto json_isNFT = nlohmann_json_j.at("isNFT");
                if (!json_isNFT.is_null() && json_isNFT.is_boolean()) {
                    json_isNFT.get_to(nlohmann_json_t.isNFT);
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
            if (nlohmann_json_j.contains("childs")) {
                auto json_childs = nlohmann_json_j.at("childs");
                if (!json_childs.is_null() && json_childs.is_array()) {
                    json_childs.get_to(nlohmann_json_t.childs);
                }
            }
            if (nlohmann_json_j.contains("addressableIds")) {
                auto json_addressableIds = nlohmann_json_j.at("addressableIds");
                if (!json_addressableIds.is_null() && json_addressableIds.is_array()) {
                    json_addressableIds.get_to(nlohmann_json_t.addressableIds);
                }
            }
            if (nlohmann_json_j.contains("properties")) {
                auto json_properties = nlohmann_json_j.at("properties");
                if (!json_properties.is_null() && json_properties.is_array()) {
                    json_properties.get_to(nlohmann_json_t.properties);
                }
            }
            if (nlohmann_json_j.contains("prices")) {
                auto json_prices = nlohmann_json_j.at("prices");
                if (!json_prices.is_null() && json_prices.is_array()) {
                    json_prices.get_to(nlohmann_json_t.prices);
                }
            }
            if (nlohmann_json_j.contains("totalQuantity")) {
                auto json_totalQuantity = nlohmann_json_j.at("totalQuantity");
                if (!json_totalQuantity.is_null() && json_totalQuantity.is_number()) {
                    json_totalQuantity.get_to(nlohmann_json_t.totalQuantity);
                }
            }
            if (nlohmann_json_j.contains("blockchain")) {
                auto json_blockchain = nlohmann_json_j.at("blockchain");
                if (!json_blockchain.is_null()) {
                    json_blockchain.get_to(nlohmann_json_t.blockchain);
                }
            }
            if (nlohmann_json_j.contains("compatibleItemIds")) {
                auto json_compatibleItemIds = nlohmann_json_j.at("compatibleItemIds");
                if (!json_compatibleItemIds.is_null() && json_compatibleItemIds.is_array()) {
                    json_compatibleItemIds.get_to(nlohmann_json_t.compatibleItemIds);
                }
            }
            if (nlohmann_json_j.contains("materialInfos")) {
                auto json_materialInfos = nlohmann_json_j.at("materialInfos");
                if (!json_materialInfos.is_null() && json_materialInfos.is_array()) {
                    json_materialInfos.get_to(nlohmann_json_t.materialInfos);
                }
            }
        }
    };
}}}