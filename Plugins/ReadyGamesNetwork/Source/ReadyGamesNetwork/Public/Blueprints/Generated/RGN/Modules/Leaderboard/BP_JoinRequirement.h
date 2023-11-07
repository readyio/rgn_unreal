#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Leaderboard/JoinRequirement.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_JoinRequirement.generated.h"

/**
 * A class that represents a leaderboard join requirement on Ready Games Network.
 */
USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_JoinRequirement {
    GENERATED_BODY()

    /**
     * Specifies the type of the join requirement
     * Right now two types are implemented: "gamepass" and "inventory"
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Leaderboard")
    FString type;
    /**
     * The id of the entity to check if it exists in user data
     * In case the type is "gamepass" the id is the gamepass id to check if the user has it.
     * In case the type is "invenotory", then it is the id of the virtual item the user needs to buy
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Leaderboard")
    FString id;

	static void ConvertToUnrealModel(const RGN::Modules::Leaderboard::JoinRequirement& source, FBP_JoinRequirement& target) {
        target.type = FString(source.type.c_str());
        target.id = FString(source.id.c_str());
	}

	static void ConvertToCoreModel(const FBP_JoinRequirement& source, RGN::Modules::Leaderboard::JoinRequirement& target) {
        target.type = string(TCHAR_TO_UTF8(*source.type));
        target.id = string(TCHAR_TO_UTF8(*source.id));
	}
};
