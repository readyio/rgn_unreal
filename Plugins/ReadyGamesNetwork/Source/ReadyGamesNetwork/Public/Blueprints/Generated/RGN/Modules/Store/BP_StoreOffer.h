#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_TimeInfo.h"
#include "../VirtualItems/BP_Properties.h"
#include "../VirtualItems/BP_PriceInfo.h"
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
};
