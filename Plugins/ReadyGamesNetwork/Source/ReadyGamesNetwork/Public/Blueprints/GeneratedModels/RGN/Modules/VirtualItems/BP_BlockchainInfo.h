#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_BlockchainInfo.generated.h"

/**
 * Blockchain Information for minted Virtual Items
 */
USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_BlockchainInfo {
    GENERATED_BODY()

    /**
     * How many time this item was purchased
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | VirtualItems")
    int64 purchasedQuantity;
    /**
     * Maximal count of virtual items to sell
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | VirtualItems")
    int64 totalQuantity;
    /**
     * The Id of the NFT liked to this virtual item
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | VirtualItems")
    int64 tokenId;
    /**
     * The address of the original minter of the NFT
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | VirtualItems")
    FString walletAddress;
};
