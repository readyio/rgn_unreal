#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Achievement/TriggerByRequestNameRequestData.h"
#include "../../../../../Generated/RGN/Model/Request/BaseMigrationRequestData.h"
#include "../../Model/Request/BP_BaseMigrationRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_TriggerByRequestNameRequestData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_TriggerByRequestNameRequestData : public FBP_BaseMigrationRequestData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Achievement")
    FString requestName;
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Achievement")
    int32 progress;

	static void ConvertToUnrealModel(const RGN::Modules::Achievement::TriggerByRequestNameRequestData& source, FBP_TriggerByRequestNameRequestData& target) {
        target.requestName = FString(UTF8_TO_TCHAR(source.requestName.c_str()));
        target.progress = source.progress;
		FBP_BaseMigrationRequestData::ConvertToUnrealModel(source, target);
	}

	static void ConvertToCoreModel(const FBP_TriggerByRequestNameRequestData& source, RGN::Modules::Achievement::TriggerByRequestNameRequestData& target) {
        target.requestName = string(TCHAR_TO_UTF8(*source.requestName));
        target.progress = source.progress;
		FBP_BaseMigrationRequestData::ConvertToCoreModel(source, target);
	}
};
