#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Currency/ClaimCurrencyResponseData.h"
#include "../../../../../Generated/RGN/Modules/Currency/Currency.h"
#include "BP_Currency.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_ClaimCurrencyResponseData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_ClaimCurrencyResponseData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Currency")
    bool isSuccess;
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Currency")
    TArray<FBP_Currency> unclaimedCurrencies;
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Currency")
    TArray<FBP_Currency> currencies;

	static void ConvertToUnrealModel(const RGN::Modules::Currency::ClaimCurrencyResponseData& source, FBP_ClaimCurrencyResponseData& target) {
		target.isSuccess = source.isSuccess;
		for (const auto& source_unclaimedCurrencies_item : source.unclaimedCurrencies) {
			FBP_Currency b_source_unclaimedCurrencies_item;
			FBP_Currency::ConvertToUnrealModel(source_unclaimedCurrencies_item, b_source_unclaimedCurrencies_item);
			target.unclaimedCurrencies.Add(b_source_unclaimedCurrencies_item);
		}
		for (const auto& source_currencies_item : source.currencies) {
			FBP_Currency b_source_currencies_item;
			FBP_Currency::ConvertToUnrealModel(source_currencies_item, b_source_currencies_item);
			target.currencies.Add(b_source_currencies_item);
		}
	}

	static void ConvertToCoreModel(const FBP_ClaimCurrencyResponseData& source, RGN::Modules::Currency::ClaimCurrencyResponseData& target) {
		target.isSuccess = source.isSuccess;
		for (const auto& source_unclaimedCurrencies_item : source.unclaimedCurrencies) {
			RGN::Modules::Currency::Currency cpp_source_unclaimedCurrencies_item;
			FBP_Currency::ConvertToCoreModel(source_unclaimedCurrencies_item, cpp_source_unclaimedCurrencies_item);
			target.unclaimedCurrencies.push_back(cpp_source_unclaimedCurrencies_item);
		}
		for (const auto& source_currencies_item : source.currencies) {
			RGN::Modules::Currency::Currency cpp_source_currencies_item;
			FBP_Currency::ConvertToCoreModel(source_currencies_item, cpp_source_currencies_item);
			target.currencies.push_back(cpp_source_currencies_item);
		}
	}
};
