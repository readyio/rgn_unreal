#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/VirtualItems/GetVirtualItemsByIdsRequestData.h"
#include "../../../../../Generated/RGN/Model/Request/BaseRequestData.h"
#include "../../Model/Request/BP_BaseRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_GetVirtualItemsByIdsRequestData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_GetVirtualItemsByIdsRequestData : public FBP_BaseRequestData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | VirtualItems")
    TArray<FString> ids;

	static void ConvertToUnrealModel(const RGN::Modules::VirtualItems::GetVirtualItemsByIdsRequestData& source, FBP_GetVirtualItemsByIdsRequestData& target) {
		for (const auto& source_ids_item : source.ids) {
			FString b_source_ids_item;
			b_source_ids_item = FString(source_ids_item.c_str());
			target.ids.Add(b_source_ids_item);
		}
		FBP_BaseRequestData::ConvertToUnrealModel(source, target);
	}

	static void ConvertToCoreModel(const FBP_GetVirtualItemsByIdsRequestData& source, RGN::Modules::VirtualItems::GetVirtualItemsByIdsRequestData& target) {
		for (const auto& source_ids_item : source.ids) {
			string cpp_source_ids_item;
			cpp_source_ids_item = string(TCHAR_TO_UTF8(*source_ids_item));
			target.ids.push_back(cpp_source_ids_item);
		}
		FBP_BaseRequestData::ConvertToCoreModel(source, target);
	}
};
