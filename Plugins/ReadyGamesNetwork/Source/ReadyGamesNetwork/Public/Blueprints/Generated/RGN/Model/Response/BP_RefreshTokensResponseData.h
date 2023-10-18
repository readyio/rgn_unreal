#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Model/Response/RefreshTokensResponseData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_RefreshTokensResponseData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_RefreshTokensResponseData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Response")
    FString userId;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Response")
    FString idToken;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Response")
    FString refreshToken;

	static void ConvertToUnrealModel(const RGN::Model::Response::RefreshTokensResponseData& source, FBP_RefreshTokensResponseData& target) {
		target.userId = FString(source.userId.c_str());
		target.idToken = FString(source.idToken.c_str());
		target.refreshToken = FString(source.refreshToken.c_str());
	}

	static void ConvertToCoreModel(const FBP_RefreshTokensResponseData& source, RGN::Model::Response::RefreshTokensResponseData& target) {
		target.userId = string(TCHAR_TO_UTF8(*source.userId));
		target.idToken = string(TCHAR_TO_UTF8(*source.idToken));
		target.refreshToken = string(TCHAR_TO_UTF8(*source.refreshToken));
	}
};
