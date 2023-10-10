#pragma once

#include "CoreMinimal.h"
#include "../GeneratedModels/RGN/Modules/Wallets/BP_RGNWallet.h"
#include "BP_GetUserWalletsResponse.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_GetUserWalletsResponse
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Wallets")
    TArray<FBP_RGNWallet> wallets;
};