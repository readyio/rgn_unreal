#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_AchievementWithUserData.h"
#include "BP_UserAchievement.h"
#include "BP_GetAchievementsWithUserDataResponse.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_GetAchievementsWithUserDataResponse {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Achievement")
    TArray<FBP_AchievementWithUserData> achievements;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Achievement")
    TArray<FBP_UserAchievement> userAchievements;
};
