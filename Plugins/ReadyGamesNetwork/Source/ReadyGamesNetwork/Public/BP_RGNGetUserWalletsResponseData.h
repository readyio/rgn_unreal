#pragma once

#include "CoreMinimal.h"
#include "BP_RGNWallet.h"
#include "BP_RGNGetUserWalletsResponseData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_RGNGetUserWalletsResponseData
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Core | Wallets | Responses")
    TArray<FBP_RGNWallet> Wallets;
};