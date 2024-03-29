#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/UserProfile/UserData.h"
#include "../../../../../Generated/RGN/Modules/UserProfile/UserProfilePicture.h"
#include "BP_UserProfilePicture.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_UserData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_UserData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | UserProfile")
    FString userId;
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | UserProfile")
    FString email;
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | UserProfile")
    FString displayName;
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | UserProfile")
    FBP_UserProfilePicture profilePicture;
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | UserProfile")
    FString bio;

	static void ConvertToUnrealModel(const RGN::Modules::UserProfile::UserData& source, FBP_UserData& target) {
        target.userId = FString(UTF8_TO_TCHAR(source.userId.c_str()));
        target.email = FString(UTF8_TO_TCHAR(source.email.c_str()));
        target.displayName = FString(UTF8_TO_TCHAR(source.displayName.c_str()));
        FBP_UserProfilePicture::ConvertToUnrealModel(source.profilePicture, target.profilePicture);
        target.bio = FString(UTF8_TO_TCHAR(source.bio.c_str()));
	}

	static void ConvertToCoreModel(const FBP_UserData& source, RGN::Modules::UserProfile::UserData& target) {
        target.userId = string(TCHAR_TO_UTF8(*source.userId));
        target.email = string(TCHAR_TO_UTF8(*source.email));
        target.displayName = string(TCHAR_TO_UTF8(*source.displayName));
        FBP_UserProfilePicture::ConvertToCoreModel(source.profilePicture, target.profilePicture);
        target.bio = string(TCHAR_TO_UTF8(*source.bio));
	}
};
