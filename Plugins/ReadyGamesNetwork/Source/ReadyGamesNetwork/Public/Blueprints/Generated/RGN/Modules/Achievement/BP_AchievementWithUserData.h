#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Achievement/AchievementWithUserData.h"
#include "../../../../../Generated/RGN/Modules/Achievement/UserAchievement.h"
#include "BP_UserAchievement.h"
#include "../../../../../Generated/RGN/Modules/Achievement/AchievementData.h"
#include "BP_AchievementData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_AchievementWithUserData.generated.h"

/**
 * Represents achievement data from the backend
 */
USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_AchievementWithUserData : public FBP_AchievementData {
    GENERATED_BODY()

    /**
     * The user achievement data. Please use the M:RGN.Modules.Achievement.AchievementWithUserData.GetUserAchievement method instead.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Achievement")
    FBP_UserAchievement _userAchievement;

	static void ConvertToUnrealModel(const RGN::Modules::Achievement::AchievementWithUserData& source, FBP_AchievementWithUserData& target) {
        FBP_UserAchievement::ConvertToUnrealModel(source._userAchievement, target._userAchievement);
		FBP_AchievementData::ConvertToUnrealModel(source, target);
	}

	static void ConvertToCoreModel(const FBP_AchievementWithUserData& source, RGN::Modules::Achievement::AchievementWithUserData& target) {
        FBP_UserAchievement::ConvertToCoreModel(source._userAchievement, target._userAchievement);
		FBP_AchievementData::ConvertToCoreModel(source, target);
	}
};
