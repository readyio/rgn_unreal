#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Currency/AddUserCurrenciesRequestData.h"
#include "../../../../../Generated/RGN/Modules/Currency/Currency.h"
#include "BP_Currency.h"
#include "../../../../../Generated/RGN/Model/Request/BaseRequestData.h"
#include "../../Model/Request/BP_BaseRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_AddUserCurrenciesRequestData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_AddUserCurrenciesRequestData : public FBP_BaseRequestData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Currency")
    TArray<FBP_Currency> currencies;

	static void ConvertToUnrealModel(const RGN::Modules::Currency::AddUserCurrenciesRequestData& source, FBP_AddUserCurrenciesRequestData& target) {
		for (const auto& source_currencies_item : source.currencies) {
			FBP_Currency b_source_currencies_item;
			FBP_Currency::ConvertToUnrealModel(source_currencies_item, b_source_currencies_item);
			target.currencies.Add(b_source_currencies_item);
		}
		FBP_BaseRequestData::ConvertToUnrealModel(source, target);
	}

	static void ConvertToCoreModel(const FBP_AddUserCurrenciesRequestData& source, RGN::Modules::Currency::AddUserCurrenciesRequestData& target) {
		for (const auto& source_currencies_item : source.currencies) {
			RGN::Modules::Currency::Currency cpp_source_currencies_item;
			FBP_Currency::ConvertToCoreModel(source_currencies_item, cpp_source_currencies_item);
			target.currencies.push_back(cpp_source_currencies_item);
		}
		FBP_BaseRequestData::ConvertToCoreModel(source, target);
	}
};
