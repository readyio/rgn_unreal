#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/UserProfile/SearchUsersRequestData.h"
#include "../../../../../Generated/RGN/Model/Request/BaseMigrationRequestData.h"
#include "../../Model/Request/BP_BaseMigrationRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_SearchUsersRequestData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_SearchUsersRequestData : public FBP_BaseMigrationRequestData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | UserProfile")
    FString nicknameQuery;

	static void ConvertToUnrealModel(const RGN::Modules::UserProfile::SearchUsersRequestData& source, FBP_SearchUsersRequestData& target) {
        target.nicknameQuery = FString(source.nicknameQuery.c_str());
		FBP_BaseMigrationRequestData::ConvertToUnrealModel(source, target);
	}

	static void ConvertToCoreModel(const FBP_SearchUsersRequestData& source, RGN::Modules::UserProfile::SearchUsersRequestData& target) {
        target.nicknameQuery = string(TCHAR_TO_UTF8(*source.nicknameQuery));
		FBP_BaseMigrationRequestData::ConvertToCoreModel(source, target);
	}
};
