#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/GamePass/GetGamePassUserDataResponseData.h"
#include "../../../../../Generated/RGN/Modules/GamePass/GamePassUserData.h"
#include "BP_GamePassUserData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_GetGamePassUserDataResponseData.generated.h"

/**
 * Represents the response data received when requesting Game Pass user data.
 */
USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_GetGamePassUserDataResponseData {
    GENERATED_BODY()

    /**
     * The list of GamePassUserData objects detailing the game passes associated with a user.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | GamePass")
    TArray<FBP_GamePassUserData> gamePasses;

	static void ConvertToUnrealModel(const RGN::Modules::GamePass::GetGamePassUserDataResponseData& source, FBP_GetGamePassUserDataResponseData& target) {
        for (const auto& source_gamePasses_item : source.gamePasses) {
            FBP_GamePassUserData b_source_gamePasses_item;
            FBP_GamePassUserData::ConvertToUnrealModel(source_gamePasses_item, b_source_gamePasses_item);
            target.gamePasses.Add(b_source_gamePasses_item);
        }
	}

	static void ConvertToCoreModel(const FBP_GetGamePassUserDataResponseData& source, RGN::Modules::GamePass::GetGamePassUserDataResponseData& target) {
        for (const auto& source_gamePasses_item : source.gamePasses) {
            RGN::Modules::GamePass::GamePassUserData cpp_source_gamePasses_item;
            FBP_GamePassUserData::ConvertToCoreModel(source_gamePasses_item, cpp_source_gamePasses_item);
            target.gamePasses.push_back(cpp_source_gamePasses_item);
        }
	}
};
