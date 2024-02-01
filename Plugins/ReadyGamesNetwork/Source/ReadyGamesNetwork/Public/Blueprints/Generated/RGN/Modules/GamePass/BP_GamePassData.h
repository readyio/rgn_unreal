#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/GamePass/GamePassData.h"
#include "../../../../../Generated/RGN/Model/Request/BaseRequestData.h"
#include "../../Model/Request/BP_BaseRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_GamePassData.generated.h"

/**
 * Represents a Game Pass in the Ready Games Network (RGN) with its associated properties.
 */
USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_GamePassData : public FBP_BaseRequestData {
    GENERATED_BODY()

    /**
     * Unique identifier for the Game Pass.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | GamePass")
    FString id;
    /**
     * List of application identifiers that are included in this Game Pass.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | GamePass")
    TArray<FString> appIds;
    /**
     * The name used for server requests related to this Game Pass.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | GamePass")
    FString requestName;
    /**
     * The display name of the Game Pass.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | GamePass")
    FString name;
    /**
     * Detailed description of the Game Pass.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | GamePass")
    FString description;
    /**
     * Defines who can add/remove the Game Pass to/from the user:
     * - `client` - the client and the server can add/remove the Game Pass to/from the user.
     * - `server` - only the server can add/remove the Game Pass to/from the user.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | GamePass")
    FString setBy;
    /**
     * List of virtual item identifiers that are providing this game pass when purchased.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | GamePass")
    TArray<FString> linkedVirtualItems;
    /**
     * The UNIX timestamp representing when the Game Pass was created.
     * in milliseconds since midnight, January 1, 1970 UTC.
     * Refer to T:RGN.Utility.DateTimeUtility for helper methods.
     * This field is automatically populated by the backend
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | GamePass")
    int64 createdAt;
    /**
     * The UNIX timestamp representing when the Game Pass was last updated.
     * in milliseconds since midnight, January 1, 1970 UTC.
     * Refer to T:RGN.Utility.DateTimeUtility for helper methods.
     * This field is automatically populated by the backend
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | GamePass")
    int64 updatedAt;
    /**
     * Identifier for the user who created the Game Pass.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | GamePass")
    FString createdBy;
    /**
     * Identifier for the user who last updated the Game Pass.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | GamePass")
    FString updatedBy;

	static void ConvertToUnrealModel(const RGN::Modules::GamePass::GamePassData& source, FBP_GamePassData& target) {
        target.id = FString(source.id.c_str());
        for (const auto& source_appIds_item : source.appIds) {
            FString b_source_appIds_item;
            b_source_appIds_item = FString(source_appIds_item.c_str());
            target.appIds.Add(b_source_appIds_item);
        }
        target.requestName = FString(source.requestName.c_str());
        target.name = FString(source.name.c_str());
        target.description = FString(source.description.c_str());
        target.setBy = FString(source.setBy.c_str());
        for (const auto& source_linkedVirtualItems_item : source.linkedVirtualItems) {
            FString b_source_linkedVirtualItems_item;
            b_source_linkedVirtualItems_item = FString(source_linkedVirtualItems_item.c_str());
            target.linkedVirtualItems.Add(b_source_linkedVirtualItems_item);
        }
        target.createdAt = source.createdAt;
        target.updatedAt = source.updatedAt;
        target.createdBy = FString(source.createdBy.c_str());
        target.updatedBy = FString(source.updatedBy.c_str());
		FBP_BaseRequestData::ConvertToUnrealModel(source, target);
	}

	static void ConvertToCoreModel(const FBP_GamePassData& source, RGN::Modules::GamePass::GamePassData& target) {
        target.id = string(TCHAR_TO_UTF8(*source.id));
        for (const auto& source_appIds_item : source.appIds) {
            string cpp_source_appIds_item;
            cpp_source_appIds_item = string(TCHAR_TO_UTF8(*source_appIds_item));
            target.appIds.push_back(cpp_source_appIds_item);
        }
        target.requestName = string(TCHAR_TO_UTF8(*source.requestName));
        target.name = string(TCHAR_TO_UTF8(*source.name));
        target.description = string(TCHAR_TO_UTF8(*source.description));
        target.setBy = string(TCHAR_TO_UTF8(*source.setBy));
        for (const auto& source_linkedVirtualItems_item : source.linkedVirtualItems) {
            string cpp_source_linkedVirtualItems_item;
            cpp_source_linkedVirtualItems_item = string(TCHAR_TO_UTF8(*source_linkedVirtualItems_item));
            target.linkedVirtualItems.push_back(cpp_source_linkedVirtualItems_item);
        }
        target.createdAt = source.createdAt;
        target.updatedAt = source.updatedAt;
        target.createdBy = string(TCHAR_TO_UTF8(*source.createdBy));
        target.updatedBy = string(TCHAR_TO_UTF8(*source.updatedBy));
		FBP_BaseRequestData::ConvertToCoreModel(source, target);
	}
};
