#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "../../../../../Generated/RGN/Modules/Inventory/UpdateInventoryQuantityResponseData.h"
#include "BP_UpdateInventoryQuantityResponseData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_UpdateInventoryQuantityResponseData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Inventory")
    FString id;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Inventory")
    int32 quantity;

	static void ConvertToUnrealModel(const RGN::Modules::Inventory::UpdateInventoryQuantityResponseData& source, FBP_UpdateInventoryQuantityResponseData& target) {
		target.id = FString(source.id.c_str());
		target.quantity = source.quantity;
	}

	static void ConvertToCoreModel(const FBP_UpdateInventoryQuantityResponseData& source, RGN::Modules::Inventory::UpdateInventoryQuantityResponseData& target) {
		target.id = string(TCHAR_TO_UTF8(*source.id));
		target.quantity = source.quantity;
	}
};
