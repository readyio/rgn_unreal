#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Achievement/PlayerProgressAchievements.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_PlayerProgressAchievements.generated.h"

/**
 * Player progress achievements. Triggered when the player progress field reaches the specified value.
 * Is triggered when 'game-updatePlayerProgress' or 'game-addPlayerProgress' is called.
 */
USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_PlayerProgressAchievements {
    GENERATED_BODY()

    /**
     * The name of the player progress field
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Achievement")
    FString playerProgressFieldName;
    /**
     * The value of the player progress field to reach for the achievement
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Achievement")
    int32 playerProgressFieldValueToReach;
    /**
     * The ID of the achievement to trigger
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Achievement")
    FString achievementId;

	static void ConvertToUnrealModel(const RGN::Modules::Achievement::PlayerProgressAchievements& source, FBP_PlayerProgressAchievements& target) {
        target.playerProgressFieldName = FString(source.playerProgressFieldName.c_str());
        target.playerProgressFieldValueToReach = source.playerProgressFieldValueToReach;
        target.achievementId = FString(source.achievementId.c_str());
	}

	static void ConvertToCoreModel(const FBP_PlayerProgressAchievements& source, RGN::Modules::Achievement::PlayerProgressAchievements& target) {
        target.playerProgressFieldName = string(TCHAR_TO_UTF8(*source.playerProgressFieldName));
        target.playerProgressFieldValueToReach = source.playerProgressFieldValueToReach;
        target.achievementId = string(TCHAR_TO_UTF8(*source.achievementId));
	}
};
