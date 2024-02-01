#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Matchmaking/MatchmakingData.h"
#include "../../../../../Generated/RGN/Modules/Matchmaking/Vote.h"
#include "BP_Vote.h"
#include "../../../../../Generated/RGN/Model/ParticipationFee.h"
#include "../../Model/BP_ParticipationFee.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_MatchmakingData.generated.h"

/**
 * Encapsulates all data necessary to create, manage and finalize a matchmaking process in the Ready Games Network (RGN).
 * This data includes match configuration, participant data, voting data, and match lifecycle timestamps.
 */
USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_MatchmakingData {
    GENERATED_BODY()

    /**
     * Unique identifier of the matchmaking process.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Matchmaking")
    FString id;
    /**
     * Identifier of the application where the matchmaking process is running.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Matchmaking")
    FString appId;
    /**
     * Specifies the type of the match. Currently, only "default" is supported.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Matchmaking")
    FString type;
    /**
     * Defines how the match is finished.
     * It can be "manual" (requires calling M:RGN.Modules.Matchmaking.MatchmakingModule.FinishMatchAsync(System.String,System.Threading.CancellationToken) method), 
     * "scoreSubmitBased" (automatically finishes once all participants submit their scores by using - this is default value
     * M:RGN.Modules.Matchmaking.MatchmakingModule.SubmitMatchScoreAsync(System.String,System.Int64,System.Threading.CancellationToken) method),
     * or "timeBased" (automatically finishes based on time condition).
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Matchmaking")
    FString finishType;
    /**
     * Defines how the match is started.
     * It can be "manual" (needs to be started by calling M:RGN.Modules.Matchmaking.MatchmakingModule.StartMatchAsync(System.String,System.Threading.CancellationToken) method), 
     * "matchFillBased" (automatically starts once all participant slots are filled) - this is default value,
     * or "timeBased" (automatically starts based on time condition).
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Matchmaking")
    FString startType;
    /**
     * Specifies the maximum number of users that can participate in the matchmaking process. Default is 2.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Matchmaking")
    int32 maxUsers;
    /**
     * Indicates whether the matchmaking process has been started.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Matchmaking")
    bool isStarted;
    /**
     * Determines whether voting is enabled during the matchmaking process.
     * Default is false
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Matchmaking")
    bool votingEnabled;
    /**
     * Specifies whether a user can vote only once during the matchmaking process.
     * Default is true
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Matchmaking")
    bool oncePerUserVoting;
    /**
     * The identifier of the user who initiated the matchmaking process.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Matchmaking")
    FString createdBy;
    /**
     * The identifier of the user who updated the matchmaking process data.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Matchmaking")
    FString updatedBy;
    /**
     * The timestamp representing when the match was created.
     * in milliseconds since midnight, January 1, 1970 UTC.
     * Refer to T:RGN.Utility.DateTimeUtility for helper methods.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Matchmaking")
    int64 createdAt;
    /**
     * The timestamp representing when the matchmaking data was last updated.
     * in milliseconds since midnight, January 1, 1970 UTC.
     * Refer to T:RGN.Utility.DateTimeUtility for helper methods.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Matchmaking")
    int64 updatedAt;
    /**
     * A list of identifiers of users who are participating in the matchmaking process.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Matchmaking")
    TArray<FString> participants;
    /**
     * A list of votes cast during the matchmaking process.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Matchmaking")
    TArray<FBP_Vote> votes;
    /**
     * A dictionary mapping the participant identifiers to their respective scores in the matchmaking process.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Matchmaking")
    TMap<FString, int64> participantsScore;
    /**
     * A dictionary mapping the participant identifiers to their respective optional payload data in the matchmaking process.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Matchmaking")
    TMap<FString, FString> participantsPayload;
    /**
     * A list of participation fees for the matchmaking process.
     * The fees are deducted when the user joins the match(ParticipateInMatch).
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Matchmaking")
    TArray<FBP_ParticipationFee> participationFees;

	static void ConvertToUnrealModel(const RGN::Modules::Matchmaking::MatchmakingData& source, FBP_MatchmakingData& target) {
        target.id = FString(source.id.c_str());
        target.appId = FString(source.appId.c_str());
        target.type = FString(source.type.c_str());
        target.finishType = FString(source.finishType.c_str());
        target.startType = FString(source.startType.c_str());
        target.maxUsers = source.maxUsers;
        target.isStarted = source.isStarted;
        target.votingEnabled = source.votingEnabled;
        target.oncePerUserVoting = source.oncePerUserVoting;
        target.createdBy = FString(source.createdBy.c_str());
        target.updatedBy = FString(source.updatedBy.c_str());
        target.createdAt = source.createdAt;
        target.updatedAt = source.updatedAt;
        for (const auto& source_participants_item : source.participants) {
            FString b_source_participants_item;
            b_source_participants_item = FString(source_participants_item.c_str());
            target.participants.Add(b_source_participants_item);
        }
        for (const auto& source_votes_item : source.votes) {
            FBP_Vote b_source_votes_item;
            FBP_Vote::ConvertToUnrealModel(source_votes_item, b_source_votes_item);
            target.votes.Add(b_source_votes_item);
        }
        for (const auto& [source_participantsScore_key, source_participantsScore_value] : source.participantsScore) {
            FString b_source_participantsScore_key;
            b_source_participantsScore_key = FString(source_participantsScore_key.c_str());
            int64 b_source_participantsScore_value;
            b_source_participantsScore_value = source_participantsScore_value;
            target.participantsScore.Add(b_source_participantsScore_key, b_source_participantsScore_value);
        }
        for (const auto& [source_participantsPayload_key, source_participantsPayload_value] : source.participantsPayload) {
            FString b_source_participantsPayload_key;
            b_source_participantsPayload_key = FString(source_participantsPayload_key.c_str());
            FString b_source_participantsPayload_value;
            b_source_participantsPayload_value = FString(source_participantsPayload_value.c_str());
            target.participantsPayload.Add(b_source_participantsPayload_key, b_source_participantsPayload_value);
        }
        for (const auto& source_participationFees_item : source.participationFees) {
            FBP_ParticipationFee b_source_participationFees_item;
            FBP_ParticipationFee::ConvertToUnrealModel(source_participationFees_item, b_source_participationFees_item);
            target.participationFees.Add(b_source_participationFees_item);
        }
	}

	static void ConvertToCoreModel(const FBP_MatchmakingData& source, RGN::Modules::Matchmaking::MatchmakingData& target) {
        target.id = string(TCHAR_TO_UTF8(*source.id));
        target.appId = string(TCHAR_TO_UTF8(*source.appId));
        target.type = string(TCHAR_TO_UTF8(*source.type));
        target.finishType = string(TCHAR_TO_UTF8(*source.finishType));
        target.startType = string(TCHAR_TO_UTF8(*source.startType));
        target.maxUsers = source.maxUsers;
        target.isStarted = source.isStarted;
        target.votingEnabled = source.votingEnabled;
        target.oncePerUserVoting = source.oncePerUserVoting;
        target.createdBy = string(TCHAR_TO_UTF8(*source.createdBy));
        target.updatedBy = string(TCHAR_TO_UTF8(*source.updatedBy));
        target.createdAt = source.createdAt;
        target.updatedAt = source.updatedAt;
        for (const auto& source_participants_item : source.participants) {
            string cpp_source_participants_item;
            cpp_source_participants_item = string(TCHAR_TO_UTF8(*source_participants_item));
            target.participants.push_back(cpp_source_participants_item);
        }
        for (const auto& source_votes_item : source.votes) {
            RGN::Modules::Matchmaking::Vote cpp_source_votes_item;
            FBP_Vote::ConvertToCoreModel(source_votes_item, cpp_source_votes_item);
            target.votes.push_back(cpp_source_votes_item);
        }
        for (const auto& [source_participantsScore_key, source_participantsScore_value] : source.participantsScore) {
            string cpp_source_participantsScore_key;
            cpp_source_participantsScore_key = string(TCHAR_TO_UTF8(*source_participantsScore_key));
            int64_t cpp_source_participantsScore_value;
            cpp_source_participantsScore_value = source_participantsScore_value;
            target.participantsScore.insert({cpp_source_participantsScore_key, cpp_source_participantsScore_value});
        }
        for (const auto& [source_participantsPayload_key, source_participantsPayload_value] : source.participantsPayload) {
            string cpp_source_participantsPayload_key;
            cpp_source_participantsPayload_key = string(TCHAR_TO_UTF8(*source_participantsPayload_key));
            string cpp_source_participantsPayload_value;
            cpp_source_participantsPayload_value = string(TCHAR_TO_UTF8(*source_participantsPayload_value));
            target.participantsPayload.insert({cpp_source_participantsPayload_key, cpp_source_participantsPayload_value});
        }
        for (const auto& source_participationFees_item : source.participationFees) {
            RGN::Model::ParticipationFee cpp_source_participationFees_item;
            FBP_ParticipationFee::ConvertToCoreModel(source_participationFees_item, cpp_source_participationFees_item);
            target.participationFees.push_back(cpp_source_participationFees_item);
        }
	}
};
