#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/GamePass/GamePassUserData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_GamePassUserData.generated.h"

/**
 * Represents a Game Pass in the Ready Games Network (RGN) with its associated properties.
 */
USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_GamePassUserData {
    GENERATED_BODY()

    /**
     * Unique identifier of the Game Pass user id.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | GamePass")
    FString id;
    /**
     * Unique identifier of the Game Pass.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | GamePass")
    FString gamePassId;
    /**
     * How many game passes the user have in inventory
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | GamePass")
    int32 quantity;
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
     * Identifier of the user who created the Game Pass. User Id. Populated by the backend.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | GamePass")
    FString createdBy;
    /**
     * Identifier of the user who last updated the Game Pass. User Id. Populated by the backend.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | GamePass")
    FString updatedBy;

	static void ConvertToUnrealModel(const RGN::Modules::GamePass::GamePassUserData& source, FBP_GamePassUserData& target) {
        target.id = FString(UTF8_TO_TCHAR(source.id.c_str()));
        target.gamePassId = FString(UTF8_TO_TCHAR(source.gamePassId.c_str()));
        target.quantity = source.quantity;
        target.createdAt = source.createdAt;
        target.updatedAt = source.updatedAt;
        target.createdBy = FString(UTF8_TO_TCHAR(source.createdBy.c_str()));
        target.updatedBy = FString(UTF8_TO_TCHAR(source.updatedBy.c_str()));
	}

	static void ConvertToCoreModel(const FBP_GamePassUserData& source, RGN::Modules::GamePass::GamePassUserData& target) {
        target.id = string(TCHAR_TO_UTF8(*source.id));
        target.gamePassId = string(TCHAR_TO_UTF8(*source.gamePassId));
        target.quantity = source.quantity;
        target.createdAt = source.createdAt;
        target.updatedAt = source.updatedAt;
        target.createdBy = string(TCHAR_TO_UTF8(*source.createdBy));
        target.updatedBy = string(TCHAR_TO_UTF8(*source.updatedBy));
	}
};
