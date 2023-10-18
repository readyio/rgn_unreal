#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_MatchmakingData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "../../../../../Generated/RGN/Modules/Matchmaking/GetMatchesResponseData.h"
#include "BP_GetMatchesResponseData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_GetMatchesResponseData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Matchmaking")
    TArray<FBP_MatchmakingData> matches;

	static void ConvertToUnrealModel(const RGN::Modules::Matchmaking::GetMatchesResponseData& source, FBP_GetMatchesResponseData& target) {
		for (const auto& source_matches_item : source.matches) {
			FBP_MatchmakingData b_source_matches_item;
			FBP_MatchmakingData::ConvertToUnrealModel(source_matches_item, b_source_matches_item);
			target.matches.Add(b_source_matches_item);
		}
	}

	static void ConvertToCoreModel(const FBP_GetMatchesResponseData& source, RGN::Modules::Matchmaking::GetMatchesResponseData& target) {
		for (const auto& source_matches_item : source.matches) {
			RGN::Modules::Matchmaking::MatchmakingData cpp_source_matches_item;
			FBP_MatchmakingData::ConvertToCoreModel(source_matches_item, cpp_source_matches_item);
			target.matches.push_back(cpp_source_matches_item);
		}
	}
};
