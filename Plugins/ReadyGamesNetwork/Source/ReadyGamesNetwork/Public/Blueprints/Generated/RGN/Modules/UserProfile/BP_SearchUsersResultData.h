#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_UserData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "../../../../../Generated/RGN/Modules/UserProfile/SearchUsersResultData.h"
#include "BP_SearchUsersResultData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_SearchUsersResultData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | UserProfile")
    TArray<FBP_UserData> queryResult;

	static void ConvertToUnrealModel(const RGN::Modules::UserProfile::SearchUsersResultData& source, FBP_SearchUsersResultData& target) {
		for (const auto& source_queryResult_item : source.queryResult) {
			FBP_UserData b_source_queryResult_item;
			FBP_UserData::ConvertToUnrealModel(source_queryResult_item, b_source_queryResult_item);
			target.queryResult.Add(b_source_queryResult_item);
		}
	}

	static void ConvertToCoreModel(const FBP_SearchUsersResultData& source, RGN::Modules::UserProfile::SearchUsersResultData& target) {
		for (const auto& source_queryResult_item : source.queryResult) {
			RGN::Modules::UserProfile::UserData cpp_source_queryResult_item;
			FBP_UserData::ConvertToCoreModel(source_queryResult_item, cpp_source_queryResult_item);
			target.queryResult.push_back(cpp_source_queryResult_item);
		}
	}
};
