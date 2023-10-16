#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_Currency.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "../../../../../Generated/RGN/Modules/Currency/PurchaseInfo.h"
#include "BP_PurchaseInfo.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_PurchaseInfo {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Currency")
    TArray<FBP_Currency> cost;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Currency")
    int32 quantity;

	static void ConvertToUnrealModel(const RGN::Modules::Currency::PurchaseInfo& source, FBP_PurchaseInfo& target) {
		for (const auto& source_cost_item : source.cost) {
			FBP_Currency b_source_cost_item;
			FBP_Currency::ConvertToUnrealModel(source_cost_item, b_source_cost_item);
			target.cost.Add(b_source_cost_item);
		}
		target.quantity = source.quantity;
	}

	static void ConvertToCoreModel(const FBP_PurchaseInfo& source, RGN::Modules::Currency::PurchaseInfo& target) {
		for (const auto& source_cost_item : source.cost) {
			RGN::Modules::Currency::Currency cpp_source_cost_item;
			FBP_Currency::ConvertToCoreModel(source_cost_item, cpp_source_cost_item);
			target.cost.push_back(cpp_source_cost_item);
		}
		target.quantity = source.quantity;
	}
};
