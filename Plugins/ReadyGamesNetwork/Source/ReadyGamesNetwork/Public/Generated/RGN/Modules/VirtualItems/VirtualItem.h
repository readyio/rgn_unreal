#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "VirtualItemImage.h"
#include "AddressableInfo.h"
#include "Properties.h"
#include "PriceInfo.h"
#include "BlockchainInfo.h"
#include "MaterialInfo.h"
using json = nlohmann::json;
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
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(VirtualItem, id, name, description, image, createdAt, updatedAt, createdBy, updatedBy, isStackable, isNFT, appIds, tags, childs, addressableIds, properties, prices, totalQuantity, blockchain, compatibleItemIds, materialInfos)
    };
}}}