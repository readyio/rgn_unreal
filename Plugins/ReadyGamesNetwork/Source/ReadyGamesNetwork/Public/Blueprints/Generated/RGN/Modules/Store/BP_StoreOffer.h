#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Store/StoreOffer.h"
#include "../../../../../Generated/RGN/Modules/Store/TimeInfo.h"
#include "BP_TimeInfo.h"
#include "../../../../../Generated/RGN/Modules/VirtualItems/Properties.h"
#include "../VirtualItems/BP_Properties.h"
#include "../../../../../Generated/RGN/Modules/VirtualItems/PriceInfo.h"
#include "../VirtualItems/BP_PriceInfo.h"
#include "../../../../../Generated/RGN/Modules/VirtualItems/VirtualItem.h"
#include "../VirtualItems/BP_VirtualItem.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_StoreOffer.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_StoreOffer {
    GENERATED_BODY()

    /**
     * Unique id of the store offer
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Store")
    FString id;
    /**
     * Store offer name
     * Is used also to store localization key for the name
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Store")
    FString name;
    /**
     * Store offer description
     * Is used also to store localization key for the name
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Store")
    FString description;
    /**
     * List of application ids where this item is used
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Store")
    TArray<FString> appIds;
    /**
     * List of tags to filter the offers
     * You can place multiple store offers into one category tag
     * For example in a shooter game: "guns", "rifles"
     * Or you can also have one store offer for every category
     * with multiple virtual items
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Store")
    TArray<FString> tags;
    /**
     * Store offer image url
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Store")
    FString imageUrl;
    /**
     * Date and time when the store offer was created
     * In milliseconds since midnight, January 1, 1970 UTC.
     * Refer to T:RGN.Utility.DateTimeUtility for helper methods.
     * This field is automatically populated by the backend
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Store")
    int64 createdAt;
    /**
     * Date and time when the store offer data was last time updated
     * In milliseconds since midnight, January 1, 1970 UTC.
     * Refer to T:RGN.Utility.DateTimeUtility for helper methods.
     * This field is automatically populated by the backend
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Store")
    int64 updatedAt;
    /**
     * User Id who created the store offer
     * This field is automatically populated by the backend
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Store")
    FString createdBy;
    /**
     * User Id who last time updated the store offer
     * This field is automatically populated by the backend
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Store")
    FString updatedBy;
    /**
     * The time when the store offer is available
     * This is used for limited time offers (LTO)
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Store")
    FBP_TimeInfo time;
    /**
     * List of store offer custom json. It is used to store
     * game specific json in json format.
     * For example: you can attach some json like
     * "additiona_description", "in_app_products" to this offer
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Store")
    TArray<FBP_Properties> properties;
    /**
     * Virtual items ids list
     * It contains the virtual items available to sell
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Store")
    TArray<FString> itemIds;
    /**
     * Price information for the store offer virtual items
     * It is very powerful: you can sell the same virtual item for different
     * currencies and prices in the same store offer.
     * You can also combine two and more {currency, price} to sell one item
     * by using the group field. To "group" currencies and prices together.
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Store")
    TArray<FBP_PriceInfo> prices;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Store")
    TArray<FBP_VirtualItem> virtualItems;

	static void ConvertToUnrealModel(const RGN::Modules::Store::StoreOffer& source, FBP_StoreOffer& target) {
		target.id = FString(source.id.c_str());
		target.name = FString(source.name.c_str());
		target.description = FString(source.description.c_str());
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
		target.imageUrl = FString(source.imageUrl.c_str());
		target.createdAt = source.createdAt;
		target.updatedAt = source.updatedAt;
		target.createdBy = FString(source.createdBy.c_str());
		target.updatedBy = FString(source.updatedBy.c_str());
		FBP_TimeInfo::ConvertToUnrealModel(source.time, target.time);
		for (const auto& source_properties_item : source.properties) {
			FBP_Properties b_source_properties_item;
			FBP_Properties::ConvertToUnrealModel(source_properties_item, b_source_properties_item);
			target.properties.Add(b_source_properties_item);
		}
		for (const auto& source_itemIds_item : source.itemIds) {
			FString b_source_itemIds_item;
			b_source_itemIds_item = FString(source_itemIds_item.c_str());
			target.itemIds.Add(b_source_itemIds_item);
		}
		for (const auto& source_prices_item : source.prices) {
			FBP_PriceInfo b_source_prices_item;
			FBP_PriceInfo::ConvertToUnrealModel(source_prices_item, b_source_prices_item);
			target.prices.Add(b_source_prices_item);
		}
		for (const auto& source_virtualItems_item : source.virtualItems) {
			FBP_VirtualItem b_source_virtualItems_item;
			FBP_VirtualItem::ConvertToUnrealModel(source_virtualItems_item, b_source_virtualItems_item);
			target.virtualItems.Add(b_source_virtualItems_item);
		}
	}

	static void ConvertToCoreModel(const FBP_StoreOffer& source, RGN::Modules::Store::StoreOffer& target) {
		target.id = string(TCHAR_TO_UTF8(*source.id));
		target.name = string(TCHAR_TO_UTF8(*source.name));
		target.description = string(TCHAR_TO_UTF8(*source.description));
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
		target.imageUrl = string(TCHAR_TO_UTF8(*source.imageUrl));
		target.createdAt = source.createdAt;
		target.updatedAt = source.updatedAt;
		target.createdBy = string(TCHAR_TO_UTF8(*source.createdBy));
		target.updatedBy = string(TCHAR_TO_UTF8(*source.updatedBy));
		FBP_TimeInfo::ConvertToCoreModel(source.time, target.time);
		for (const auto& source_properties_item : source.properties) {
			RGN::Modules::VirtualItems::Properties cpp_source_properties_item;
			FBP_Properties::ConvertToCoreModel(source_properties_item, cpp_source_properties_item);
			target.properties.push_back(cpp_source_properties_item);
		}
		for (const auto& source_itemIds_item : source.itemIds) {
			string cpp_source_itemIds_item;
			cpp_source_itemIds_item = string(TCHAR_TO_UTF8(*source_itemIds_item));
			target.itemIds.push_back(cpp_source_itemIds_item);
		}
		for (const auto& source_prices_item : source.prices) {
			RGN::Modules::VirtualItems::PriceInfo cpp_source_prices_item;
			FBP_PriceInfo::ConvertToCoreModel(source_prices_item, cpp_source_prices_item);
			target.prices.push_back(cpp_source_prices_item);
		}
		for (const auto& source_virtualItems_item : source.virtualItems) {
			RGN::Modules::VirtualItems::VirtualItem cpp_source_virtualItems_item;
			FBP_VirtualItem::ConvertToCoreModel(source_virtualItems_item, cpp_source_virtualItems_item);
			target.virtualItems.push_back(cpp_source_virtualItems_item);
		}
	}
};
