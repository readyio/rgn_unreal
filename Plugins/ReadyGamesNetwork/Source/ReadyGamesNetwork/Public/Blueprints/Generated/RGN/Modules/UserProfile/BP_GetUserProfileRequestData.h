#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../Model/Request/BP_BaseMigrationRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "../../../../../Generated/RGN/Modules/UserProfile/GetUserProfileRequestData.h"
#include "BP_GetUserProfileRequestData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_GetUserProfileRequestData : public FBP_BaseMigrationRequestData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | UserProfile")
    FString userId;

	static void ConvertToUnrealModel(const RGN::Modules::UserProfile::GetUserProfileRequestData& source, FBP_GetUserProfileRequestData& target) {
		target.userId = FString(source.userId.c_str());
		FBP_BaseMigrationRequestData::ConvertToUnrealModel(source, target);
	}

	static void ConvertToCoreModel(const FBP_GetUserProfileRequestData& source, RGN::Modules::UserProfile::GetUserProfileRequestData& target) {
		target.userId = string(TCHAR_TO_UTF8(*source.userId));
		FBP_BaseMigrationRequestData::ConvertToCoreModel(source, target);
	}
};
