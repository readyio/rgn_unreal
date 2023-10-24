#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Store/PurchaseResult.h"
#include "../../../../../Generated/RGN/Modules/Inventory/InventoryItemData.h"
#include "../Inventory/BP_InventoryItemData.h"
#include "../../../../../Generated/RGN/Modules/Currency/Currency.h"
#include "../Currency/BP_Currency.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_PurchaseResult.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_PurchaseResult {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Store")
    FString offerId;
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Store")
    TArray<FBP_InventoryItemData> items;
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Store")
    TArray<FBP_Currency> updatedCurrencies;

	static void ConvertToUnrealModel(const RGN::Modules::Store::PurchaseResult& source, FBP_PurchaseResult& target) {
		target.offerId = FString(source.offerId.c_str());
		for (const auto& source_items_item : source.items) {
			FBP_InventoryItemData b_source_items_item;
			FBP_InventoryItemData::ConvertToUnrealModel(source_items_item, b_source_items_item);
			target.items.Add(b_source_items_item);
		}
		for (const auto& source_updatedCurrencies_item : source.updatedCurrencies) {
			FBP_Currency b_source_updatedCurrencies_item;
			FBP_Currency::ConvertToUnrealModel(source_updatedCurrencies_item, b_source_updatedCurrencies_item);
			target.updatedCurrencies.Add(b_source_updatedCurrencies_item);
		}
	}

	static void ConvertToCoreModel(const FBP_PurchaseResult& source, RGN::Modules::Store::PurchaseResult& target) {
		target.offerId = string(TCHAR_TO_UTF8(*source.offerId));
		for (const auto& source_items_item : source.items) {
			RGN::Modules::Inventory::InventoryItemData cpp_source_items_item;
			FBP_InventoryItemData::ConvertToCoreModel(source_items_item, cpp_source_items_item);
			target.items.push_back(cpp_source_items_item);
		}
		for (const auto& source_updatedCurrencies_item : source.updatedCurrencies) {
			RGN::Modules::Currency::Currency cpp_source_updatedCurrencies_item;
			FBP_Currency::ConvertToCoreModel(source_updatedCurrencies_item, cpp_source_updatedCurrencies_item);
			target.updatedCurrencies.push_back(cpp_source_updatedCurrencies_item);
		}
	}
};
