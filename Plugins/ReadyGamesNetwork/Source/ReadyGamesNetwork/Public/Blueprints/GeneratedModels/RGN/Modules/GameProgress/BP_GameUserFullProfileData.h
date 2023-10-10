#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../UserProfile/BP_UserProfileData.h"
#include "BP_GameUserFullProfileData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_GameUserFullProfileData : public FBP_UserProfileData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | GameProgress")
    int32 readyWins;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | GameProgress")
    int32 readyLosses;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | GameProgress")
    int32 readyDraws;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | GameProgress")
    int32 readyTrophies;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | GameProgress")
    int32 readyAchievements;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | GameProgress")
    int32 previousThreshold;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | GameProgress")
    int32 nextThreshold;
};
