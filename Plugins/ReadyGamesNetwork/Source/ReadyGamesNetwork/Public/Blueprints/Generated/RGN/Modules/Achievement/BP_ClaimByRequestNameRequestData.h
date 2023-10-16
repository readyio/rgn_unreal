#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../Model/Request/BP_BaseMigrationRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "../../../../../Generated/RGN/Modules/Achievement/ClaimByRequestNameRequestData.h"
#include "BP_ClaimByRequestNameRequestData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_ClaimByRequestNameRequestData : public FBP_BaseMigrationRequestData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Achievement")
    FString requestName;

	static void ConvertToUnrealModel(const RGN::Modules::Achievement::ClaimByRequestNameRequestData& source, FBP_ClaimByRequestNameRequestData& target) {
		target.requestName = FString(source.requestName.c_str());
		FBP_BaseMigrationRequestData::ConvertToUnrealModel(source, target);
	}

	static void ConvertToCoreModel(const FBP_ClaimByRequestNameRequestData& source, RGN::Modules::Achievement::ClaimByRequestNameRequestData& target) {
		target.requestName = string(TCHAR_TO_UTF8(*source.requestName));
		FBP_BaseMigrationRequestData::ConvertToCoreModel(source, target);
	}
};
