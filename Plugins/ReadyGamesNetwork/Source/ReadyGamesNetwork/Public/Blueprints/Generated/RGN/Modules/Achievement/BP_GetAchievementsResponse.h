#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Achievement/GetAchievementsResponse.h"
#include "../../../../../Generated/RGN/Modules/Achievement/AchievementData.h"
#include "BP_AchievementData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_GetAchievementsResponse.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_GetAchievementsResponse {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Achievement")
    TArray<FBP_AchievementData> achievements;

	static void ConvertToUnrealModel(const RGN::Modules::Achievement::GetAchievementsResponse& source, FBP_GetAchievementsResponse& target) {
		for (const auto& source_achievements_item : source.achievements) {
			FBP_AchievementData b_source_achievements_item;
			FBP_AchievementData::ConvertToUnrealModel(source_achievements_item, b_source_achievements_item);
			target.achievements.Add(b_source_achievements_item);
		}
	}

	static void ConvertToCoreModel(const FBP_GetAchievementsResponse& source, RGN::Modules::Achievement::GetAchievementsResponse& target) {
		for (const auto& source_achievements_item : source.achievements) {
			RGN::Modules::Achievement::AchievementData cpp_source_achievements_item;
			FBP_AchievementData::ConvertToCoreModel(source_achievements_item, cpp_source_achievements_item);
			target.achievements.push_back(cpp_source_achievements_item);
		}
	}
};
