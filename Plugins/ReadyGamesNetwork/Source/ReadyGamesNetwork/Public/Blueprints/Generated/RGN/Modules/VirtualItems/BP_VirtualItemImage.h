#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../Model/BP_ImageUrl.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "../../../../../Generated/RGN/Modules/VirtualItems/VirtualItemImage.h"
#include "BP_VirtualItemImage.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_VirtualItemImage : public FBP_ImageUrl {
    GENERATED_BODY()


	static void ConvertToUnrealModel(const RGN::Modules::VirtualItems::VirtualItemImage& source, FBP_VirtualItemImage& target) {
		FBP_ImageUrl::ConvertToUnrealModel(source, target);
	}

	static void ConvertToCoreModel(const FBP_VirtualItemImage& source, RGN::Modules::VirtualItems::VirtualItemImage& target) {
		FBP_ImageUrl::ConvertToCoreModel(source, target);
	}
};
