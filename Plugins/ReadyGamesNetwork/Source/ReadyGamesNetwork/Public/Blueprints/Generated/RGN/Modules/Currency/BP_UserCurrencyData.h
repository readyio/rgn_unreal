#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_Currency.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "../../../../../Generated/RGN/Modules/Currency/UserCurrencyData.h"
#include "BP_UserCurrencyData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_UserCurrencyData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Currency")
    TArray<FBP_Currency> currencies;

	static void ConvertToUnrealModel(const RGN::Modules::Currency::UserCurrencyData& source, FBP_UserCurrencyData& target) {
		for (const auto& source_currencies_item : source.currencies) {
			FBP_Currency b_source_currencies_item;
			FBP_Currency::ConvertToUnrealModel(source_currencies_item, b_source_currencies_item);
			target.currencies.Add(b_source_currencies_item);
		}
	}

	static void ConvertToCoreModel(const FBP_UserCurrencyData& source, RGN::Modules::Currency::UserCurrencyData& target) {
		for (const auto& source_currencies_item : source.currencies) {
			RGN::Modules::Currency::Currency cpp_source_currencies_item;
			FBP_Currency::ConvertToCoreModel(source_currencies_item, cpp_source_currencies_item);
			target.currencies.push_back(cpp_source_currencies_item);
		}
	}
};
