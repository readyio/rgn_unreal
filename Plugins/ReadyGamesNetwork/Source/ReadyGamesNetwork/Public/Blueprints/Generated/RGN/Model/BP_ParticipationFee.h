#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../Generated/RGN/Model/ParticipationFee.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_ParticipationFee.generated.h"

/**
 * A class that represents a participation fee on Ready Games Network.
 */
USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_ParticipationFee {
    GENERATED_BODY()

    /**
     * Specifies the type of the fee.
     * Specifies the type of the participation fee.
     * Available types are:
     * - `currency` - the user needs to pay a specific amount of currency to join a leaderboard.
     * - `gamepass_by_id` - the user needs to have a gamepass with a specific id to join a leaderboard.
     * - `gamepass_by_request_name` - the user needs to have a gamepass with a specific request name to join a
     * leaderboard.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | ParticipationFee")
    FString type;
    /**
     * The id of the entity to check in user data. For example, if the type is `gamepass_by_id`, the id is the id of the
     * gamepass.If the type is `gamepass_by_request_name`, the id is the request name of the gamepass.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | ParticipationFee")
    FString id;
    /**
     * The quantity of the entity to check in user data. For example, if the type is `currency`, the quantity is the
     * amount of currency.If the type is `gamepass_by_id`, the quantity is the quantity of the game passes the user
     * needs to have.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | ParticipationFee")
    int32 quantity;

	static void ConvertToUnrealModel(const RGN::Model::ParticipationFee& source, FBP_ParticipationFee& target) {
        target.type = FString(source.type.c_str());
        target.id = FString(source.id.c_str());
        target.quantity = source.quantity;
	}

	static void ConvertToCoreModel(const FBP_ParticipationFee& source, RGN::Model::ParticipationFee& target) {
        target.type = string(TCHAR_TO_UTF8(*source.type));
        target.id = string(TCHAR_TO_UTF8(*source.id));
        target.quantity = source.quantity;
	}
};
