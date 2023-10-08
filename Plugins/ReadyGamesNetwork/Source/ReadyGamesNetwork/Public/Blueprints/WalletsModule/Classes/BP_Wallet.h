#pragma once

#include "CoreMinimal.h"
#include "BP_Wallet.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_Wallet
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Wallets")
    FString address;
};