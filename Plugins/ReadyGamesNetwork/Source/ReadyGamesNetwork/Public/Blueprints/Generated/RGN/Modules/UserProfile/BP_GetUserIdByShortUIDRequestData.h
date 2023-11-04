#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/UserProfile/GetUserIdByShortUIDRequestData.h"
#include "../../../../../Generated/RGN/Model/Request/BaseMigrationRequestData.h"
#include "../../Model/Request/BP_BaseMigrationRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_GetUserIdByShortUIDRequestData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_GetUserIdByShortUIDRequestData : public FBP_BaseMigrationRequestData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | UserProfile")
    FString shortUID;

	static void ConvertToUnrealModel(const RGN::Modules::UserProfile::GetUserIdByShortUIDRequestData& source, FBP_GetUserIdByShortUIDRequestData& target) {
        target.shortUID = FString(source.shortUID.c_str());
		FBP_BaseMigrationRequestData::ConvertToUnrealModel(source, target);
	}

	static void ConvertToCoreModel(const FBP_GetUserIdByShortUIDRequestData& source, RGN::Modules::UserProfile::GetUserIdByShortUIDRequestData& target) {
        target.shortUID = string(TCHAR_TO_UTF8(*source.shortUID));
		FBP_BaseMigrationRequestData::ConvertToCoreModel(source, target);
	}
};
