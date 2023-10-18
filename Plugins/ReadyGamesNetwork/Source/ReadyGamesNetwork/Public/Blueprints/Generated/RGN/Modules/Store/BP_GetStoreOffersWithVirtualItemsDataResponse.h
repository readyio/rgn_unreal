#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Store/GetStoreOffersWithVirtualItemsDataResponse.h"
#include "../../../../../Generated/RGN/Modules/Store/StoreOffer.h"
#include "BP_StoreOffer.h"
#include "../../../../../Generated/RGN/Modules/VirtualItems/VirtualItem.h"
#include "../VirtualItems/BP_VirtualItem.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_GetStoreOffersWithVirtualItemsDataResponse.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_GetStoreOffersWithVirtualItemsDataResponse {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Store")
    TArray<FBP_StoreOffer> offers;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Store")
    TArray<FBP_VirtualItem> virtualItems;

	static void ConvertToUnrealModel(const RGN::Modules::Store::GetStoreOffersWithVirtualItemsDataResponse& source, FBP_GetStoreOffersWithVirtualItemsDataResponse& target) {
		for (const auto& source_offers_item : source.offers) {
			FBP_StoreOffer b_source_offers_item;
			FBP_StoreOffer::ConvertToUnrealModel(source_offers_item, b_source_offers_item);
			target.offers.Add(b_source_offers_item);
		}
		for (const auto& source_virtualItems_item : source.virtualItems) {
			FBP_VirtualItem b_source_virtualItems_item;
			FBP_VirtualItem::ConvertToUnrealModel(source_virtualItems_item, b_source_virtualItems_item);
			target.virtualItems.Add(b_source_virtualItems_item);
		}
	}

	static void ConvertToCoreModel(const FBP_GetStoreOffersWithVirtualItemsDataResponse& source, RGN::Modules::Store::GetStoreOffersWithVirtualItemsDataResponse& target) {
		for (const auto& source_offers_item : source.offers) {
			RGN::Modules::Store::StoreOffer cpp_source_offers_item;
			FBP_StoreOffer::ConvertToCoreModel(source_offers_item, cpp_source_offers_item);
			target.offers.push_back(cpp_source_offers_item);
		}
		for (const auto& source_virtualItems_item : source.virtualItems) {
			RGN::Modules::VirtualItems::VirtualItem cpp_source_virtualItems_item;
			FBP_VirtualItem::ConvertToCoreModel(source_virtualItems_item, cpp_source_virtualItems_item);
			target.virtualItems.push_back(cpp_source_virtualItems_item);
		}
	}
};
