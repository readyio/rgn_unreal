#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Inventory/AddVirtualItemToUserInventoryRequestData.h"
#include "../../../../../Generated/RGN/Modules/Inventory/InventoryItemData.h"
#include "BP_InventoryItemData.h"
#include "../../../../../Generated/RGN/Model/Request/BaseRequestData.h"
#include "../../Model/Request/BP_BaseRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_AddVirtualItemToUserInventoryRequestData.generated.h"

/**
 * Request to add new item in user inventory
 */
USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_AddVirtualItemToUserInventoryRequestData : public FBP_BaseRequestData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Inventory")
    FString userId;
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Inventory")
    FBP_InventoryItemData virtualItemInventoryData;

	static void ConvertToUnrealModel(const RGN::Modules::Inventory::AddVirtualItemToUserInventoryRequestData& source, FBP_AddVirtualItemToUserInventoryRequestData& target) {
		target.userId = FString(source.userId.c_str());
		FBP_InventoryItemData::ConvertToUnrealModel(source.virtualItemInventoryData, target.virtualItemInventoryData);
		FBP_BaseRequestData::ConvertToUnrealModel(source, target);
	}

	static void ConvertToCoreModel(const FBP_AddVirtualItemToUserInventoryRequestData& source, RGN::Modules::Inventory::AddVirtualItemToUserInventoryRequestData& target) {
		target.userId = string(TCHAR_TO_UTF8(*source.userId));
		FBP_InventoryItemData::ConvertToCoreModel(source.virtualItemInventoryData, target.virtualItemInventoryData);
		FBP_BaseRequestData::ConvertToCoreModel(source, target);
	}
};
