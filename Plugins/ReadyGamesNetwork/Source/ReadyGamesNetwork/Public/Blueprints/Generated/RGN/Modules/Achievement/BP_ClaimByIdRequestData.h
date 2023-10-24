#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Achievement/ClaimByIdRequestData.h"
#include "../../../../../Generated/RGN/Model/Request/BaseMigrationRequestData.h"
#include "../../Model/Request/BP_BaseMigrationRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_ClaimByIdRequestData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_ClaimByIdRequestData : public FBP_BaseMigrationRequestData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Achievement")
    FString id;

	static void ConvertToUnrealModel(const RGN::Modules::Achievement::ClaimByIdRequestData& source, FBP_ClaimByIdRequestData& target) {
		target.id = FString(source.id.c_str());
		FBP_BaseMigrationRequestData::ConvertToUnrealModel(source, target);
	}

	static void ConvertToCoreModel(const FBP_ClaimByIdRequestData& source, RGN::Modules::Achievement::ClaimByIdRequestData& target) {
		target.id = string(TCHAR_TO_UTF8(*source.id));
		FBP_BaseMigrationRequestData::ConvertToCoreModel(source, target);
	}
};
