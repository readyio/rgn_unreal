#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_Vote.h"
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
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Matchmaking")
    FString id;
    /**
     * Identifier of the application where the matchmaking process is running.
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Matchmaking")
    FString appId;
    /**
     * Specifies the type of the match. Currently, only "default" is supported.
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Matchmaking")
    FString type;
    /**
     * Defines how the match is finished.
     * It can be "manual" (requires calling M:RGN.Modules.Matchmaking.MatchmakingModule.FinishMatchAsync(System.String,System.Threading.CancellationToken) method), 
     * "scoreSubmitBased" (automatically finishes once all participants submit their scores by using - this is default value
     * M:RGN.Modules.Matchmaking.MatchmakingModule.SubmitMatchScoreAsync(System.String,System.Int64,System.Threading.CancellationToken) method),
     * or "timeBased" (automatically finishes based on time condition).
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Matchmaking")
    FString finishType;
    /**
     * Defines how the match is started.
     * It can be "manual" (needs to be started by calling M:RGN.Modules.Matchmaking.MatchmakingModule.StartMatchAsync(System.String,System.Threading.CancellationToken) method), 
     * "matchFillBased" (automatically starts once all participant slots are filled) - this is default value,
     * or "timeBased" (automatically starts based on time condition).
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Matchmaking")
    FString startType;
    /**
     * Specifies the maximum number of users that can participate in the matchmaking process. Default is 2.
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Matchmaking")
    int32 maxUsers;
    /**
     * Indicates whether the matchmaking process has been started.
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Matchmaking")
    bool isStarted;
    /**
     * Determines whether voting is enabled during the matchmaking process.
     * Default is false
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Matchmaking")
    bool votingEnabled;
    /**
     * Specifies whether a user can vote only once during the matchmaking process.
     * Default is true
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Matchmaking")
    bool oncePerUserVoting;
    /**
     * The identifier of the user who initiated the matchmaking process.
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Matchmaking")
    FString createdBy;
    /**
     * The identifier of the user who updated the matchmaking process data.
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Matchmaking")
    FString updatedBy;
    /**
     * The timestamp representing when the match was created.
     * in milliseconds since midnight, January 1, 1970 UTC.
     * Refer to T:RGN.Utility.DateTimeUtility for helper methods.
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Matchmaking")
    int64 createdAt;
    /**
     * The timestamp representing when the matchmaking data was last updated.
     * in milliseconds since midnight, January 1, 1970 UTC.
     * Refer to T:RGN.Utility.DateTimeUtility for helper methods.
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Matchmaking")
    int64 updatedAt;
    /**
     * A list of identifiers of users who are participating in the matchmaking process.
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Matchmaking")
    TArray<FString> participants;
    /**
     * A list of votes cast during the matchmaking process.
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Matchmaking")
    TArray<FBP_Vote> votes;
    /**
     * A dictionary mapping the participant identifiers to their respective scores in the matchmaking process.
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Matchmaking")
    TMap<FString, int64> participantsScore;
    /**
     * A dictionary mapping the participant identifiers to their respective optional payload data in the matchmaking process.
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Matchmaking")
    TMap<FString, FString> participantsPayload;
};
