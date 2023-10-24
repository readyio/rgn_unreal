#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Store/ImportStoreOffersFromCSVResponse.h"
#include "../../../../../Generated/RGN/Modules/Store/StoreOffer.h"
#include "BP_StoreOffer.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_ImportStoreOffersFromCSVResponse.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_ImportStoreOffersFromCSVResponse {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Store")
    TArray<FBP_StoreOffer> offers;

	static void ConvertToUnrealModel(const RGN::Modules::Store::ImportStoreOffersFromCSVResponse& source, FBP_ImportStoreOffersFromCSVResponse& target) {
		for (const auto& source_offers_item : source.offers) {
			FBP_StoreOffer b_source_offers_item;
			FBP_StoreOffer::ConvertToUnrealModel(source_offers_item, b_source_offers_item);
			target.offers.Add(b_source_offers_item);
		}
	}

	static void ConvertToCoreModel(const FBP_ImportStoreOffersFromCSVResponse& source, RGN::Modules::Store::ImportStoreOffersFromCSVResponse& target) {
		for (const auto& source_offers_item : source.offers) {
			RGN::Modules::Store::StoreOffer cpp_source_offers_item;
			FBP_StoreOffer::ConvertToCoreModel(source_offers_item, cpp_source_offers_item);
			target.offers.push_back(cpp_source_offers_item);
		}
	}
};
