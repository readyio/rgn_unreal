#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/VirtualItems/BlockchainInfo.h"
#include <string>
#include <vector>
#include <unordered_map>
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
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | VirtualItems")
    int64 purchasedQuantity;
    /**
     * Maximal count of virtual items to sell
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | VirtualItems")
    int64 totalQuantity;
    /**
     * The address of the original minter of the NFT
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | VirtualItems")
    FString walletAddress;

	static void ConvertToUnrealModel(const RGN::Modules::VirtualItems::BlockchainInfo& source, FBP_BlockchainInfo& target) {
        target.purchasedQuantity = source.purchasedQuantity;
        target.totalQuantity = source.totalQuantity;
        target.walletAddress = FString(source.walletAddress.c_str());
	}

	static void ConvertToCoreModel(const FBP_BlockchainInfo& source, RGN::Modules::VirtualItems::BlockchainInfo& target) {
        target.purchasedQuantity = source.purchasedQuantity;
        target.totalQuantity = source.totalQuantity;
        target.walletAddress = string(TCHAR_TO_UTF8(*source.walletAddress));
	}
};
