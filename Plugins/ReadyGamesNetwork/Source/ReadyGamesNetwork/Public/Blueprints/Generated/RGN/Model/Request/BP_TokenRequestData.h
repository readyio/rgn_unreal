#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_BaseRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "../../../../../Generated/RGN/Model/Request/TokenRequestData.h"
#include "BP_TokenRequestData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_TokenRequestData : public FBP_BaseRequestData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Request")
    FString idToken;

	static void ConvertToUnrealModel(const RGN::Model::Request::TokenRequestData& source, FBP_TokenRequestData& target) {
		target.idToken = FString(source.idToken.c_str());
		FBP_BaseRequestData::ConvertToUnrealModel(source, target);
	}

	static void ConvertToCoreModel(const FBP_TokenRequestData& source, RGN::Model::Request::TokenRequestData& target) {
		target.idToken = string(TCHAR_TO_UTF8(*source.idToken));
		FBP_BaseRequestData::ConvertToCoreModel(source, target);
	}
};
