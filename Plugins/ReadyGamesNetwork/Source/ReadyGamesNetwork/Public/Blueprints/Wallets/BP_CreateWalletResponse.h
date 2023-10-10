#pragma once

#include "CoreMinimal.h"
#include "BP_CreateWalletResponse.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_CreateWalletResponse
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Wallets")
    FString address;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Wallets")
    bool walletCreated;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Wallets")
    bool success;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Wallets")
    FString error;
};