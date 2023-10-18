#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Matchmaking/StartMatchResponseData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_StartMatchResponseData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_StartMatchResponseData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Matchmaking")
    FString matchId;

	static void ConvertToUnrealModel(const RGN::Modules::Matchmaking::StartMatchResponseData& source, FBP_StartMatchResponseData& target) {
		target.matchId = FString(source.matchId.c_str());
	}

	static void ConvertToCoreModel(const FBP_StartMatchResponseData& source, RGN::Modules::Matchmaking::StartMatchResponseData& target) {
		target.matchId = string(TCHAR_TO_UTF8(*source.matchId));
	}
};
