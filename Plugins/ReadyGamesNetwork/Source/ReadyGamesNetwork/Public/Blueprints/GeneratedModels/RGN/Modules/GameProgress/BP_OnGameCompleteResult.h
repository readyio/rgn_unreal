#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_GameProgress.h"
#include "../Currency/BP_UserCurrencyData.h"
#include "BP_OnGameCompleteResult.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_OnGameCompleteResult {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | GameProgress")
    FBP_GameProgress gameProgress;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | GameProgress")
    FBP_UserCurrencyData userCurrencies;
};
