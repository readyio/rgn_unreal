#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_BaseRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "../../../../../Generated/RGN/Model/Request/LinkWithProviderRequestData.h"
#include "BP_LinkWithProviderRequestData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_LinkWithProviderRequestData : public FBP_BaseRequestData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Request")
    bool useMaster;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Request")
    FString idToken;

	static void ConvertToUnrealModel(const RGN::Model::Request::LinkWithProviderRequestData& source, FBP_LinkWithProviderRequestData& target) {
		target.useMaster = source.useMaster;
		target.idToken = FString(source.idToken.c_str());
		FBP_BaseRequestData::ConvertToUnrealModel(source, target);
	}

	static void ConvertToCoreModel(const FBP_LinkWithProviderRequestData& source, RGN::Model::Request::LinkWithProviderRequestData& target) {
		target.useMaster = source.useMaster;
		target.idToken = string(TCHAR_TO_UTF8(*source.idToken));
		FBP_BaseRequestData::ConvertToCoreModel(source, target);
	}
};
