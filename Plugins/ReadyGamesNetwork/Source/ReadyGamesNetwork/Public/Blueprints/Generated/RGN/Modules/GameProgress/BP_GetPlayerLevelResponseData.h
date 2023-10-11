#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../Model/Response/BP_BaseResponseData.h"
#include "BP_GetPlayerLevelResponseData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_GetPlayerLevelResponseData : public FBP_BaseResponseData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | GameProgress")
    T playerProgress;
};
