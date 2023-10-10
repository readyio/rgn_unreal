#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
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
};
