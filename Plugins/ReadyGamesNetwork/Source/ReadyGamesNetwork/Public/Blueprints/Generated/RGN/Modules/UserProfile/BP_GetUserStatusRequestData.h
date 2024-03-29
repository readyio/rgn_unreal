#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/UserProfile/GetUserStatusRequestData.h"
#include "../../../../../Generated/RGN/Model/Request/BaseRequestData.h"
#include "../../Model/Request/BP_BaseRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_GetUserStatusRequestData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_GetUserStatusRequestData : public FBP_BaseRequestData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | UserProfile")
    FString userId;

	static void ConvertToUnrealModel(const RGN::Modules::UserProfile::GetUserStatusRequestData& source, FBP_GetUserStatusRequestData& target) {
        target.userId = FString(UTF8_TO_TCHAR(source.userId.c_str()));
		FBP_BaseRequestData::ConvertToUnrealModel(source, target);
	}

	static void ConvertToCoreModel(const FBP_GetUserStatusRequestData& source, RGN::Modules::UserProfile::GetUserStatusRequestData& target) {
        target.userId = string(TCHAR_TO_UTF8(*source.userId));
		FBP_BaseRequestData::ConvertToCoreModel(source, target);
	}
};
