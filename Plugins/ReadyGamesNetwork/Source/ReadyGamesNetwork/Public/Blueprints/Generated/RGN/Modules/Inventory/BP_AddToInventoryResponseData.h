#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Inventory/AddToInventoryResponseData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_AddToInventoryResponseData.generated.h"

/**
 * Response that return the new quantity of the item recently added
 */
USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_AddToInventoryResponseData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Inventory")
    FString id;
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Inventory")
    int32 quantity;

	static void ConvertToUnrealModel(const RGN::Modules::Inventory::AddToInventoryResponseData& source, FBP_AddToInventoryResponseData& target) {
		target.id = FString(source.id.c_str());
		target.quantity = source.quantity;
	}

	static void ConvertToCoreModel(const FBP_AddToInventoryResponseData& source, RGN::Modules::Inventory::AddToInventoryResponseData& target) {
		target.id = string(TCHAR_TO_UTF8(*source.id));
		target.quantity = source.quantity;
	}
};
