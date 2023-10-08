#pragma once

#include "CoreMinimal.h"
#include "../Classes/BP_Wallet.h"
#include "BP_GetUserWalletsResponse.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_GetUserWalletsResponse
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Wallets")
    TArray<FBP_Wallet> wallets;
};