#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../Model/Request/BP_BaseRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "../../../../../Generated/RGN/Modules/UserProfile/SetInvisibleStatusRequestData.h"
#include "BP_SetInvisibleStatusRequestData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_SetInvisibleStatusRequestData : public FBP_BaseRequestData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | UserProfile")
    bool invisibleStatus;

	static void ConvertToUnrealModel(const RGN::Modules::UserProfile::SetInvisibleStatusRequestData& source, FBP_SetInvisibleStatusRequestData& target) {
		target.invisibleStatus = source.invisibleStatus;
		FBP_BaseRequestData::ConvertToUnrealModel(source, target);
	}

	static void ConvertToCoreModel(const FBP_SetInvisibleStatusRequestData& source, RGN::Modules::UserProfile::SetInvisibleStatusRequestData& target) {
		target.invisibleStatus = source.invisibleStatus;
		FBP_BaseRequestData::ConvertToCoreModel(source, target);
	}
};
