#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Model/Request/RefreshTokensRequestData.h"
#include "../../../../../Generated/RGN/Model/Request/BaseRequestData.h"
#include "BP_BaseRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_RefreshTokensRequestData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_RefreshTokensRequestData : public FBP_BaseRequestData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Request")
    FString refreshToken;

	static void ConvertToUnrealModel(const RGN::Model::Request::RefreshTokensRequestData& source, FBP_RefreshTokensRequestData& target) {
		target.refreshToken = FString(source.refreshToken.c_str());
		FBP_BaseRequestData::ConvertToUnrealModel(source, target);
	}

	static void ConvertToCoreModel(const FBP_RefreshTokensRequestData& source, RGN::Model::Request::RefreshTokensRequestData& target) {
		target.refreshToken = string(TCHAR_TO_UTF8(*source.refreshToken));
		FBP_BaseRequestData::ConvertToCoreModel(source, target);
	}
};
