#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Creator/CreatorSubmitItemResponseData.h"
#include "../../../../../Generated/RGN/Modules/VirtualItems/VirtualItem.h"
#include "../VirtualItems/BP_VirtualItem.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_CreatorSubmitItemResponseData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_CreatorSubmitItemResponseData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Creator")
    FBP_VirtualItem addedItem;

	static void ConvertToUnrealModel(const RGN::Modules::Creator::CreatorSubmitItemResponseData& source, FBP_CreatorSubmitItemResponseData& target) {
		FBP_VirtualItem::ConvertToUnrealModel(source.addedItem, target.addedItem);
	}

	static void ConvertToCoreModel(const FBP_CreatorSubmitItemResponseData& source, RGN::Modules::Creator::CreatorSubmitItemResponseData& target) {
		FBP_VirtualItem::ConvertToCoreModel(source.addedItem, target.addedItem);
	}
};
