#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/VirtualItems/AddToVirtualItemsRequestData.h"
#include "../../../../../Generated/RGN/Modules/VirtualItems/VirtualItem.h"
#include "BP_VirtualItem.h"
#include "../../../../../Generated/RGN/Model/Request/BaseRequestData.h"
#include "../../Model/Request/BP_BaseRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_AddToVirtualItemsRequestData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_AddToVirtualItemsRequestData : public FBP_BaseRequestData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | VirtualItems")
    FBP_VirtualItem virtualItem;

	static void ConvertToUnrealModel(const RGN::Modules::VirtualItems::AddToVirtualItemsRequestData& source, FBP_AddToVirtualItemsRequestData& target) {
		FBP_VirtualItem::ConvertToUnrealModel(source.virtualItem, target.virtualItem);
		FBP_BaseRequestData::ConvertToUnrealModel(source, target);
	}

	static void ConvertToCoreModel(const FBP_AddToVirtualItemsRequestData& source, RGN::Modules::VirtualItems::AddToVirtualItemsRequestData& target) {
		FBP_VirtualItem::ConvertToCoreModel(source.virtualItem, target.virtualItem);
		FBP_BaseRequestData::ConvertToCoreModel(source, target);
	}
};
