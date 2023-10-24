#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Model/Response/BaseResponseData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_BaseResponseData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_BaseResponseData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Response")
    int32 status;
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Response")
    FString message;

	static void ConvertToUnrealModel(const RGN::Model::Response::BaseResponseData& source, FBP_BaseResponseData& target) {
		target.status = source.status;
		target.message = FString(source.message.c_str());
	}

	static void ConvertToCoreModel(const FBP_BaseResponseData& source, RGN::Model::Response::BaseResponseData& target) {
		target.status = source.status;
		target.message = string(TCHAR_TO_UTF8(*source.message));
	}
};
