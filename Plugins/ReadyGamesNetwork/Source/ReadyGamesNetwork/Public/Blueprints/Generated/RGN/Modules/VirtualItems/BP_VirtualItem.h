#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/VirtualItems/VirtualItem.h"
#include "../../../../../Generated/RGN/Modules/VirtualItems/VirtualItemImage.h"
#include "BP_VirtualItemImage.h"
#include "../../../../../Generated/RGN/Modules/VirtualItems/AddressableInfo.h"
#include "BP_AddressableInfo.h"
#include "../../../../../Generated/RGN/Modules/VirtualItems/Properties.h"
#include "BP_Properties.h"
#include "../../../../../Generated/RGN/Modules/VirtualItems/PriceInfo.h"
#include "BP_PriceInfo.h"
#include "../../../../../Generated/RGN/Modules/VirtualItems/BlockchainInfo.h"
#include "BP_BlockchainInfo.h"
#include "../../../../../Generated/RGN/Modules/VirtualItems/MaterialInfo.h"
#include "BP_MaterialInfo.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_VirtualItem.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_VirtualItem {
    GENERATED_BODY()

    /**
     * Unique id of the virtual item
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | VirtualItems")
    FString id;
    /**
     * Virtual item name
     * Is used also to store localization key for the name
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | VirtualItems")
    FString name;
    /**
     * Virtual item description
     * Is used also to store localization key for the description
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | VirtualItems")
    FString description;
    /**
     * Virtual item image object
     * Contains urls to different size of source uploaded image
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | VirtualItems")
    FBP_VirtualItemImage image;
    /**
     * Date and time when the virtual item was created
     * in milliseconds since midnight, January 1, 1970 UTC.
     * Refer to T:RGN.Utility.DateTimeUtility for helper methods.
     * This field is automatically populated by the backend
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | VirtualItems")
    int64 createdAt;
    /**
     * Date and time when the virtual item data was last time updated
     * in milliseconds since midnight, January 1, 1970 UTC.
     * Refer to T:RGN.Utility.DateTimeUtility for helper methods.
     * This field is automatically populated by the backend
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | VirtualItems")
    int64 updatedAt;
    /**
     * User Id who created the virtual item
     * This field is automatically populated by the backend
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | VirtualItems")
    FString createdBy;
    /**
     * User Id who last time updated the item
     * This field is automatically populated by the backend
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | VirtualItems")
    FString updatedBy;
    /**
     * This field is used to indicate if an item can be stacked
     * When you add stackable items to user inventory, the items count is increased
     * When you add non stackable items to user inventory, this operation creates
     * a new item in inventory
     * Only non stackable items can be upgraded
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | VirtualItems")
    bool isStackable;
    /**
     * Indicates if the virtual item is a NFT.
     * Please use IsNFT() method to check if item is a NFT.
     * The NFT virtual items require primary user wallet
     * For more information see the API in WalletsModule
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | VirtualItems")
    bool isNFT;
    /**
     * List of application ids where this item is used
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | VirtualItems")
    TArray<FString> appIds;
    /**
     * List of tags to filter the items
     * You can place multiple items into one category tag
     * For example in a shooter game: "guns", "rifles"
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | VirtualItems")
    TArray<FString> tags;
    /**
     * List of childs of the current virtual item. Virtual items ids list.
     * It is used to build tree structure hierarchies.
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | VirtualItems")
    TArray<FString> childs;
    /**
     * List of addressable ids for the virtual item binary data
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | VirtualItems")
    TArray<FBP_AddressableInfo> addressableIds;
    /**
     * List of virtual item custom json. It is used to store game specific
     * json in json format.
     * For example: you can attach some json like "damage", "range",
     * "fireRate" attached to this item
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | VirtualItems")
    TArray<FBP_Properties> properties;
    /**
     * Array of prices for the virtual item
     * A virtual item can be sold for different currencies with different prices
     * It is also possible to combine two and more currencies to sell the item
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | VirtualItems")
    TArray<FBP_PriceInfo> prices;
    /**
     * How much quantity of the goods left (use only for NFT items)
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | VirtualItems")
    int64 totalQuantity;
    /**
     * In case the virtual item is minted, the blockchain information is here
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | VirtualItems")
    FBP_BlockchainInfo blockchain;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | VirtualItems")
    TArray<FString> compatibleItemIds;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | VirtualItems")
    TArray<FBP_MaterialInfo> materialInfos;

	static void ConvertToUnrealModel(const RGN::Modules::VirtualItems::VirtualItem& source, FBP_VirtualItem& target) {
		target.id = FString(source.id.c_str());
		target.name = FString(source.name.c_str());
		target.description = FString(source.description.c_str());
		FBP_VirtualItemImage::ConvertToUnrealModel(source.image, target.image);
		target.createdAt = source.createdAt;
		target.updatedAt = source.updatedAt;
		target.createdBy = FString(source.createdBy.c_str());
		target.updatedBy = FString(source.updatedBy.c_str());
		target.isStackable = source.isStackable;
		target.isNFT = source.isNFT;
		for (const auto& source_appIds_item : source.appIds) {
			FString b_source_appIds_item;
			b_source_appIds_item = FString(source_appIds_item.c_str());
			target.appIds.Add(b_source_appIds_item);
		}
		for (const auto& source_tags_item : source.tags) {
			FString b_source_tags_item;
			b_source_tags_item = FString(source_tags_item.c_str());
			target.tags.Add(b_source_tags_item);
		}
		for (const auto& source_childs_item : source.childs) {
			FString b_source_childs_item;
			b_source_childs_item = FString(source_childs_item.c_str());
			target.childs.Add(b_source_childs_item);
		}
		for (const auto& source_addressableIds_item : source.addressableIds) {
			FBP_AddressableInfo b_source_addressableIds_item;
			FBP_AddressableInfo::ConvertToUnrealModel(source_addressableIds_item, b_source_addressableIds_item);
			target.addressableIds.Add(b_source_addressableIds_item);
		}
		for (const auto& source_properties_item : source.properties) {
			FBP_Properties b_source_properties_item;
			FBP_Properties::ConvertToUnrealModel(source_properties_item, b_source_properties_item);
			target.properties.Add(b_source_properties_item);
		}
		for (const auto& source_prices_item : source.prices) {
			FBP_PriceInfo b_source_prices_item;
			FBP_PriceInfo::ConvertToUnrealModel(source_prices_item, b_source_prices_item);
			target.prices.Add(b_source_prices_item);
		}
		target.totalQuantity = source.totalQuantity;
		FBP_BlockchainInfo::ConvertToUnrealModel(source.blockchain, target.blockchain);
		for (const auto& source_compatibleItemIds_item : source.compatibleItemIds) {
			FString b_source_compatibleItemIds_item;
			b_source_compatibleItemIds_item = FString(source_compatibleItemIds_item.c_str());
			target.compatibleItemIds.Add(b_source_compatibleItemIds_item);
		}
		for (const auto& source_materialInfos_item : source.materialInfos) {
			FBP_MaterialInfo b_source_materialInfos_item;
			FBP_MaterialInfo::ConvertToUnrealModel(source_materialInfos_item, b_source_materialInfos_item);
			target.materialInfos.Add(b_source_materialInfos_item);
		}
	}

	static void ConvertToCoreModel(const FBP_VirtualItem& source, RGN::Modules::VirtualItems::VirtualItem& target) {
		target.id = string(TCHAR_TO_UTF8(*source.id));
		target.name = string(TCHAR_TO_UTF8(*source.name));
		target.description = string(TCHAR_TO_UTF8(*source.description));
		FBP_VirtualItemImage::ConvertToCoreModel(source.image, target.image);
		target.createdAt = source.createdAt;
		target.updatedAt = source.updatedAt;
		target.createdBy = string(TCHAR_TO_UTF8(*source.createdBy));
		target.updatedBy = string(TCHAR_TO_UTF8(*source.updatedBy));
		target.isStackable = source.isStackable;
		target.isNFT = source.isNFT;
		for (const auto& source_appIds_item : source.appIds) {
			string cpp_source_appIds_item;
			cpp_source_appIds_item = string(TCHAR_TO_UTF8(*source_appIds_item));
			target.appIds.push_back(cpp_source_appIds_item);
		}
		for (const auto& source_tags_item : source.tags) {
			string cpp_source_tags_item;
			cpp_source_tags_item = string(TCHAR_TO_UTF8(*source_tags_item));
			target.tags.push_back(cpp_source_tags_item);
		}
		for (const auto& source_childs_item : source.childs) {
			string cpp_source_childs_item;
			cpp_source_childs_item = string(TCHAR_TO_UTF8(*source_childs_item));
			target.childs.push_back(cpp_source_childs_item);
		}
		for (const auto& source_addressableIds_item : source.addressableIds) {
			RGN::Modules::VirtualItems::AddressableInfo cpp_source_addressableIds_item;
			FBP_AddressableInfo::ConvertToCoreModel(source_addressableIds_item, cpp_source_addressableIds_item);
			target.addressableIds.push_back(cpp_source_addressableIds_item);
		}
		for (const auto& source_properties_item : source.properties) {
			RGN::Modules::VirtualItems::Properties cpp_source_properties_item;
			FBP_Properties::ConvertToCoreModel(source_properties_item, cpp_source_properties_item);
			target.properties.push_back(cpp_source_properties_item);
		}
		for (const auto& source_prices_item : source.prices) {
			RGN::Modules::VirtualItems::PriceInfo cpp_source_prices_item;
			FBP_PriceInfo::ConvertToCoreModel(source_prices_item, cpp_source_prices_item);
			target.prices.push_back(cpp_source_prices_item);
		}
		target.totalQuantity = source.totalQuantity;
		FBP_BlockchainInfo::ConvertToCoreModel(source.blockchain, target.blockchain);
		for (const auto& source_compatibleItemIds_item : source.compatibleItemIds) {
			string cpp_source_compatibleItemIds_item;
			cpp_source_compatibleItemIds_item = string(TCHAR_TO_UTF8(*source_compatibleItemIds_item));
			target.compatibleItemIds.push_back(cpp_source_compatibleItemIds_item);
		}
		for (const auto& source_materialInfos_item : source.materialInfos) {
			RGN::Modules::VirtualItems::MaterialInfo cpp_source_materialInfos_item;
			FBP_MaterialInfo::ConvertToCoreModel(source_materialInfos_item, cpp_source_materialInfos_item);
			target.materialInfos.push_back(cpp_source_materialInfos_item);
		}
	}
};
