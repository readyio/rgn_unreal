#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Leaderboard/IsLeaderboardAvailableResponseData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_IsLeaderboardAvailableResponseData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_IsLeaderboardAvailableResponseData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Leaderboard")
    bool isAvailable;

	static void ConvertToUnrealModel(const RGN::Modules::Leaderboard::IsLeaderboardAvailableResponseData& source, FBP_IsLeaderboardAvailableResponseData& target) {
        target.isAvailable = source.isAvailable;
	}

	static void ConvertToCoreModel(const FBP_IsLeaderboardAvailableResponseData& source, RGN::Modules::Leaderboard::IsLeaderboardAvailableResponseData& target) {
        target.isAvailable = source.isAvailable;
	}
};
