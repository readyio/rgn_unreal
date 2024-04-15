#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/VirtualItems/UpdateVirtualItemsRequestData.h"
#include "../../../../../Generated/RGN/Modules/VirtualItems/VirtualItem.h"
#include "BP_VirtualItem.h"
#include "../../../../../Generated/RGN/Model/Request/BaseRequestData.h"
#include "../../Model/Request/BP_BaseRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_UpdateVirtualItemsRequestData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_UpdateVirtualItemsRequestData : public FBP_BaseRequestData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | VirtualItems")
    FString itemId;
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | VirtualItems")
    FBP_VirtualItem virtualItem;

	static void ConvertToUnrealModel(const RGN::Modules::VirtualItems::UpdateVirtualItemsRequestData& source, FBP_UpdateVirtualItemsRequestData& target) {
        target.itemId = FString(UTF8_TO_TCHAR(source.itemId.c_str()));
        FBP_VirtualItem::ConvertToUnrealModel(source.virtualItem, target.virtualItem);
		FBP_BaseRequestData::ConvertToUnrealModel(source, target);
	}

	static void ConvertToCoreModel(const FBP_UpdateVirtualItemsRequestData& source, RGN::Modules::VirtualItems::UpdateVirtualItemsRequestData& target) {
        target.itemId = string(TCHAR_TO_UTF8(*source.itemId));
        FBP_VirtualItem::ConvertToCoreModel(source.virtualItem, target.virtualItem);
		FBP_BaseRequestData::ConvertToCoreModel(source, target);
	}
};
