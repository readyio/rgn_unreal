#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../Model/Request/BP_BaseMigrationRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "../../../../../Generated/RGN/Modules/Creator/CreatorSignupRequestData.h"
#include "BP_CreatorSignupRequestData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_CreatorSignupRequestData : public FBP_BaseMigrationRequestData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Creator")
    FString brandName;

	static void ConvertToUnrealModel(const RGN::Modules::Creator::CreatorSignupRequestData& source, FBP_CreatorSignupRequestData& target) {
		target.brandName = FString(source.brandName.c_str());
		FBP_BaseMigrationRequestData::ConvertToUnrealModel(source, target);
	}

	static void ConvertToCoreModel(const FBP_CreatorSignupRequestData& source, RGN::Modules::Creator::CreatorSignupRequestData& target) {
		target.brandName = string(TCHAR_TO_UTF8(*source.brandName));
		FBP_BaseMigrationRequestData::ConvertToCoreModel(source, target);
	}
};
