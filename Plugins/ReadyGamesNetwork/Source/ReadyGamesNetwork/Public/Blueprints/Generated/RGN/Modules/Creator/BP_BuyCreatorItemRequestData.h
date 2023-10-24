#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Creator/BuyCreatorItemRequestData.h"
#include "../../../../../Generated/RGN/Model/Request/BaseRequestData.h"
#include "../../Model/Request/BP_BaseRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_BuyCreatorItemRequestData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_BuyCreatorItemRequestData : public FBP_BaseRequestData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Creator")
    FString itemId;

	static void ConvertToUnrealModel(const RGN::Modules::Creator::BuyCreatorItemRequestData& source, FBP_BuyCreatorItemRequestData& target) {
		target.itemId = FString(source.itemId.c_str());
		FBP_BaseRequestData::ConvertToUnrealModel(source, target);
	}

	static void ConvertToCoreModel(const FBP_BuyCreatorItemRequestData& source, RGN::Modules::Creator::BuyCreatorItemRequestData& target) {
		target.itemId = string(TCHAR_TO_UTF8(*source.itemId));
		FBP_BaseRequestData::ConvertToCoreModel(source, target);
	}
};
