#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../VirtualItems/BP_PriceInfo.h"
#include "BP_LootBox.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_LootBox {
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
     * Application id where this item is used
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Store")
    FString appId;
    /**
     * Total amount of lootBox
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Store")
    int64 totalQuantity;
    /**
     * Count lootBoxes was purchased
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Store")
    int64 purchasedQuantity;
    /**
     * Count lootBoxes left can be open
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Store")
    int64 availableQuantity;
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
     * Price information for the lootBox
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Store")
    TArray<FBP_PriceInfo> prices;
};
