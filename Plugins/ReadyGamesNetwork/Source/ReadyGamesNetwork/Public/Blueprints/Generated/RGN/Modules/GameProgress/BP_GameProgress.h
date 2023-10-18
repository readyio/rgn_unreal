#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/GameProgress/GameProgress.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_GameProgress.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_GameProgress {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | GameProgress")
    int32 level;

	static void ConvertToUnrealModel(const RGN::Modules::GameProgress::GameProgress& source, FBP_GameProgress& target) {
		target.level = source.level;
	}

	static void ConvertToCoreModel(const FBP_GameProgress& source, RGN::Modules::GameProgress::GameProgress& target) {
		target.level = source.level;
	}
};
