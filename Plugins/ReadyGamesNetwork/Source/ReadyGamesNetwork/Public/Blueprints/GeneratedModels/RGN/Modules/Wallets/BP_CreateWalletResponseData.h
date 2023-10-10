#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_CreateWalletResponseData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_CreateWalletResponseData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Wallets")
    FString address;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Wallets")
    bool wallet_created;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Wallets")
    bool success;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Wallets")
    FString error;
};
