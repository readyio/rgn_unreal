#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Inventory/VirtualItemUpgrade.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_VirtualItemUpgrade.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_VirtualItemUpgrade {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Inventory")
    FString upgradeId;
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Inventory")
    int32 upgradeLevel;

	static void ConvertToUnrealModel(const RGN::Modules::Inventory::VirtualItemUpgrade& source, FBP_VirtualItemUpgrade& target) {
        target.upgradeId = FString(UTF8_TO_TCHAR(source.upgradeId.c_str()));
        target.upgradeLevel = source.upgradeLevel;
	}

	static void ConvertToCoreModel(const FBP_VirtualItemUpgrade& source, RGN::Modules::Inventory::VirtualItemUpgrade& target) {
        target.upgradeId = string(TCHAR_TO_UTF8(*source.upgradeId));
        target.upgradeLevel = source.upgradeLevel;
	}
};
