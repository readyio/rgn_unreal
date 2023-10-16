#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../UserProfile/BP_UserProfileData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "../../../../../Generated/RGN/Modules/GameProgress/GameUserFullProfileData.h"
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

	static void ConvertToUnrealModel(const RGN::Modules::GameProgress::GameUserFullProfileData& source, FBP_GameUserFullProfileData& target) {
		target.readyWins = source.readyWins;
		target.readyLosses = source.readyLosses;
		target.readyDraws = source.readyDraws;
		target.readyTrophies = source.readyTrophies;
		target.readyAchievements = source.readyAchievements;
		target.previousThreshold = source.previousThreshold;
		target.nextThreshold = source.nextThreshold;
		FBP_UserProfileData::ConvertToUnrealModel(source, target);
	}

	static void ConvertToCoreModel(const FBP_GameUserFullProfileData& source, RGN::Modules::GameProgress::GameUserFullProfileData& target) {
		target.readyWins = source.readyWins;
		target.readyLosses = source.readyLosses;
		target.readyDraws = source.readyDraws;
		target.readyTrophies = source.readyTrophies;
		target.readyAchievements = source.readyAchievements;
		target.previousThreshold = source.previousThreshold;
		target.nextThreshold = source.nextThreshold;
		FBP_UserProfileData::ConvertToCoreModel(source, target);
	}
};
