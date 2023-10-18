#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/VirtualItems/PriceInfo.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_PriceInfo.generated.h"

/**
 * Represents pricing information for an item in the store.
 */
USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_PriceInfo {
    GENERATED_BODY()

    /**
     * List of application ids where this price information is used
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | VirtualItems")
    TArray<FString> appIds;
    /**
     * Virtual item id related to this price information
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | VirtualItems")
    FString itemId;
    /**
     * Name of the coin. Reserved name is "rgn-coin"
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | VirtualItems")
    FString name;
    /**
     * Quantity of the coins the virtual item is sold for
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | VirtualItems")
    int32 quantity;
    /**
     * Quantity of the coins the virtual item is sold for without discount
     * This field serves UI purposes to indicate "for sale" items
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | VirtualItems")
    int32 quantityWithoutDiscount;
    /**
     * Group information of the price. It is possible to group multiple prices together.
     * For example, you can sell a virtual item for "coin_name_1" and "coin_name_2" coins
     * This field works like a tag. Two prices with the same group name are combined together
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | VirtualItems")
    FString group;

	static void ConvertToUnrealModel(const RGN::Modules::VirtualItems::PriceInfo& source, FBP_PriceInfo& target) {
		for (const auto& source_appIds_item : source.appIds) {
			FString b_source_appIds_item;
			b_source_appIds_item = FString(source_appIds_item.c_str());
			target.appIds.Add(b_source_appIds_item);
		}
		target.itemId = FString(source.itemId.c_str());
		target.name = FString(source.name.c_str());
		target.quantity = source.quantity;
		target.quantityWithoutDiscount = source.quantityWithoutDiscount;
		target.group = FString(source.group.c_str());
	}

	static void ConvertToCoreModel(const FBP_PriceInfo& source, RGN::Modules::VirtualItems::PriceInfo& target) {
		for (const auto& source_appIds_item : source.appIds) {
			string cpp_source_appIds_item;
			cpp_source_appIds_item = string(TCHAR_TO_UTF8(*source_appIds_item));
			target.appIds.push_back(cpp_source_appIds_item);
		}
		target.itemId = string(TCHAR_TO_UTF8(*source.itemId));
		target.name = string(TCHAR_TO_UTF8(*source.name));
		target.quantity = source.quantity;
		target.quantityWithoutDiscount = source.quantityWithoutDiscount;
		target.group = string(TCHAR_TO_UTF8(*source.group));
	}
};
