#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_Currency.h"
#include "../../Model/Request/BP_BaseRequestData.h"
#include "BP_AddUserCurrenciesRequestData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_AddUserCurrenciesRequestData : public FBP_BaseRequestData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Currency")
    TArray<FBP_Currency> currencies;
};
