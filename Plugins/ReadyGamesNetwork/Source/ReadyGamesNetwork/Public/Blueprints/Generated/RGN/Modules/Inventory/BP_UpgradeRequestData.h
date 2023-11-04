#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Inventory/UpgradeRequestData.h"
#include "../../../../../Generated/RGN/Model/Request/BaseRequestData.h"
#include "../../Model/Request/BP_BaseRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_UpgradeRequestData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_UpgradeRequestData : public FBP_BaseRequestData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Inventory")
    FString ownedItemId;
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Inventory")
    FString upgradeId;
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Inventory")
    int32 newUpgradeLevel;

	static void ConvertToUnrealModel(const RGN::Modules::Inventory::UpgradeRequestData& source, FBP_UpgradeRequestData& target) {
        target.ownedItemId = FString(source.ownedItemId.c_str());
        target.upgradeId = FString(source.upgradeId.c_str());
        target.newUpgradeLevel = source.newUpgradeLevel;
		FBP_BaseRequestData::ConvertToUnrealModel(source, target);
	}

	static void ConvertToCoreModel(const FBP_UpgradeRequestData& source, RGN::Modules::Inventory::UpgradeRequestData& target) {
        target.ownedItemId = string(TCHAR_TO_UTF8(*source.ownedItemId));
        target.upgradeId = string(TCHAR_TO_UTF8(*source.upgradeId));
        target.newUpgradeLevel = source.newUpgradeLevel;
		FBP_BaseRequestData::ConvertToCoreModel(source, target);
	}
};
