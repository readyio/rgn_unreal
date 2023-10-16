#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../Model/Request/BP_BaseRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "../../../../../Generated/RGN/Modules/Creator/BuyCreatorItemsRequestData.h"
#include "BP_BuyCreatorItemsRequestData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_BuyCreatorItemsRequestData : public FBP_BaseRequestData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Creator")
    TArray<FString> itemIds;

	static void ConvertToUnrealModel(const RGN::Modules::Creator::BuyCreatorItemsRequestData& source, FBP_BuyCreatorItemsRequestData& target) {
		for (const auto& source_itemIds_item : source.itemIds) {
			FString b_source_itemIds_item;
			b_source_itemIds_item = FString(source_itemIds_item.c_str());
			target.itemIds.Add(b_source_itemIds_item);
		}
		FBP_BaseRequestData::ConvertToUnrealModel(source, target);
	}

	static void ConvertToCoreModel(const FBP_BuyCreatorItemsRequestData& source, RGN::Modules::Creator::BuyCreatorItemsRequestData& target) {
		for (const auto& source_itemIds_item : source.itemIds) {
			string cpp_source_itemIds_item;
			cpp_source_itemIds_item = string(TCHAR_TO_UTF8(*source_itemIds_item));
			target.itemIds.push_back(cpp_source_itemIds_item);
		}
		FBP_BaseRequestData::ConvertToCoreModel(source, target);
	}
};
