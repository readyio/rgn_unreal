#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Inventory/UpgradesResponseData.h"
#include "../../../../../Generated/RGN/Modules/Inventory/VirtualItemUpgrade.h"
#include "BP_VirtualItemUpgrade.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_UpgradesResponseData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_UpgradesResponseData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Inventory")
    FString ownedItemId;
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Inventory")
    FString virtualItemId;
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Inventory")
    TArray<FBP_VirtualItemUpgrade> itemUpgrades;

	static void ConvertToUnrealModel(const RGN::Modules::Inventory::UpgradesResponseData& source, FBP_UpgradesResponseData& target) {
        target.ownedItemId = FString(UTF8_TO_TCHAR(source.ownedItemId.c_str()));
        target.virtualItemId = FString(UTF8_TO_TCHAR(source.virtualItemId.c_str()));
        for (const auto& source_itemUpgrades_item : source.itemUpgrades) {
            FBP_VirtualItemUpgrade b_source_itemUpgrades_item;
            FBP_VirtualItemUpgrade::ConvertToUnrealModel(source_itemUpgrades_item, b_source_itemUpgrades_item);
            target.itemUpgrades.Add(b_source_itemUpgrades_item);
        }
	}

	static void ConvertToCoreModel(const FBP_UpgradesResponseData& source, RGN::Modules::Inventory::UpgradesResponseData& target) {
        target.ownedItemId = string(TCHAR_TO_UTF8(*source.ownedItemId));
        target.virtualItemId = string(TCHAR_TO_UTF8(*source.virtualItemId));
        for (const auto& source_itemUpgrades_item : source.itemUpgrades) {
            RGN::Modules::Inventory::VirtualItemUpgrade cpp_source_itemUpgrades_item;
            FBP_VirtualItemUpgrade::ConvertToCoreModel(source_itemUpgrades_item, cpp_source_itemUpgrades_item);
            target.itemUpgrades.push_back(cpp_source_itemUpgrades_item);
        }
	}
};
