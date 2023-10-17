#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_VirtualItem.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "../../../../../Generated/RGN/Modules/VirtualItems/AddVirtualItemResponseData.h"
#include "BP_AddVirtualItemResponseData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_AddVirtualItemResponseData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | VirtualItems")
    FBP_VirtualItem virtualItem;

	static void ConvertToUnrealModel(const RGN::Modules::VirtualItems::AddVirtualItemResponseData& source, FBP_AddVirtualItemResponseData& target) {
		FBP_VirtualItem::ConvertToUnrealModel(source.virtualItem, target.virtualItem);
	}

	static void ConvertToCoreModel(const FBP_AddVirtualItemResponseData& source, RGN::Modules::VirtualItems::AddVirtualItemResponseData& target) {
		FBP_VirtualItem::ConvertToCoreModel(source.virtualItem, target.virtualItem);
	}
};
