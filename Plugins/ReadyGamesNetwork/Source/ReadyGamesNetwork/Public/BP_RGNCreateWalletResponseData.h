#pragma once

#include "CoreMinimal.h"
#include "BP_RGNCreateWalletResponseData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_RGNCreateWalletResponseData
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Core | Wallets | Responses")
    FString Address;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Core | Wallets | Responses")
    bool WalletCreated;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Core | Wallets | Responses")
    bool Success;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Core | Wallets | Responses")
    FString Error;
};