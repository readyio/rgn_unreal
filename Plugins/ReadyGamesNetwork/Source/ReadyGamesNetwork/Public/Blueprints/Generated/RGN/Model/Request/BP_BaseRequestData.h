#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Model/Request/BaseRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_BaseRequestData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_BaseRequestData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Request")
    FString appPackageName;

	static void ConvertToUnrealModel(const RGN::Model::Request::BaseRequestData& source, FBP_BaseRequestData& target) {
		target.appPackageName = FString(source.appPackageName.c_str());
	}

	static void ConvertToCoreModel(const FBP_BaseRequestData& source, RGN::Model::Request::BaseRequestData& target) {
		target.appPackageName = string(TCHAR_TO_UTF8(*source.appPackageName));
	}
};
