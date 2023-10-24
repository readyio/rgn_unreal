#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Achievement/TriggerByIdRequestData.h"
#include "../../../../../Generated/RGN/Model/Request/BaseMigrationRequestData.h"
#include "../../Model/Request/BP_BaseMigrationRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_TriggerByIdRequestData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_TriggerByIdRequestData : public FBP_BaseMigrationRequestData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Achievement")
    FString id;
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Achievement")
    int32 progress;

	static void ConvertToUnrealModel(const RGN::Modules::Achievement::TriggerByIdRequestData& source, FBP_TriggerByIdRequestData& target) {
		target.id = FString(source.id.c_str());
		target.progress = source.progress;
		FBP_BaseMigrationRequestData::ConvertToUnrealModel(source, target);
	}

	static void ConvertToCoreModel(const FBP_TriggerByIdRequestData& source, RGN::Modules::Achievement::TriggerByIdRequestData& target) {
		target.id = string(TCHAR_TO_UTF8(*source.id));
		target.progress = source.progress;
		FBP_BaseMigrationRequestData::ConvertToCoreModel(source, target);
	}
};
