#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "../../../../Core/BP_CancellationToken.h"
#include "../../../../../Core/CancellationToken.h"
#include "../../../../../Generated/RGN/Modules/Matchmaking/MatchmakingModule.h"
#include "../../../../../Generated/RGN/Modules/Matchmaking/GetMatchesResponseData.h"
#include "BP_GetMatchesResponseData.h"
#include "../../../../../Generated/RGN/Modules/Matchmaking/GetMatchResponseData.h"
#include "BP_GetMatchResponseData.h"
#include "../../../../../Generated/RGN/Modules/Matchmaking/MatchmakingData.h"
#include "BP_MatchmakingData.h"
#include "../../../../../Generated/RGN/Modules/Matchmaking/StartMatchResponseData.h"
#include "BP_StartMatchResponseData.h"
#include <vector>
#include <unordered_map>
#include <string>
#include <functional>
#include "BP_MatchmakingModule.generated.h"

using namespace std;

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
            int32_t cpp_limit;
            string cpp_startAfter;
            CancellationToken cpp_cancellationToken;
			cpp_limit = limit;
			cpp_startAfter = string(TCHAR_TO_UTF8(*startAfter));
			FBP_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Matchmaking")
    static void GetVoteOpenMatchesAsync(
        int32 limit,
        const FString& startAfter,
        const FBP_CancellationToken& cancellationToken,
        FMatchmakingModuleGetVoteOpenMatchesAsyncResponse onSuccess, FMatchmakingModuleFailResponse onFail) {
            int32_t cpp_limit;
            string cpp_startAfter;
            CancellationToken cpp_cancellationToken;
			cpp_limit = limit;
			cpp_startAfter = string(TCHAR_TO_UTF8(*startAfter));
			FBP_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Matchmaking")
    static void GetFinishedMatchesAsync(
        int32 limit,
        const FString& startAfter,
        const FBP_CancellationToken& cancellationToken,
        FMatchmakingModuleGetFinishedMatchesAsyncResponse onSuccess, FMatchmakingModuleFailResponse onFail) {
            int32_t cpp_limit;
            string cpp_startAfter;
            CancellationToken cpp_cancellationToken;
			cpp_limit = limit;
			cpp_startAfter = string(TCHAR_TO_UTF8(*startAfter));
			FBP_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Matchmaking")
    static void GetFinishedMatchByIdAsync(
        const FString& matchId,
        const FBP_CancellationToken& cancellationToken,
        FMatchmakingModuleGetFinishedMatchByIdAsyncResponse onSuccess, FMatchmakingModuleFailResponse onFail) {
            string cpp_matchId;
            CancellationToken cpp_cancellationToken;
			cpp_matchId = string(TCHAR_TO_UTF8(*matchId));
			FBP_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Matchmaking")
    static void CreateMatchAsync(
        const FBP_MatchmakingData& matchConfig,
        bool participateInOnCreate,
        const TMap<FString, FString>& participatePayload,
        const FBP_CancellationToken& cancellationToken,
        FMatchmakingModuleCreateMatchAsyncResponse onSuccess, FMatchmakingModuleFailResponse onFail) {
            RGN::Modules::Matchmaking::MatchmakingData cpp_matchConfig;
            bool cpp_participateInOnCreate;
            std::unordered_map<string, string> cpp_participatePayload;
            CancellationToken cpp_cancellationToken;
			FBP_MatchmakingData::ConvertToCoreModel(matchConfig, cpp_matchConfig);
			cpp_participateInOnCreate = participateInOnCreate;
			for (const auto& [participatePayload_key, participatePayload_value] : participatePayload) {
				string cpp_participatePayload_key;
				cpp_participatePayload_key = string(TCHAR_TO_UTF8(*participatePayload_key));
				string cpp_participatePayload_value;
				cpp_participatePayload_value = string(TCHAR_TO_UTF8(*participatePayload_value));
				cpp_participatePayload.insert({cpp_participatePayload_key, cpp_participatePayload_value});
			}
			FBP_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Matchmaking")
    static void ParticipateInMatchAsync(
        const FString& matchId,
        const TMap<FString, FString>& participantPayload,
        const FBP_CancellationToken& cancellationToken,
        FMatchmakingModuleParticipateInMatchAsyncResponse onSuccess, FMatchmakingModuleFailResponse onFail) {
            string cpp_matchId;
            std::unordered_map<string, string> cpp_participantPayload;
            CancellationToken cpp_cancellationToken;
			cpp_matchId = string(TCHAR_TO_UTF8(*matchId));
			for (const auto& [participantPayload_key, participantPayload_value] : participantPayload) {
				string cpp_participantPayload_key;
				cpp_participantPayload_key = string(TCHAR_TO_UTF8(*participantPayload_key));
				string cpp_participantPayload_value;
				cpp_participantPayload_value = string(TCHAR_TO_UTF8(*participantPayload_value));
				cpp_participantPayload.insert({cpp_participantPayload_key, cpp_participantPayload_value});
			}
			FBP_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Matchmaking")
    static void StartMatchAsync(
        const FString& matchId,
        const FBP_CancellationToken& cancellationToken,
        FMatchmakingModuleStartMatchAsyncResponse onSuccess, FMatchmakingModuleFailResponse onFail) {
            string cpp_matchId;
            CancellationToken cpp_cancellationToken;
			cpp_matchId = string(TCHAR_TO_UTF8(*matchId));
			FBP_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Matchmaking")
    static void VoteForMatchAsync(
        const FString& matchId,
        const FString& participantId,
        const FBP_CancellationToken& cancellationToken,
        FMatchmakingModuleVoteForMatchAsyncResponse onSuccess, FMatchmakingModuleFailResponse onFail) {
            string cpp_matchId;
            string cpp_participantId;
            CancellationToken cpp_cancellationToken;
			cpp_matchId = string(TCHAR_TO_UTF8(*matchId));
			cpp_participantId = string(TCHAR_TO_UTF8(*participantId));
			FBP_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Matchmaking")
    static void SubmitMatchScoreAsync(
        const FString& matchId,
        int64 score,
        const FBP_CancellationToken& cancellationToken,
        FMatchmakingModuleSubmitMatchScoreAsyncResponse onSuccess, FMatchmakingModuleFailResponse onFail) {
            string cpp_matchId;
            int64_t cpp_score;
            CancellationToken cpp_cancellationToken;
			cpp_matchId = string(TCHAR_TO_UTF8(*matchId));
			cpp_score = score;
			FBP_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Matchmaking")
    static void FinishMatchAsync(
        const FString& matchId,
        const FBP_CancellationToken& cancellationToken,
        FMatchmakingModuleFinishMatchAsyncResponse onSuccess, FMatchmakingModuleFailResponse onFail) {
            string cpp_matchId;
            CancellationToken cpp_cancellationToken;
			cpp_matchId = string(TCHAR_TO_UTF8(*matchId));
			FBP_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            // TODO
    }
};
