#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Model/Request/IsUserCanBeLinkedRequestData.h"
#include "../../../../../Generated/RGN/Model/Request/BaseRequestData.h"
#include "BP_BaseRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_IsUserCanBeLinkedRequestData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_IsUserCanBeLinkedRequestData : public FBP_BaseRequestData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Request")
    FString email;

	static void ConvertToUnrealModel(const RGN::Model::Request::IsUserCanBeLinkedRequestData& source, FBP_IsUserCanBeLinkedRequestData& target) {
		target.email = FString(source.email.c_str());
		FBP_BaseRequestData::ConvertToUnrealModel(source, target);
	}

	static void ConvertToCoreModel(const FBP_IsUserCanBeLinkedRequestData& source, RGN::Model::Request::IsUserCanBeLinkedRequestData& target) {
		target.email = string(TCHAR_TO_UTF8(*source.email));
		FBP_BaseRequestData::ConvertToCoreModel(source, target);
	}
};
