#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Store/BuyStoreOfferResponse.h"
#include "../../../../../Generated/RGN/Modules/Store/PurchaseItem.h"
#include "BP_PurchaseItem.h"
#include "../../../../../Generated/RGN/Modules/Currency/Currency.h"
#include "../Currency/BP_Currency.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_BuyStoreOfferResponse.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_BuyStoreOfferResponse {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Store")
    FString offerId;
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Store")
    TArray<FBP_PurchaseItem> purchasedItems;
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Store")
    TArray<FBP_Currency> updatedCurrencies;

	static void ConvertToUnrealModel(const RGN::Modules::Store::BuyStoreOfferResponse& source, FBP_BuyStoreOfferResponse& target) {
		target.offerId = FString(source.offerId.c_str());
		for (const auto& source_purchasedItems_item : source.purchasedItems) {
			FBP_PurchaseItem b_source_purchasedItems_item;
			FBP_PurchaseItem::ConvertToUnrealModel(source_purchasedItems_item, b_source_purchasedItems_item);
			target.purchasedItems.Add(b_source_purchasedItems_item);
		}
		for (const auto& source_updatedCurrencies_item : source.updatedCurrencies) {
			FBP_Currency b_source_updatedCurrencies_item;
			FBP_Currency::ConvertToUnrealModel(source_updatedCurrencies_item, b_source_updatedCurrencies_item);
			target.updatedCurrencies.Add(b_source_updatedCurrencies_item);
		}
	}

	static void ConvertToCoreModel(const FBP_BuyStoreOfferResponse& source, RGN::Modules::Store::BuyStoreOfferResponse& target) {
		target.offerId = string(TCHAR_TO_UTF8(*source.offerId));
		for (const auto& source_purchasedItems_item : source.purchasedItems) {
			RGN::Modules::Store::PurchaseItem cpp_source_purchasedItems_item;
			FBP_PurchaseItem::ConvertToCoreModel(source_purchasedItems_item, cpp_source_purchasedItems_item);
			target.purchasedItems.push_back(cpp_source_purchasedItems_item);
		}
		for (const auto& source_updatedCurrencies_item : source.updatedCurrencies) {
			RGN::Modules::Currency::Currency cpp_source_updatedCurrencies_item;
			FBP_Currency::ConvertToCoreModel(source_updatedCurrencies_item, cpp_source_updatedCurrencies_item);
			target.updatedCurrencies.push_back(cpp_source_updatedCurrencies_item);
		}
	}
};
