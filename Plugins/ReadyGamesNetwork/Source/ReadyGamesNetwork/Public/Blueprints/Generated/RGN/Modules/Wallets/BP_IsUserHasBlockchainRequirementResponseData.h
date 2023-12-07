#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Wallets/IsUserHasBlockchainRequirementResponseData.h"
#include "../../../../../Generated/RGN/Model/Response/BaseResponseData.h"
#include "../../Model/Response/BP_BaseResponseData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_IsUserHasBlockchainRequirementResponseData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_IsUserHasBlockchainRequirementResponseData : public FBP_BaseResponseData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Wallets")
    bool hasBlockchainRequirement;

	static void ConvertToUnrealModel(const RGN::Modules::Wallets::IsUserHasBlockchainRequirementResponseData& source, FBP_IsUserHasBlockchainRequirementResponseData& target) {
        target.hasBlockchainRequirement = source.hasBlockchainRequirement;
		FBP_BaseResponseData::ConvertToUnrealModel(source, target);
	}

	static void ConvertToCoreModel(const FBP_IsUserHasBlockchainRequirementResponseData& source, RGN::Modules::Wallets::IsUserHasBlockchainRequirementResponseData& target) {
        target.hasBlockchainRequirement = source.hasBlockchainRequirement;
		FBP_BaseResponseData::ConvertToCoreModel(source, target);
	}
};
