#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_AchievementData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "../../../../../Generated/RGN/Modules/Achievement/AchievementWithUserData.h"
#include "BP_AchievementWithUserData.generated.h"

/**
 * Represents achievement data from the backend
 */
USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_AchievementWithUserData : public FBP_AchievementData {
    GENERATED_BODY()


	static void ConvertToUnrealModel(const RGN::Modules::Achievement::AchievementWithUserData& source, FBP_AchievementWithUserData& target) {
		FBP_AchievementData::ConvertToUnrealModel(source, target);
	}

	static void ConvertToCoreModel(const FBP_AchievementWithUserData& source, RGN::Modules::Achievement::AchievementWithUserData& target) {
		FBP_AchievementData::ConvertToCoreModel(source, target);
	}
};
