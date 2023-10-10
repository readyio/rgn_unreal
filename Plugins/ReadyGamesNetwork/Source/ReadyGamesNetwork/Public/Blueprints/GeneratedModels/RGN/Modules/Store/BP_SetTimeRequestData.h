#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_TimeInfo.h"
#include "../../Model/Request/BP_BaseRequestData.h"
#include "BP_SetTimeRequestData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_SetTimeRequestData : public FBP_BaseRequestData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Store")
    FString offerId;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Store")
    FBP_TimeInfo time;
};
