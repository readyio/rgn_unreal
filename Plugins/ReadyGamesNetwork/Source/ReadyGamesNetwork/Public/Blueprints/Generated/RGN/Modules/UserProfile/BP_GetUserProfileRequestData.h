#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/UserProfile/GetUserProfileRequestData.h"
#include "../../../../../Generated/RGN/Model/Request/BaseMigrationRequestData.h"
#include "../../Model/Request/BP_BaseMigrationRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_GetUserProfileRequestData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_GetUserProfileRequestData : public FBP_BaseMigrationRequestData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | UserProfile")
    FString userId;

	static void ConvertToUnrealModel(const RGN::Modules::UserProfile::GetUserProfileRequestData& source, FBP_GetUserProfileRequestData& target) {
        target.userId = FString(UTF8_TO_TCHAR(source.userId.c_str()));
		FBP_BaseMigrationRequestData::ConvertToUnrealModel(source, target);
	}

	static void ConvertToCoreModel(const FBP_GetUserProfileRequestData& source, RGN::Modules::UserProfile::GetUserProfileRequestData& target) {
        target.userId = string(TCHAR_TO_UTF8(*source.userId));
		FBP_BaseMigrationRequestData::ConvertToCoreModel(source, target);
	}
};
