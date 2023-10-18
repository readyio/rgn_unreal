#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../Currency/BP_Currency.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "../../../../../Generated/RGN/Modules/Creator/CreatorSaleItem.h"
#include "BP_CreatorSaleItem.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_CreatorSaleItem {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Creator")
    FString id;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Creator")
    FString name;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Creator")
    int32 totalUnit;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Creator")
    TArray<FBP_Currency> totalCurrencies;

	static void ConvertToUnrealModel(const RGN::Modules::Creator::CreatorSaleItem& source, FBP_CreatorSaleItem& target) {
		target.id = FString(source.id.c_str());
		target.name = FString(source.name.c_str());
		target.totalUnit = source.totalUnit;
		for (const auto& source_totalCurrencies_item : source.totalCurrencies) {
			FBP_Currency b_source_totalCurrencies_item;
			FBP_Currency::ConvertToUnrealModel(source_totalCurrencies_item, b_source_totalCurrencies_item);
			target.totalCurrencies.Add(b_source_totalCurrencies_item);
		}
	}

	static void ConvertToCoreModel(const FBP_CreatorSaleItem& source, RGN::Modules::Creator::CreatorSaleItem& target) {
		target.id = string(TCHAR_TO_UTF8(*source.id));
		target.name = string(TCHAR_TO_UTF8(*source.name));
		target.totalUnit = source.totalUnit;
		for (const auto& source_totalCurrencies_item : source.totalCurrencies) {
			RGN::Modules::Currency::Currency cpp_source_totalCurrencies_item;
			FBP_Currency::ConvertToCoreModel(source_totalCurrencies_item, cpp_source_totalCurrencies_item);
			target.totalCurrencies.push_back(cpp_source_totalCurrencies_item);
		}
	}
};
