#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Leaderboard/IsStoreOfferAvailableResponseData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_IsStoreOfferAvailableResponseData.generated.h"

/**
 * Availability information
 */
USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_IsStoreOfferAvailableResponseData {
    GENERATED_BODY()

    /**
     * Indicates if the store offer is available.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Leaderboard")
    bool isAvailable;
    /**
     * The reason why the store offer is not available.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Leaderboard")
    FString reason;

	static void ConvertToUnrealModel(const RGN::Modules::Leaderboard::IsStoreOfferAvailableResponseData& source, FBP_IsStoreOfferAvailableResponseData& target) {
        target.isAvailable = source.isAvailable;
        target.reason = FString(UTF8_TO_TCHAR(source.reason.c_str()));
	}

	static void ConvertToCoreModel(const FBP_IsStoreOfferAvailableResponseData& source, RGN::Modules::Leaderboard::IsStoreOfferAvailableResponseData& target) {
        target.isAvailable = source.isAvailable;
        target.reason = string(TCHAR_TO_UTF8(*source.reason));
	}
};
