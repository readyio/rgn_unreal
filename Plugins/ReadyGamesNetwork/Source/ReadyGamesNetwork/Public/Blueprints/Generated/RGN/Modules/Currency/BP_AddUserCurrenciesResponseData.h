#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_Currency.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "../../../../../Generated/RGN/Modules/Currency/AddUserCurrenciesResponseData.h"
#include "BP_AddUserCurrenciesResponseData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_AddUserCurrenciesResponseData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Currency")
    TArray<FBP_Currency> userCurrencies;

	static void ConvertToUnrealModel(const RGN::Modules::Currency::AddUserCurrenciesResponseData& source, FBP_AddUserCurrenciesResponseData& target) {
		for (const auto& source_userCurrencies_item : source.userCurrencies) {
			FBP_Currency b_source_userCurrencies_item;
			FBP_Currency::ConvertToUnrealModel(source_userCurrencies_item, b_source_userCurrencies_item);
			target.userCurrencies.Add(b_source_userCurrencies_item);
		}
	}

	static void ConvertToCoreModel(const FBP_AddUserCurrenciesResponseData& source, RGN::Modules::Currency::AddUserCurrenciesResponseData& target) {
		for (const auto& source_userCurrencies_item : source.userCurrencies) {
			RGN::Modules::Currency::Currency cpp_source_userCurrencies_item;
			FBP_Currency::ConvertToCoreModel(source_userCurrencies_item, cpp_source_userCurrencies_item);
			target.userCurrencies.push_back(cpp_source_userCurrencies_item);
		}
	}
};
