#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Inventory/GetVirtualItemsInventoryResponseData.h"
#include "../../../../../Generated/RGN/Modules/Inventory/InventoryItemData.h"
#include "BP_InventoryItemData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_GetVirtualItemsInventoryResponseData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_GetVirtualItemsInventoryResponseData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Inventory")
    TArray<FBP_InventoryItemData> virtualItemInventoryDatas;

	static void ConvertToUnrealModel(const RGN::Modules::Inventory::GetVirtualItemsInventoryResponseData& source, FBP_GetVirtualItemsInventoryResponseData& target) {
		for (const auto& source_virtualItemInventoryDatas_item : source.virtualItemInventoryDatas) {
			FBP_InventoryItemData b_source_virtualItemInventoryDatas_item;
			FBP_InventoryItemData::ConvertToUnrealModel(source_virtualItemInventoryDatas_item, b_source_virtualItemInventoryDatas_item);
			target.virtualItemInventoryDatas.Add(b_source_virtualItemInventoryDatas_item);
		}
	}

	static void ConvertToCoreModel(const FBP_GetVirtualItemsInventoryResponseData& source, RGN::Modules::Inventory::GetVirtualItemsInventoryResponseData& target) {
		for (const auto& source_virtualItemInventoryDatas_item : source.virtualItemInventoryDatas) {
			RGN::Modules::Inventory::InventoryItemData cpp_source_virtualItemInventoryDatas_item;
			FBP_InventoryItemData::ConvertToCoreModel(source_virtualItemInventoryDatas_item, cpp_source_virtualItemInventoryDatas_item);
			target.virtualItemInventoryDatas.push_back(cpp_source_virtualItemInventoryDatas_item);
		}
	}
};
