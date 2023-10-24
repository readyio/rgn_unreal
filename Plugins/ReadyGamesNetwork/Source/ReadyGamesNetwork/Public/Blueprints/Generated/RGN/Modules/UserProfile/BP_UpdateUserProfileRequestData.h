#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/UserProfile/UpdateUserProfileRequestData.h"
#include "../../../../../Generated/RGN/Model/Request/BaseMigrationRequestData.h"
#include "../../Model/Request/BP_BaseMigrationRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_UpdateUserProfileRequestData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_UpdateUserProfileRequestData : public FBP_BaseMigrationRequestData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | UserProfile")
    FString displayName;
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | UserProfile")
    FString bio;

	static void ConvertToUnrealModel(const RGN::Modules::UserProfile::UpdateUserProfileRequestData& source, FBP_UpdateUserProfileRequestData& target) {
		target.displayName = FString(source.displayName.c_str());
		target.bio = FString(source.bio.c_str());
		FBP_BaseMigrationRequestData::ConvertToUnrealModel(source, target);
	}

	static void ConvertToCoreModel(const FBP_UpdateUserProfileRequestData& source, RGN::Modules::UserProfile::UpdateUserProfileRequestData& target) {
		target.displayName = string(TCHAR_TO_UTF8(*source.displayName));
		target.bio = string(TCHAR_TO_UTF8(*source.bio));
		FBP_BaseMigrationRequestData::ConvertToCoreModel(source, target);
	}
};
