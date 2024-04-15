#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/VirtualItems/VirtualItem.h"
#include "../../../../../Generated/RGN/Modules/VirtualItems/VirtualItemImage.h"
#include "BP_VirtualItemImage.h"
#include "../../../../../Generated/RGN/Modules/VirtualItems/Properties.h"
#include "BP_Properties.h"
#include "../../../../../Generated/RGN/Modules/VirtualItems/PriceInfo.h"
#include "BP_PriceInfo.h"
#include "../../../../../Generated/RGN/Modules/VirtualItems/BlockchainInfo.h"
#include "BP_BlockchainInfo.h"
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
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | VirtualItems")
    FString id;
    /**
     * Virtual item name
     * Is used also to store localization key for the name
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | VirtualItems")
    FString name;
    /**
     * Virtual item description
     * Is used also to store localization key for the description
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | VirtualItems")
    FString description;
    /**
     * Virtual item image object
     * Contains urls to different size of source uploaded image
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | VirtualItems")
    FBP_VirtualItemImage image;
    /**
     * Date and time when the virtual item was created
     * in milliseconds since midnight, January 1, 1970 UTC.
     * Refer to T:RGN.Utility.DateTimeUtility for helper methods.
     * This field is automatically populated by the backend
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | VirtualItems")
    int64 createdAt;
    /**
     * Date and time when the virtual item data was last time updated
     * in milliseconds since midnight, January 1, 1970 UTC.
     * Refer to T:RGN.Utility.DateTimeUtility for helper methods.
     * This field is automatically populated by the backend
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | VirtualItems")
    int64 updatedAt;
    /**
     * User Id who created the virtual item
     * This field is automatically populated by the backend
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | VirtualItems")
    FString createdBy;
    /**
     * User Id who last time updated the item
     * This field is automatically populated by the backend
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | VirtualItems")
    FString updatedBy;
    /**
     * This field is used to indicate if an item can be stacked
     * When you add stackable items to user inventory, the items count is increased
     * When you add non stackable items to user inventory, this operation creates
     * a new item in inventory
     * Only non stackable items can be upgraded
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | VirtualItems")
    bool isStackable;
    /**
     * List of application ids where this item is used
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | VirtualItems")
    TArray<FString> appIds;
    /**
     * List of tags to filter the items
     * You can place multiple items into one category tag
     * For example in a shooter game: "guns", "rifles"
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | VirtualItems")
    TArray<FString> tags;
    /**
     * List of virtual item custom json. It is used to store game specific
     * json in json format.
     * For example: you can attach some json like "damage", "range",
     * "fireRate" attached to this item
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | VirtualItems")
    TArray<FBP_Properties> properties;
    /**
     * Array of prices for the virtual item
     * A virtual item can be sold for different currencies with different prices
     * It is also possible to combine two and more currencies to sell the item
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | VirtualItems")
    TArray<FBP_PriceInfo> prices;
    /**
     * How much quantity of the goods left (use only for NFT items)
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | VirtualItems")
    int64 totalQuantity;
    /**
     * In case the virtual item is minted, the blockchain information is here
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | VirtualItems")
    FBP_BlockchainInfo blockchain;

	static void ConvertToUnrealModel(const RGN::Modules::VirtualItems::VirtualItem& source, FBP_VirtualItem& target) {
        target.id = FString(UTF8_TO_TCHAR(source.id.c_str()));
        target.name = FString(UTF8_TO_TCHAR(source.name.c_str()));
        target.description = FString(UTF8_TO_TCHAR(source.description.c_str()));
        FBP_VirtualItemImage::ConvertToUnrealModel(source.image, target.image);
        target.createdAt = source.createdAt;
        target.updatedAt = source.updatedAt;
        target.createdBy = FString(UTF8_TO_TCHAR(source.createdBy.c_str()));
        target.updatedBy = FString(UTF8_TO_TCHAR(source.updatedBy.c_str()));
        target.isStackable = source.isStackable;
        for (const auto& source_appIds_item : source.appIds) {
            FString b_source_appIds_item;
            b_source_appIds_item = FString(UTF8_TO_TCHAR(source_appIds_item.c_str()));
            target.appIds.Add(b_source_appIds_item);
        }
        for (const auto& source_tags_item : source.tags) {
            FString b_source_tags_item;
            b_source_tags_item = FString(UTF8_TO_TCHAR(source_tags_item.c_str()));
            target.tags.Add(b_source_tags_item);
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
	}
};
