#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/UserProfile/GetUserStatusResponseData.h"
#include "../../../../../Generated/RGN/Modules/UserProfile/UserStatus.h"
#include "BP_UserStatus.h"
#include "../../../../../Generated/RGN/Model/Response/BaseResponseData.h"
#include "../../Model/Response/BP_BaseResponseData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_GetUserStatusResponseData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_GetUserStatusResponseData : public FBP_BaseResponseData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | UserProfile")
    EBP_UserStatus userStatus;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | UserProfile")
    FString lastAppPackageName;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | UserProfile")
    int64 lastActivityTS;

	static void ConvertToUnrealModel(const RGN::Modules::UserProfile::GetUserStatusResponseData& source, FBP_GetUserStatusResponseData& target) {
		target.userStatus = static_cast<EBP_UserStatus>(source.userStatus);
		target.lastAppPackageName = FString(source.lastAppPackageName.c_str());
		target.lastActivityTS = source.lastActivityTS;
		FBP_BaseResponseData::ConvertToUnrealModel(source, target);
	}

	static void ConvertToCoreModel(const FBP_GetUserStatusResponseData& source, RGN::Modules::UserProfile::GetUserStatusResponseData& target) {
		target.userStatus = static_cast<RGN::Modules::UserProfile::UserStatus>(source.userStatus);
		target.lastAppPackageName = string(TCHAR_TO_UTF8(*source.lastAppPackageName));
		target.lastActivityTS = source.lastActivityTS;
		FBP_BaseResponseData::ConvertToCoreModel(source, target);
	}
};
