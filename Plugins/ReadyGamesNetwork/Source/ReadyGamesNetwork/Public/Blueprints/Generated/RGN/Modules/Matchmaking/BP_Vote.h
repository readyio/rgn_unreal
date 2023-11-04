#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Matchmaking/Vote.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_Vote.generated.h"

/**
 * Represents a vote in the matchmaking process.
 */
USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_Vote {
    GENERATED_BODY()

    /**
     * Gets or sets the identifier of the voter.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Matchmaking")
    FString voterId;
    /**
     * Gets or sets the identifier of the participant that the vote is for.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Matchmaking")
    FString participantId;

	static void ConvertToUnrealModel(const RGN::Modules::Matchmaking::Vote& source, FBP_Vote& target) {
        target.voterId = FString(source.voterId.c_str());
        target.participantId = FString(source.participantId.c_str());
	}

	static void ConvertToCoreModel(const FBP_Vote& source, RGN::Modules::Matchmaking::Vote& target) {
        target.voterId = string(TCHAR_TO_UTF8(*source.voterId));
        target.participantId = string(TCHAR_TO_UTF8(*source.participantId));
	}
};
