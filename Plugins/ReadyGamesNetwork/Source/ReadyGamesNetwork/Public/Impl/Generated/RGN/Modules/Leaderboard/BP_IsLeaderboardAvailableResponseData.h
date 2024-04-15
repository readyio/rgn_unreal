#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Leaderboard/IsLeaderboardAvailableResponseData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_IsLeaderboardAvailableResponseData.generated.h"

/**
 * Availability information
 */
USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_IsLeaderboardAvailableResponseData {
    GENERATED_BODY()

    /**
     * Indicates whether the leaderboard is available or not.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Leaderboard")
    bool isAvailable;
    /**
     * The reason why the leaderboard is not available.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Leaderboard")
    FString reason;

	static void ConvertToUnrealModel(const RGN::Modules::Leaderboard::IsLeaderboardAvailableResponseData& source, FBP_IsLeaderboardAvailableResponseData& target) {
        target.isAvailable = source.isAvailable;
        target.reason = FString(UTF8_TO_TCHAR(source.reason.c_str()));
	}

	static void ConvertToCoreModel(const FBP_IsLeaderboardAvailableResponseData& source, RGN::Modules::Leaderboard::IsLeaderboardAvailableResponseData& target) {
        target.isAvailable = source.isAvailable;
        target.reason = string(TCHAR_TO_UTF8(*source.reason));
	}
};
