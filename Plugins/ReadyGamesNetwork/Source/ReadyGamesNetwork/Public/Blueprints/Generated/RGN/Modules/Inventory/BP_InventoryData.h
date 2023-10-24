#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Inventory/InventoryData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_InventoryData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_InventoryData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Inventory")
    FString id;
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Inventory")
    int32 quantity;

	static void ConvertToUnrealModel(const RGN::Modules::Inventory::InventoryData& source, FBP_InventoryData& target) {
		target.id = FString(source.id.c_str());
		target.quantity = source.quantity;
	}

	static void ConvertToCoreModel(const FBP_InventoryData& source, RGN::Modules::Inventory::InventoryData& target) {
		target.id = string(TCHAR_TO_UTF8(*source.id));
		target.quantity = source.quantity;
	}
};
