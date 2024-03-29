#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Store/SetTimeRequestData.h"
#include "../../../../../Generated/RGN/Model/TimeInfo.h"
#include "../../Model/BP_TimeInfo.h"
#include "../../../../../Generated/RGN/Model/Request/BaseRequestData.h"
#include "../../Model/Request/BP_BaseRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_SetTimeRequestData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_SetTimeRequestData : public FBP_BaseRequestData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Store")
    FString offerId;
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Store")
    FBP_TimeInfo time;

	static void ConvertToUnrealModel(const RGN::Modules::Store::SetTimeRequestData& source, FBP_SetTimeRequestData& target) {
        target.offerId = FString(UTF8_TO_TCHAR(source.offerId.c_str()));
        FBP_TimeInfo::ConvertToUnrealModel(source.time, target.time);
		FBP_BaseRequestData::ConvertToUnrealModel(source, target);
	}

	static void ConvertToCoreModel(const FBP_SetTimeRequestData& source, RGN::Modules::Store::SetTimeRequestData& target) {
        target.offerId = string(TCHAR_TO_UTF8(*source.offerId));
        FBP_TimeInfo::ConvertToCoreModel(source.time, target.time);
		FBP_BaseRequestData::ConvertToCoreModel(source, target);
	}
};
