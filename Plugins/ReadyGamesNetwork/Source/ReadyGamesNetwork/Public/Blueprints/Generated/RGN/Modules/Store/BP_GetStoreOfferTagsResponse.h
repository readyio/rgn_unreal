#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Store/GetStoreOfferTagsResponse.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_GetStoreOfferTagsResponse.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_GetStoreOfferTagsResponse {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Store")
    TArray<FString> tags;

	static void ConvertToUnrealModel(const RGN::Modules::Store::GetStoreOfferTagsResponse& source, FBP_GetStoreOfferTagsResponse& target) {
		for (const auto& source_tags_item : source.tags) {
			FString b_source_tags_item;
			b_source_tags_item = FString(source_tags_item.c_str());
			target.tags.Add(b_source_tags_item);
		}
	}

	static void ConvertToCoreModel(const FBP_GetStoreOfferTagsResponse& source, RGN::Modules::Store::GetStoreOfferTagsResponse& target) {
		for (const auto& source_tags_item : source.tags) {
			string cpp_source_tags_item;
			cpp_source_tags_item = string(TCHAR_TO_UTF8(*source_tags_item));
			target.tags.push_back(cpp_source_tags_item);
		}
	}
};
