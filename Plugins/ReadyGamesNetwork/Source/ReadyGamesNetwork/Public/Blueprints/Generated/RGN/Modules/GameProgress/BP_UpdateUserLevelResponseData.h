#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/GameProgress/UpdateUserLevelResponseData.h"
#include "../../../../../Generated/RGN/Model/Response/BaseResponseData.h"
#include "../../Model/Response/BP_BaseResponseData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_UpdateUserLevelResponseData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_UpdateUserLevelResponseData : public FBP_BaseResponseData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | GameProgress")
    FString playerProgress;

	static void ConvertToUnrealModel(const RGN::Modules::GameProgress::UpdateUserLevelResponseData& source, FBP_UpdateUserLevelResponseData& target) {
        target.playerProgress = FString(UTF8_TO_TCHAR(source.playerProgress.c_str()));
		FBP_BaseResponseData::ConvertToUnrealModel(source, target);
	}

	static void ConvertToCoreModel(const FBP_UpdateUserLevelResponseData& source, RGN::Modules::GameProgress::UpdateUserLevelResponseData& target) {
        target.playerProgress = string(TCHAR_TO_UTF8(*source.playerProgress));
		FBP_BaseResponseData::ConvertToCoreModel(source, target);
	}
};
