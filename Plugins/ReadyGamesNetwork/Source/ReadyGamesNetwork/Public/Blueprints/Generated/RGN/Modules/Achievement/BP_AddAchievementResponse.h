#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Achievement/AddAchievementResponse.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_AddAchievementResponse.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_AddAchievementResponse {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Achievement")
    FString id;

	static void ConvertToUnrealModel(const RGN::Modules::Achievement::AddAchievementResponse& source, FBP_AddAchievementResponse& target) {
		target.id = FString(source.id.c_str());
	}

	static void ConvertToCoreModel(const FBP_AddAchievementResponse& source, RGN::Modules::Achievement::AddAchievementResponse& target) {
		target.id = string(TCHAR_TO_UTF8(*source.id));
	}
};
