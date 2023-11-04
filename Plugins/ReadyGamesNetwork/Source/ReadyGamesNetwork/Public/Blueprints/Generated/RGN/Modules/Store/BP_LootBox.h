#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Store/LootBox.h"
#include "../../../../../Generated/RGN/Modules/VirtualItems/PriceInfo.h"
#include "../VirtualItems/BP_PriceInfo.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_LootBox.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_LootBox {
    GENERATED_BODY()

    /**
     * Unique id of the store offer
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Store")
    FString id;
    /**
     * Store offer name
     * Is used also to store localization key for the name
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Store")
    FString name;
    /**
     * Application id where this item is used
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Store")
    FString appId;
    /**
     * Total amount of lootBox
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Store")
    int64 totalQuantity;
    /**
     * Count lootBoxes was purchased
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Store")
    int64 purchasedQuantity;
    /**
     * Count lootBoxes left can be open
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Store")
    int64 availableQuantity;
    /**
     * Date and time when the store offer was created
     * In milliseconds since midnight, January 1, 1970 UTC.
     * Refer to T:RGN.Utility.DateTimeUtility for helper methods.
     * This field is automatically populated by the backend
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Store")
    int64 createdAt;
    /**
     * Date and time when the store offer data was last time updated
     * In milliseconds since midnight, January 1, 1970 UTC.
     * Refer to T:RGN.Utility.DateTimeUtility for helper methods.
     * This field is automatically populated by the backend
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Store")
    int64 updatedAt;
    /**
     * User Id who created the store offer
     * This field is automatically populated by the backend
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Store")
    FString createdBy;
    /**
     * User Id who last time updated the store offer
     * This field is automatically populated by the backend
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Store")
    FString updatedBy;
    /**
     * Price information for the lootBox
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Store")
    TArray<FBP_PriceInfo> prices;

	static void ConvertToUnrealModel(const RGN::Modules::Store::LootBox& source, FBP_LootBox& target) {
        target.id = FString(source.id.c_str());
        target.name = FString(source.name.c_str());
        target.appId = FString(source.appId.c_str());
        target.totalQuantity = source.totalQuantity;
        target.purchasedQuantity = source.purchasedQuantity;
        target.availableQuantity = source.availableQuantity;
        target.createdAt = source.createdAt;
        target.updatedAt = source.updatedAt;
        target.createdBy = FString(source.createdBy.c_str());
        target.updatedBy = FString(source.updatedBy.c_str());
        for (const auto& source_prices_item : source.prices) {
            FBP_PriceInfo b_source_prices_item;
            FBP_PriceInfo::ConvertToUnrealModel(source_prices_item, b_source_prices_item);
            target.prices.Add(b_source_prices_item);
        }
	}

	static void ConvertToCoreModel(const FBP_LootBox& source, RGN::Modules::Store::LootBox& target) {
        target.id = string(TCHAR_TO_UTF8(*source.id));
        target.name = string(TCHAR_TO_UTF8(*source.name));
        target.appId = string(TCHAR_TO_UTF8(*source.appId));
        target.totalQuantity = source.totalQuantity;
        target.purchasedQuantity = source.purchasedQuantity;
        target.availableQuantity = source.availableQuantity;
        target.createdAt = source.createdAt;
        target.updatedAt = source.updatedAt;
        target.createdBy = string(TCHAR_TO_UTF8(*source.createdBy));
        target.updatedBy = string(TCHAR_TO_UTF8(*source.updatedBy));
        for (const auto& source_prices_item : source.prices) {
            RGN::Modules::VirtualItems::PriceInfo cpp_source_prices_item;
            FBP_PriceInfo::ConvertToCoreModel(source_prices_item, cpp_source_prices_item);
            target.prices.push_back(cpp_source_prices_item);
        }
	}
};
