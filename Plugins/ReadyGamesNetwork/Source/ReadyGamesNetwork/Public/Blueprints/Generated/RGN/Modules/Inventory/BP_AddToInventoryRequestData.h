#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Inventory/AddToInventoryRequestData.h"
#include "../../../../../Generated/RGN/Modules/Inventory/InventoryData.h"
#include "BP_InventoryData.h"
#include "../../../../../Generated/RGN/Model/Request/BaseRequestData.h"
#include "../../Model/Request/BP_BaseRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_AddToInventoryRequestData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_AddToInventoryRequestData : public FBP_BaseRequestData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Inventory")
    TArray<FBP_InventoryData> inventoryDatas;

	static void ConvertToUnrealModel(const RGN::Modules::Inventory::AddToInventoryRequestData& source, FBP_AddToInventoryRequestData& target) {
        for (const auto& source_inventoryDatas_item : source.inventoryDatas) {
            FBP_InventoryData b_source_inventoryDatas_item;
            FBP_InventoryData::ConvertToUnrealModel(source_inventoryDatas_item, b_source_inventoryDatas_item);
            target.inventoryDatas.Add(b_source_inventoryDatas_item);
        }
		FBP_BaseRequestData::ConvertToUnrealModel(source, target);
	}

	static void ConvertToCoreModel(const FBP_AddToInventoryRequestData& source, RGN::Modules::Inventory::AddToInventoryRequestData& target) {
        for (const auto& source_inventoryDatas_item : source.inventoryDatas) {
            RGN::Modules::Inventory::InventoryData cpp_source_inventoryDatas_item;
            FBP_InventoryData::ConvertToCoreModel(source_inventoryDatas_item, cpp_source_inventoryDatas_item);
            target.inventoryDatas.push_back(cpp_source_inventoryDatas_item);
        }
		FBP_BaseRequestData::ConvertToCoreModel(source, target);
	}
};
