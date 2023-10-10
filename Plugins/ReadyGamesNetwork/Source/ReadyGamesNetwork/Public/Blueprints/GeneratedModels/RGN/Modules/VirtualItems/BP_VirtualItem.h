#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_VirtualItemImage.h"
#include "BP_AddressableInfo.h"
#include "BP_Properties.h"
#include "BP_PriceInfo.h"
#include "BP_BlockchainInfo.h"
#include "BP_MaterialInfo.h"
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
};
