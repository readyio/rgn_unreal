#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_InventoryData.h"
#include "../../Model/Request/BP_BaseRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "../../../../../Generated/RGN/Modules/Inventory/ChangeVirtualItemsQuantityRequestData.h"
#include "BP_ChangeVirtualItemsQuantityRequestData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_ChangeVirtualItemsQuantityRequestData : public FBP_BaseRequestData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Inventory")
    TArray<FBP_InventoryData> inventoryDatas;

	static void ConvertToUnrealModel(const RGN::Modules::Inventory::ChangeVirtualItemsQuantityRequestData& source, FBP_ChangeVirtualItemsQuantityRequestData& target) {
		for (const auto& source_inventoryDatas_item : source.inventoryDatas) {
			FBP_InventoryData b_source_inventoryDatas_item;
			FBP_InventoryData::ConvertToUnrealModel(source_inventoryDatas_item, b_source_inventoryDatas_item);
			target.inventoryDatas.Add(b_source_inventoryDatas_item);
		}
		FBP_BaseRequestData::ConvertToUnrealModel(source, target);
	}

	static void ConvertToCoreModel(const FBP_ChangeVirtualItemsQuantityRequestData& source, RGN::Modules::Inventory::ChangeVirtualItemsQuantityRequestData& target) {
		for (const auto& source_inventoryDatas_item : source.inventoryDatas) {
			RGN::Modules::Inventory::InventoryData cpp_source_inventoryDatas_item;
			FBP_InventoryData::ConvertToCoreModel(source_inventoryDatas_item, cpp_source_inventoryDatas_item);
			target.inventoryDatas.push_back(cpp_source_inventoryDatas_item);
		}
		FBP_BaseRequestData::ConvertToCoreModel(source, target);
	}
};
