#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "../../../../../Generated/RGN/Modules/Leaderboard/SetScoreResponseData.h"
#include "BP_SetScoreResponseData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_SetScoreResponseData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Leaderboard")
    int32 place;

	static void ConvertToUnrealModel(const RGN::Modules::Leaderboard::SetScoreResponseData& source, FBP_SetScoreResponseData& target) {
		target.place = source.place;
	}

	static void ConvertToCoreModel(const FBP_SetScoreResponseData& source, RGN::Modules::Leaderboard::SetScoreResponseData& target) {
		target.place = source.place;
	}
};
