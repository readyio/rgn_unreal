#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../VirtualItems/BP_VirtualItem.h"
#include "../../Model/Request/BP_BaseMigrationRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "../../../../../Generated/RGN/Modules/Creator/CreatorSubmitItemRequestData.h"
#include "BP_CreatorSubmitItemRequestData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_CreatorSubmitItemRequestData : public FBP_BaseMigrationRequestData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Creator")
    FBP_VirtualItem customizedItem;

	static void ConvertToUnrealModel(const RGN::Modules::Creator::CreatorSubmitItemRequestData& source, FBP_CreatorSubmitItemRequestData& target) {
		FBP_VirtualItem::ConvertToUnrealModel(source.customizedItem, target.customizedItem);
		FBP_BaseMigrationRequestData::ConvertToUnrealModel(source, target);
	}

	static void ConvertToCoreModel(const FBP_CreatorSubmitItemRequestData& source, RGN::Modules::Creator::CreatorSubmitItemRequestData& target) {
		FBP_VirtualItem::ConvertToCoreModel(source.customizedItem, target.customizedItem);
		FBP_BaseMigrationRequestData::ConvertToCoreModel(source, target);
	}
};
