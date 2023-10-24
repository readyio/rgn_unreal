#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Achievement/GetUserAchievementsResponse.h"
#include "../../../../../Generated/RGN/Modules/Achievement/UserAchievement.h"
#include "BP_UserAchievement.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_GetUserAchievementsResponse.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_GetUserAchievementsResponse {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Achievement")
    TArray<FBP_UserAchievement> userAchievements;

	static void ConvertToUnrealModel(const RGN::Modules::Achievement::GetUserAchievementsResponse& source, FBP_GetUserAchievementsResponse& target) {
		for (const auto& source_userAchievements_item : source.userAchievements) {
			FBP_UserAchievement b_source_userAchievements_item;
			FBP_UserAchievement::ConvertToUnrealModel(source_userAchievements_item, b_source_userAchievements_item);
			target.userAchievements.Add(b_source_userAchievements_item);
		}
	}

	static void ConvertToCoreModel(const FBP_GetUserAchievementsResponse& source, RGN::Modules::Achievement::GetUserAchievementsResponse& target) {
		for (const auto& source_userAchievements_item : source.userAchievements) {
			RGN::Modules::Achievement::UserAchievement cpp_source_userAchievements_item;
			FBP_UserAchievement::ConvertToCoreModel(source_userAchievements_item, cpp_source_userAchievements_item);
			target.userAchievements.push_back(cpp_source_userAchievements_item);
		}
	}
};
