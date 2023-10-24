#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Achievement/GetAchievementsWithUserDataResponse.h"
#include "../../../../../Generated/RGN/Modules/Achievement/AchievementWithUserData.h"
#include "BP_AchievementWithUserData.h"
#include "../../../../../Generated/RGN/Modules/Achievement/UserAchievement.h"
#include "BP_UserAchievement.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_GetAchievementsWithUserDataResponse.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_GetAchievementsWithUserDataResponse {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Achievement")
    TArray<FBP_AchievementWithUserData> achievements;
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Achievement")
    TArray<FBP_UserAchievement> userAchievements;

	static void ConvertToUnrealModel(const RGN::Modules::Achievement::GetAchievementsWithUserDataResponse& source, FBP_GetAchievementsWithUserDataResponse& target) {
		for (const auto& source_achievements_item : source.achievements) {
			FBP_AchievementWithUserData b_source_achievements_item;
			FBP_AchievementWithUserData::ConvertToUnrealModel(source_achievements_item, b_source_achievements_item);
			target.achievements.Add(b_source_achievements_item);
		}
		for (const auto& source_userAchievements_item : source.userAchievements) {
			FBP_UserAchievement b_source_userAchievements_item;
			FBP_UserAchievement::ConvertToUnrealModel(source_userAchievements_item, b_source_userAchievements_item);
			target.userAchievements.Add(b_source_userAchievements_item);
		}
	}

	static void ConvertToCoreModel(const FBP_GetAchievementsWithUserDataResponse& source, RGN::Modules::Achievement::GetAchievementsWithUserDataResponse& target) {
		for (const auto& source_achievements_item : source.achievements) {
			RGN::Modules::Achievement::AchievementWithUserData cpp_source_achievements_item;
			FBP_AchievementWithUserData::ConvertToCoreModel(source_achievements_item, cpp_source_achievements_item);
			target.achievements.push_back(cpp_source_achievements_item);
		}
		for (const auto& source_userAchievements_item : source.userAchievements) {
			RGN::Modules::Achievement::UserAchievement cpp_source_userAchievements_item;
			FBP_UserAchievement::ConvertToCoreModel(source_userAchievements_item, cpp_source_userAchievements_item);
			target.userAchievements.push_back(cpp_source_userAchievements_item);
		}
	}
};
