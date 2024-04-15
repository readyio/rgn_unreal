#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/GamePass/GetForCurrentAppResponseData.h"
#include "../../../../../Generated/RGN/Modules/GamePass/GamePassData.h"
#include "BP_GamePassData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_GetForCurrentAppResponseData.generated.h"

/**
 * Represents the response data received when requesting Game Pass data for the current application.
 */
USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_GetForCurrentAppResponseData {
    GENERATED_BODY()

    /**
     * The list of GamePassData objects associated with the current application.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | GamePass")
    TArray<FBP_GamePassData> gamePasses;

	static void ConvertToUnrealModel(const RGN::Modules::GamePass::GetForCurrentAppResponseData& source, FBP_GetForCurrentAppResponseData& target) {
        for (const auto& source_gamePasses_item : source.gamePasses) {
            FBP_GamePassData b_source_gamePasses_item;
            FBP_GamePassData::ConvertToUnrealModel(source_gamePasses_item, b_source_gamePasses_item);
            target.gamePasses.Add(b_source_gamePasses_item);
        }
	}

	static void ConvertToCoreModel(const FBP_GetForCurrentAppResponseData& source, RGN::Modules::GamePass::GetForCurrentAppResponseData& target) {
        for (const auto& source_gamePasses_item : source.gamePasses) {
            RGN::Modules::GamePass::GamePassData cpp_source_gamePasses_item;
            FBP_GamePassData::ConvertToCoreModel(source_gamePasses_item, cpp_source_gamePasses_item);
            target.gamePasses.push_back(cpp_source_gamePasses_item);
        }
	}
};
