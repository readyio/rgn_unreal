#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Achievement/DailyAchievements.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_DailyAchievements.generated.h"

/**
 * Daily achievements. Triggered when the user logs in.
 * Use the 'repeatNoMoreOftenThanCron' field to specify how often the achievement can give rewards.
 */
USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_DailyAchievements {
    GENERATED_BODY()

    /**
     * The number of consecutive days for the login achievement
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Achievement")
    int32 daysInRow;
    /**
     * The ID of the achievement to trigger
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Achievement")
    FString achievementId;

	static void ConvertToUnrealModel(const RGN::Modules::Achievement::DailyAchievements& source, FBP_DailyAchievements& target) {
        target.daysInRow = source.daysInRow;
        target.achievementId = FString(UTF8_TO_TCHAR(source.achievementId.c_str()));
	}

	static void ConvertToCoreModel(const FBP_DailyAchievements& source, RGN::Modules::Achievement::DailyAchievements& target) {
        target.daysInRow = source.daysInRow;
        target.achievementId = string(TCHAR_TO_UTF8(*source.achievementId));
	}
};
