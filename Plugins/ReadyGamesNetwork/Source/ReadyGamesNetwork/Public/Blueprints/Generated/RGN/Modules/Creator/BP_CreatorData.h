#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Creator/CreatorData.h"
#include "../../../../../Generated/RGN/Modules/Currency/Currency.h"
#include "../Currency/BP_Currency.h"
#include "../../../../../Generated/RGN/Modules/Creator/CreatorSaleItem.h"
#include "BP_CreatorSaleItem.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_CreatorData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_CreatorData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Creator")
    TArray<FBP_Currency> unclaimedCurrencies;
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Creator")
    TArray<FBP_CreatorSaleItem> creatorSaleItems;

	static void ConvertToUnrealModel(const RGN::Modules::Creator::CreatorData& source, FBP_CreatorData& target) {
		for (const auto& source_unclaimedCurrencies_item : source.unclaimedCurrencies) {
			FBP_Currency b_source_unclaimedCurrencies_item;
			FBP_Currency::ConvertToUnrealModel(source_unclaimedCurrencies_item, b_source_unclaimedCurrencies_item);
			target.unclaimedCurrencies.Add(b_source_unclaimedCurrencies_item);
		}
		for (const auto& source_creatorSaleItems_item : source.creatorSaleItems) {
			FBP_CreatorSaleItem b_source_creatorSaleItems_item;
			FBP_CreatorSaleItem::ConvertToUnrealModel(source_creatorSaleItems_item, b_source_creatorSaleItems_item);
			target.creatorSaleItems.Add(b_source_creatorSaleItems_item);
		}
	}

	static void ConvertToCoreModel(const FBP_CreatorData& source, RGN::Modules::Creator::CreatorData& target) {
		for (const auto& source_unclaimedCurrencies_item : source.unclaimedCurrencies) {
			RGN::Modules::Currency::Currency cpp_source_unclaimedCurrencies_item;
			FBP_Currency::ConvertToCoreModel(source_unclaimedCurrencies_item, cpp_source_unclaimedCurrencies_item);
			target.unclaimedCurrencies.push_back(cpp_source_unclaimedCurrencies_item);
		}
		for (const auto& source_creatorSaleItems_item : source.creatorSaleItems) {
			RGN::Modules::Creator::CreatorSaleItem cpp_source_creatorSaleItems_item;
			FBP_CreatorSaleItem::ConvertToCoreModel(source_creatorSaleItems_item, cpp_source_creatorSaleItems_item);
			target.creatorSaleItems.push_back(cpp_source_creatorSaleItems_item);
		}
	}
};
