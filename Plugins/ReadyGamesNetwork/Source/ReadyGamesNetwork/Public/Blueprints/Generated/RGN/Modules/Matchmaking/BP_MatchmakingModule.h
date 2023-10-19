#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BP_GetMatchesResponseData.h"
#include "BP_MatchmakingData.h"
#include "BP_GetMatchResponseData.h"
#include "BP_StartMatchResponseData.h"
#include "BP_MatchmakingModule.generated.h"

DECLARE_DYNAMIC_DELEGATE_TwoParams(FMatchmakingModuleFailResponse, int32, code, const FString&, message);

DECLARE_DYNAMIC_DELEGATE_OneParam(FMatchmakingModuleGetJoinOpenMatchesAsyncResponse, const TArray<FBP_MatchmakingData>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FMatchmakingModuleGetVoteOpenMatchesAsyncResponse, const TArray<FBP_MatchmakingData>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FMatchmakingModuleGetFinishedMatchesAsyncResponse, const TArray<FBP_MatchmakingData>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FMatchmakingModuleGetFinishedMatchByIdAsyncResponse, const FBP_MatchmakingData&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FMatchmakingModuleCreateMatchAsyncResponse, const FBP_MatchmakingData&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FMatchmakingModuleParticipateInMatchAsyncResponse, const FString&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FMatchmakingModuleStartMatchAsyncResponse, const FString&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FMatchmakingModuleVoteForMatchAsyncResponse, const FString&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FMatchmakingModuleSubmitMatchScoreAsyncResponse, const FString&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FMatchmakingModuleFinishMatchAsyncResponse, const FString&, response);

UCLASS()
class READYGAMESNETWORK_API UBP_MatchmakingModule : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Matchmaking")
    static void GetJoinOpenMatchesAsync(
        int32 limit,
        const FString& startAfter,
        const FBP_CancellationToken& cancellationToken,
        FMatchmakingModuleGetJoinOpenMatchesAsyncResponse onSuccess, FMatchmakingModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Matchmaking")
    static void GetVoteOpenMatchesAsync(
        int32 limit,
        const FString& startAfter,
        const FBP_CancellationToken& cancellationToken,
        FMatchmakingModuleGetVoteOpenMatchesAsyncResponse onSuccess, FMatchmakingModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Matchmaking")
    static void GetFinishedMatchesAsync(
        int32 limit,
        const FString& startAfter,
        const FBP_CancellationToken& cancellationToken,
        FMatchmakingModuleGetFinishedMatchesAsyncResponse onSuccess, FMatchmakingModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Matchmaking")
    static void GetFinishedMatchByIdAsync(
        const FString& matchId,
        const FBP_CancellationToken& cancellationToken,
        FMatchmakingModuleGetFinishedMatchByIdAsyncResponse onSuccess, FMatchmakingModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Matchmaking")
    static void CreateMatchAsync(
        const FBP_MatchmakingData& matchConfig,
        bool participateInOnCreate,
        const TMap<FString, FString>& participatePayload,
        const FBP_CancellationToken& cancellationToken,
        FMatchmakingModuleCreateMatchAsyncResponse onSuccess, FMatchmakingModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Matchmaking")
    static void ParticipateInMatchAsync(
        const FString& matchId,
        const TMap<FString, FString>& participantPayload,
        const FBP_CancellationToken& cancellationToken,
        FMatchmakingModuleParticipateInMatchAsyncResponse onSuccess, FMatchmakingModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Matchmaking")
    static void StartMatchAsync(
        const FString& matchId,
        const FBP_CancellationToken& cancellationToken,
        FMatchmakingModuleStartMatchAsyncResponse onSuccess, FMatchmakingModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Matchmaking")
    static void VoteForMatchAsync(
        const FString& matchId,
        const FString& participantId,
        const FBP_CancellationToken& cancellationToken,
        FMatchmakingModuleVoteForMatchAsyncResponse onSuccess, FMatchmakingModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Matchmaking")
    static void SubmitMatchScoreAsync(
        const FString& matchId,
        int64 score,
        const FBP_CancellationToken& cancellationToken,
        FMatchmakingModuleSubmitMatchScoreAsyncResponse onSuccess, FMatchmakingModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Matchmaking")
    static void FinishMatchAsync(
        const FString& matchId,
        const FBP_CancellationToken& cancellationToken,
        FMatchmakingModuleFinishMatchAsyncResponse onSuccess, FMatchmakingModuleFailResponse onFail) {
             // TODO
    }
};
