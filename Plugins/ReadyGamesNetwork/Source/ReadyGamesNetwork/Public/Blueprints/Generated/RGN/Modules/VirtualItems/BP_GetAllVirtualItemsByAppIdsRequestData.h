#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../Model/Request/BP_BaseMigrationRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "../../../../../Generated/RGN/Modules/VirtualItems/GetAllVirtualItemsByAppIdsRequestData.h"
#include "BP_GetAllVirtualItemsByAppIdsRequestData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_GetAllVirtualItemsByAppIdsRequestData : public FBP_BaseMigrationRequestData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | VirtualItems")
    TArray<FString> appIds;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | VirtualItems")
    int32 limit;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | VirtualItems")
    FString startAfter;

	static void ConvertToUnrealModel(const RGN::Modules::VirtualItems::GetAllVirtualItemsByAppIdsRequestData& source, FBP_GetAllVirtualItemsByAppIdsRequestData& target) {
		for (const auto& source_appIds_item : source.appIds) {
			FString b_source_appIds_item;
			b_source_appIds_item = FString(source_appIds_item.c_str());
			target.appIds.Add(b_source_appIds_item);
		}
		target.limit = source.limit;
		target.startAfter = FString(source.startAfter.c_str());
		FBP_BaseMigrationRequestData::ConvertToUnrealModel(source, target);
	}

	static void ConvertToCoreModel(const FBP_GetAllVirtualItemsByAppIdsRequestData& source, RGN::Modules::VirtualItems::GetAllVirtualItemsByAppIdsRequestData& target) {
		for (const auto& source_appIds_item : source.appIds) {
			string cpp_source_appIds_item;
			cpp_source_appIds_item = string(TCHAR_TO_UTF8(*source_appIds_item));
			target.appIds.push_back(cpp_source_appIds_item);
		}
		target.limit = source.limit;
		target.startAfter = string(TCHAR_TO_UTF8(*source.startAfter));
		FBP_BaseMigrationRequestData::ConvertToCoreModel(source, target);
	}
};
