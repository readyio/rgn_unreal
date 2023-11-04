#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Store/SetPricesRequestData.h"
#include "../../../../../Generated/RGN/Modules/VirtualItems/PriceInfo.h"
#include "../VirtualItems/BP_PriceInfo.h"
#include "../../../../../Generated/RGN/Model/Request/BaseRequestData.h"
#include "../../Model/Request/BP_BaseRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_SetPricesRequestData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_SetPricesRequestData : public FBP_BaseRequestData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Store")
    FString offerId;
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Store")
    TArray<FBP_PriceInfo> prices;

	static void ConvertToUnrealModel(const RGN::Modules::Store::SetPricesRequestData& source, FBP_SetPricesRequestData& target) {
        target.offerId = FString(source.offerId.c_str());
        for (const auto& source_prices_item : source.prices) {
            FBP_PriceInfo b_source_prices_item;
            FBP_PriceInfo::ConvertToUnrealModel(source_prices_item, b_source_prices_item);
            target.prices.Add(b_source_prices_item);
        }
		FBP_BaseRequestData::ConvertToUnrealModel(source, target);
	}

	static void ConvertToCoreModel(const FBP_SetPricesRequestData& source, RGN::Modules::Store::SetPricesRequestData& target) {
        target.offerId = string(TCHAR_TO_UTF8(*source.offerId));
        for (const auto& source_prices_item : source.prices) {
            RGN::Modules::VirtualItems::PriceInfo cpp_source_prices_item;
            FBP_PriceInfo::ConvertToCoreModel(source_prices_item, cpp_source_prices_item);
            target.prices.push_back(cpp_source_prices_item);
        }
		FBP_BaseRequestData::ConvertToCoreModel(source, target);
	}
};
