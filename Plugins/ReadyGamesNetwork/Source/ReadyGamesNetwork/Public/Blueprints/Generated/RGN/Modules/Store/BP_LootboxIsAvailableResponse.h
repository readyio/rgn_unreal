#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Store/LootboxIsAvailableResponse.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_LootboxIsAvailableResponse.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_LootboxIsAvailableResponse {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Store")
    bool isAvailable;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Store")
    int64 count;

	static void ConvertToUnrealModel(const RGN::Modules::Store::LootboxIsAvailableResponse& source, FBP_LootboxIsAvailableResponse& target) {
		target.isAvailable = source.isAvailable;
		target.count = source.count;
	}

	static void ConvertToCoreModel(const FBP_LootboxIsAvailableResponse& source, RGN::Modules::Store::LootboxIsAvailableResponse& target) {
		target.isAvailable = source.isAvailable;
		target.count = source.count;
	}
};
