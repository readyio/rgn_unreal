#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Matchmaking/GetMatchResponseData.h"
#include "../../../../../Generated/RGN/Modules/Matchmaking/MatchmakingData.h"
#include "BP_MatchmakingData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_GetMatchResponseData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_GetMatchResponseData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Matchmaking")
    FBP_MatchmakingData match;

	static void ConvertToUnrealModel(const RGN::Modules::Matchmaking::GetMatchResponseData& source, FBP_GetMatchResponseData& target) {
		FBP_MatchmakingData::ConvertToUnrealModel(source.match, target.match);
	}

	static void ConvertToCoreModel(const FBP_GetMatchResponseData& source, RGN::Modules::Matchmaking::GetMatchResponseData& target) {
		FBP_MatchmakingData::ConvertToCoreModel(source.match, target.match);
	}
};
