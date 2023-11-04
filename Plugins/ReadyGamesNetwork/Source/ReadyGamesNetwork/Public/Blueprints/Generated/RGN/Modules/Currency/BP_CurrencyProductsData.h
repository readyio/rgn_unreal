#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Currency/CurrencyProductsData.h"
#include "../../../../../Generated/RGN/Modules/Currency/CurrencyProduct.h"
#include "BP_CurrencyProduct.h"
#include "../../../../../Generated/RGN/Modules/Currency/CurrencyOffer.h"
#include "BP_CurrencyOffer.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_CurrencyProductsData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_CurrencyProductsData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Currency")
    TArray<FBP_CurrencyProduct> products;
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Currency")
    TArray<FBP_CurrencyOffer> offers;

	static void ConvertToUnrealModel(const RGN::Modules::Currency::CurrencyProductsData& source, FBP_CurrencyProductsData& target) {
        for (const auto& source_products_item : source.products) {
            FBP_CurrencyProduct b_source_products_item;
            FBP_CurrencyProduct::ConvertToUnrealModel(source_products_item, b_source_products_item);
            target.products.Add(b_source_products_item);
        }
        for (const auto& source_offers_item : source.offers) {
            FBP_CurrencyOffer b_source_offers_item;
            FBP_CurrencyOffer::ConvertToUnrealModel(source_offers_item, b_source_offers_item);
            target.offers.Add(b_source_offers_item);
        }
	}

	static void ConvertToCoreModel(const FBP_CurrencyProductsData& source, RGN::Modules::Currency::CurrencyProductsData& target) {
        for (const auto& source_products_item : source.products) {
            RGN::Modules::Currency::CurrencyProduct cpp_source_products_item;
            FBP_CurrencyProduct::ConvertToCoreModel(source_products_item, cpp_source_products_item);
            target.products.push_back(cpp_source_products_item);
        }
        for (const auto& source_offers_item : source.offers) {
            RGN::Modules::Currency::CurrencyOffer cpp_source_offers_item;
            FBP_CurrencyOffer::ConvertToCoreModel(source_offers_item, cpp_source_offers_item);
            target.offers.push_back(cpp_source_offers_item);
        }
	}
};
