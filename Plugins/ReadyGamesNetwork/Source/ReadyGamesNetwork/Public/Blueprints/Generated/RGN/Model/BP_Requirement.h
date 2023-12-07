#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../Generated/RGN/Model/Requirement.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_Requirement.generated.h"

/**
 * A class that represents a leaderboard join or store offer purchase requirement on Ready Games Network.
 */
USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_Requirement {
    GENERATED_BODY()

    /**
     * Specifies the type of the join requirement
     * Right now 5 types are implemented:
     * - `gamepass` - the user needs to have a gamepass with a specific id to join the leaderboard.
     * - `item_by_id` - the user needs to have a virtual item with a specific id to join the leaderboard.
     * - `item_by_tag` - the user needs to have a virtual item with a specific tag to join the leaderboard.
     * - `achievement_by_id` - the user needs to complete an achievement to join the leaderboard.
     * - `achievement_by_requestName` - the user needs to complete an achievement with a specific request name to
     * join the leaderboard.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Requirement")
    FString type;
    /**
     * The id of the entity to check in user data. For example, if the type is `gamepass`, the id is the id of the
     * gamepass.If the type is `item_by_tag`, the id is the tag of the virtual item.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Requirement")
    FString id;

	static void ConvertToUnrealModel(const RGN::Model::Requirement& source, FBP_Requirement& target) {
        target.type = FString(source.type.c_str());
        target.id = FString(source.id.c_str());
	}

	static void ConvertToCoreModel(const FBP_Requirement& source, RGN::Model::Requirement& target) {
        target.type = string(TCHAR_TO_UTF8(*source.type));
        target.id = string(TCHAR_TO_UTF8(*source.id));
	}
};
