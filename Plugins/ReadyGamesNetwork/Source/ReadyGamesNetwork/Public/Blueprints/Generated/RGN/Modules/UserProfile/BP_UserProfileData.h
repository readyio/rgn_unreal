#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/UserProfile/UserProfileData.h"
#include "../../../../../Generated/RGN/Modules/Currency/Currency.h"
#include "../Currency/BP_Currency.h"
#include "../../../../../Generated/RGN/Modules/UserProfile/UserData.h"
#include "BP_UserData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_UserProfileData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_UserProfileData : public FBP_UserData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | UserProfile")
    FString lastAppPackageName;
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | UserProfile")
    bool invisibleStatus;
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | UserProfile")
    TArray<FBP_Currency> currencies;

	static void ConvertToUnrealModel(const RGN::Modules::UserProfile::UserProfileData& source, FBP_UserProfileData& target) {
        target.lastAppPackageName = FString(UTF8_TO_TCHAR(source.lastAppPackageName.c_str()));
        target.invisibleStatus = source.invisibleStatus;
        for (const auto& source_currencies_item : source.currencies) {
            FBP_Currency b_source_currencies_item;
            FBP_Currency::ConvertToUnrealModel(source_currencies_item, b_source_currencies_item);
            target.currencies.Add(b_source_currencies_item);
        }
		FBP_UserData::ConvertToUnrealModel(source, target);
	}

	static void ConvertToCoreModel(const FBP_UserProfileData& source, RGN::Modules::UserProfile::UserProfileData& target) {
        target.lastAppPackageName = string(TCHAR_TO_UTF8(*source.lastAppPackageName));
        target.invisibleStatus = source.invisibleStatus;
        for (const auto& source_currencies_item : source.currencies) {
            RGN::Modules::Currency::Currency cpp_source_currencies_item;
            FBP_Currency::ConvertToCoreModel(source_currencies_item, cpp_source_currencies_item);
            target.currencies.push_back(cpp_source_currencies_item);
        }
		FBP_UserData::ConvertToCoreModel(source, target);
	}
};
