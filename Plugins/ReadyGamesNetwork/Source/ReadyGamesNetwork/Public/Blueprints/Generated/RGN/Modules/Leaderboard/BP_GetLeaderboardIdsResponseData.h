#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Leaderboard/GetLeaderboardIdsResponseData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_GetLeaderboardIdsResponseData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_GetLeaderboardIdsResponseData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Leaderboard")
    TArray<FString> ids;

	static void ConvertToUnrealModel(const RGN::Modules::Leaderboard::GetLeaderboardIdsResponseData& source, FBP_GetLeaderboardIdsResponseData& target) {
		for (const auto& source_ids_item : source.ids) {
			FString b_source_ids_item;
			b_source_ids_item = FString(source_ids_item.c_str());
			target.ids.Add(b_source_ids_item);
		}
	}

	static void ConvertToCoreModel(const FBP_GetLeaderboardIdsResponseData& source, RGN::Modules::Leaderboard::GetLeaderboardIdsResponseData& target) {
		for (const auto& source_ids_item : source.ids) {
			string cpp_source_ids_item;
			cpp_source_ids_item = string(TCHAR_TO_UTF8(*source_ids_item));
			target.ids.push_back(cpp_source_ids_item);
		}
	}
};
