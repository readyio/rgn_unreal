#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_RGNCoinEconomyProduct.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "../../../../../Generated/RGN/Modules/Currency/RGNCoinEconomy.h"
#include "BP_RGNCoinEconomy.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_RGNCoinEconomy {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Currency")
    TArray<FBP_RGNCoinEconomyProduct> products;

	static void ConvertToUnrealModel(const RGN::Modules::Currency::RGNCoinEconomy& source, FBP_RGNCoinEconomy& target) {
		for (const auto& source_products_item : source.products) {
			FBP_RGNCoinEconomyProduct b_source_products_item;
			FBP_RGNCoinEconomyProduct::ConvertToUnrealModel(source_products_item, b_source_products_item);
			target.products.Add(b_source_products_item);
		}
	}

	static void ConvertToCoreModel(const FBP_RGNCoinEconomy& source, RGN::Modules::Currency::RGNCoinEconomy& target) {
		for (const auto& source_products_item : source.products) {
			RGN::Modules::Currency::RGNCoinEconomyProduct cpp_source_products_item;
			FBP_RGNCoinEconomyProduct::ConvertToCoreModel(source_products_item, cpp_source_products_item);
			target.products.push_back(cpp_source_products_item);
		}
	}
};
