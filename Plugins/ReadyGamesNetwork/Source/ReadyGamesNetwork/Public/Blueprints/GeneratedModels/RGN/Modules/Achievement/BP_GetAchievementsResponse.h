#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_AchievementData.h"
#include "BP_GetAchievementsResponse.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_GetAchievementsResponse {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Achievement")
    TArray<FBP_AchievementData> achievements;
};
