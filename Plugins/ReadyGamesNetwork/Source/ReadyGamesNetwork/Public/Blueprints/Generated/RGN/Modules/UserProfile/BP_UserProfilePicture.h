#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/UserProfile/UserProfilePicture.h"
#include "../../../../../Generated/RGN/Model/ImageUrl.h"
#include "../../Model/BP_ImageUrl.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_UserProfilePicture.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_UserProfilePicture : public FBP_ImageUrl {
    GENERATED_BODY()


	static void ConvertToUnrealModel(const RGN::Modules::UserProfile::UserProfilePicture& source, FBP_UserProfilePicture& target) {
		FBP_ImageUrl::ConvertToUnrealModel(source, target);
	}

	static void ConvertToCoreModel(const FBP_UserProfilePicture& source, RGN::Modules::UserProfile::UserProfilePicture& target) {
		FBP_ImageUrl::ConvertToCoreModel(source, target);
	}
};
