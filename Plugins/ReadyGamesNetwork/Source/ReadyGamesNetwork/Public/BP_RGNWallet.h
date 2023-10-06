#pragma once

#include "CoreMinimal.h"
#include "BP_RGNWallet.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_RGNWallet
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Wallets")
    FString Address;
};