#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "../../../../Core/BP_CancellationToken.h"
#include "../../../../../Core/CancellationToken.h"
#include "../../../../../Generated/RGN/Modules/Matchmaking/MatchmakingModule.h"
#include "../../../../../Generated/RGN/Modules/Matchmaking/GetMatchesResponseData.h"
#include "BP_GetMatchesResponseData.h"
#include "../../../../../Generated/RGN/Modules/Matchmaking/MatchmakingData.h"
#include "BP_MatchmakingData.h"
#include "../../../../../Generated/RGN/Modules/Matchmaking/GetMatchResponseData.h"
#include "BP_GetMatchResponseData.h"
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
    /**
     * Asynchronously gets a list of open matches that the user can join
     * @param limit - An integer indicating the maximum number of matches to retrieve.
     * @param startAfter - An optional parameter representing a match id after which to
     * start retrieving the matches. The default is an empty string.
     * @param cancellationToken - Cancellation token to cancel the async operation. Optional
     * @return A Task that represents the asynchronous operation.
     * The Task result contains a list of objects, which are the open to join matches.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Matchmaking", meta=(AutoCreateRefTerm="startAfter, cancellationToken"))
    static void GetJoinOpenMatchesAsync(
        FMatchmakingModuleGetJoinOpenMatchesAsyncResponse onSuccess,
        FMatchmakingModuleFailResponse onFail,
        int32 limit,
        const FString& startAfter,
        const FBP_CancellationToken& cancellationToken) {
            int32_t cpp_limit;
            string cpp_startAfter;
            CancellationToken cpp_cancellationToken;
            cpp_limit = limit;
            cpp_startAfter = string(TCHAR_TO_UTF8(*startAfter));
            FBP_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Matchmaking::MatchmakingModule::GetJoinOpenMatchesAsync(
                [onSuccess](vector<RGN::Modules::Matchmaking::MatchmakingData> response) {
                    TArray<FBP_MatchmakingData> bpResponse;
                    for (const auto& response_item : response) {
                        FBP_MatchmakingData b_response_item;
                        FBP_MatchmakingData::ConvertToUnrealModel(response_item, b_response_item);
                        bpResponse.Add(b_response_item);
                    }
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_limit,
                cpp_startAfter,
                cpp_cancellationToken);
    }
    /**
     * Asynchronously gets a list of open matches that the user can vote. Some matches can have voting enabled.
     * If the voting is enabled the users can vote for the match participants
     * @param limit - An integer indicating the maximum number of matches to retrieve.
     * @param startAfter - An optional parameter representing a matches id after which to
     * start retrieving the matches. The default is an empty string.
     * @param cancellationToken - Cancellation token to cancel the async operation. Optional
     * @return A Task that represents the asynchronous operation.
     * The Task result contains a list of objects, which are the open to vote matches.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Matchmaking", meta=(AutoCreateRefTerm="startAfter, cancellationToken"))
    static void GetVoteOpenMatchesAsync(
        FMatchmakingModuleGetVoteOpenMatchesAsyncResponse onSuccess,
        FMatchmakingModuleFailResponse onFail,
        int32 limit,
        const FString& startAfter,
        const FBP_CancellationToken& cancellationToken) {
            int32_t cpp_limit;
            string cpp_startAfter;
            CancellationToken cpp_cancellationToken;
            cpp_limit = limit;
            cpp_startAfter = string(TCHAR_TO_UTF8(*startAfter));
            FBP_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Matchmaking::MatchmakingModule::GetVoteOpenMatchesAsync(
                [onSuccess](vector<RGN::Modules::Matchmaking::MatchmakingData> response) {
                    TArray<FBP_MatchmakingData> bpResponse;
                    for (const auto& response_item : response) {
                        FBP_MatchmakingData b_response_item;
                        FBP_MatchmakingData::ConvertToUnrealModel(response_item, b_response_item);
                        bpResponse.Add(b_response_item);
                    }
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_limit,
                cpp_startAfter,
                cpp_cancellationToken);
    }
    /**
     * Asynchronously gets a list of finished matches
     * @param limit - An integer indicating the maximum number of matches to retrieve.
     * @param startAfter - An optional parameter representing a matches id after which to
     * start retrieving the matches. The default is an empty string.
     * @param cancellationToken - Cancellation token to cancel the async operation. Optional
     * @return A Task that represents the asynchronous operation.
     * The Task result contains a list of objects, which are the finished matches for current app.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Matchmaking", meta=(AutoCreateRefTerm="startAfter, cancellationToken"))
    static void GetFinishedMatchesAsync(
        FMatchmakingModuleGetFinishedMatchesAsyncResponse onSuccess,
        FMatchmakingModuleFailResponse onFail,
        int32 limit,
        const FString& startAfter,
        const FBP_CancellationToken& cancellationToken) {
            int32_t cpp_limit;
            string cpp_startAfter;
            CancellationToken cpp_cancellationToken;
            cpp_limit = limit;
            cpp_startAfter = string(TCHAR_TO_UTF8(*startAfter));
            FBP_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Matchmaking::MatchmakingModule::GetFinishedMatchesAsync(
                [onSuccess](vector<RGN::Modules::Matchmaking::MatchmakingData> response) {
                    TArray<FBP_MatchmakingData> bpResponse;
                    for (const auto& response_item : response) {
                        FBP_MatchmakingData b_response_item;
                        FBP_MatchmakingData::ConvertToUnrealModel(response_item, b_response_item);
                        bpResponse.Add(b_response_item);
                    }
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_limit,
                cpp_startAfter,
                cpp_cancellationToken);
    }
    /**
     * Asynchronously finished match by provided id. In case the match does not exist, or is from
     * another app throws an Exception.
     * @param matchId - The match ID that is already finished.
     * @param cancellationToken - Cancellation token to cancel the async operation. Optional
     * @return A Task that represents the asynchronous operation.
     * The Task result contains the finished match data
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Matchmaking", meta=(AutoCreateRefTerm="cancellationToken"))
    static void GetFinishedMatchByIdAsync(
        FMatchmakingModuleGetFinishedMatchByIdAsyncResponse onSuccess,
        FMatchmakingModuleFailResponse onFail,
        const FString& matchId,
        const FBP_CancellationToken& cancellationToken) {
            string cpp_matchId;
            CancellationToken cpp_cancellationToken;
            cpp_matchId = string(TCHAR_TO_UTF8(*matchId));
            FBP_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Matchmaking::MatchmakingModule::GetFinishedMatchByIdAsync(
                [onSuccess](RGN::Modules::Matchmaking::MatchmakingData response) {
                    FBP_MatchmakingData bpResponse;
                    FBP_MatchmakingData::ConvertToUnrealModel(response, bpResponse);
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_matchId,
                cpp_cancellationToken);
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Matchmaking", meta=(AutoCreateRefTerm="participateInOnCreate, participatePayload, cancellationToken"))
    static void CreateMatchAsync(
        FMatchmakingModuleCreateMatchAsyncResponse onSuccess,
        FMatchmakingModuleFailResponse onFail,
        const FBP_MatchmakingData& matchConfig,
        bool participateInOnCreate,
        const TMap<FString, FString>& participatePayload,
        const FBP_CancellationToken& cancellationToken) {
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
            RGN::Modules::Matchmaking::MatchmakingModule::CreateMatchAsync(
                [onSuccess](RGN::Modules::Matchmaking::MatchmakingData response) {
                    FBP_MatchmakingData bpResponse;
                    FBP_MatchmakingData::ConvertToUnrealModel(response, bpResponse);
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_matchConfig,
                cpp_participateInOnCreate,
                cpp_participatePayload,
                cpp_cancellationToken);
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Matchmaking", meta=(AutoCreateRefTerm="participantPayload, cancellationToken"))
    static void ParticipateInMatchAsync(
        FMatchmakingModuleParticipateInMatchAsyncResponse onSuccess,
        FMatchmakingModuleFailResponse onFail,
        const FString& matchId,
        const TMap<FString, FString>& participantPayload,
        const FBP_CancellationToken& cancellationToken) {
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
            RGN::Modules::Matchmaking::MatchmakingModule::ParticipateInMatchAsync(
                [onSuccess](string response) {
                    FString bpResponse;
                    bpResponse = FString(response.c_str());
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_matchId,
                cpp_participantPayload,
                cpp_cancellationToken);
    }
    /**
     * Asynchronously starts a matchmaking match identified by the provided match ID.
     * @param matchId - The ID of the match to start.
     * @param cancellationToken - Optional parameter to enable cancellation of the task.
     * Default value is an unset CancellationToken.
     * @return A task that represents the asynchronous operation.
     * The task result is the ID of the match that has been started.
     * @throw: Thrown when matchId is null or empty.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Matchmaking", meta=(AutoCreateRefTerm="cancellationToken"))
    static void StartMatchAsync(
        FMatchmakingModuleStartMatchAsyncResponse onSuccess,
        FMatchmakingModuleFailResponse onFail,
        const FString& matchId,
        const FBP_CancellationToken& cancellationToken) {
            string cpp_matchId;
            CancellationToken cpp_cancellationToken;
            cpp_matchId = string(TCHAR_TO_UTF8(*matchId));
            FBP_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Matchmaking::MatchmakingModule::StartMatchAsync(
                [onSuccess](string response) {
                    FString bpResponse;
                    bpResponse = FString(response.c_str());
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_matchId,
                cpp_cancellationToken);
    }
    /**
     * Asynchronously votes for a matchmaking match identified by the provided match ID and participant ID.
     * @param matchId - The ID of the match to vote for.
     * @param participantId - The ID of the participant casting the vote.
     * @param cancellationToken - Optional parameter to enable cancellation of the task.
     * Default value is an unset CancellationToken.
     * @return A task that represents the asynchronous operation.
     * The task result is the ID of the match for which the vote has been cast.
     * @throw: Thrown when matchId or participantId is null or empty.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Matchmaking", meta=(AutoCreateRefTerm="cancellationToken"))
    static void VoteForMatchAsync(
        FMatchmakingModuleVoteForMatchAsyncResponse onSuccess,
        FMatchmakingModuleFailResponse onFail,
        const FString& matchId,
        const FString& participantId,
        const FBP_CancellationToken& cancellationToken) {
            string cpp_matchId;
            string cpp_participantId;
            CancellationToken cpp_cancellationToken;
            cpp_matchId = string(TCHAR_TO_UTF8(*matchId));
            cpp_participantId = string(TCHAR_TO_UTF8(*participantId));
            FBP_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Matchmaking::MatchmakingModule::VoteForMatchAsync(
                [onSuccess](string response) {
                    FString bpResponse;
                    bpResponse = FString(response.c_str());
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_matchId,
                cpp_participantId,
                cpp_cancellationToken);
    }
    /**
     * Asynchronously submits the score for a matchmaking match identified by the provided match ID.
     * @param matchId - The ID of the match for which the score is being submitted.
     * @param score - The score to be submitted for the match.
     * @param cancellationToken - Optional parameter to enable cancellation of the task.
     * Default value is an unset CancellationToken.
     * @return A task that represents the asynchronous operation.
     * The task result is the ID of the match for which the score has been submitted.
     * @throw: Thrown when matchId is null or empty.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Matchmaking", meta=(AutoCreateRefTerm="cancellationToken"))
    static void SubmitMatchScoreAsync(
        FMatchmakingModuleSubmitMatchScoreAsyncResponse onSuccess,
        FMatchmakingModuleFailResponse onFail,
        const FString& matchId,
        int64 score,
        const FBP_CancellationToken& cancellationToken) {
            string cpp_matchId;
            int64_t cpp_score;
            CancellationToken cpp_cancellationToken;
            cpp_matchId = string(TCHAR_TO_UTF8(*matchId));
            cpp_score = score;
            FBP_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Matchmaking::MatchmakingModule::SubmitMatchScoreAsync(
                [onSuccess](string response) {
                    FString bpResponse;
                    bpResponse = FString(response.c_str());
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_matchId,
                cpp_score,
                cpp_cancellationToken);
    }
    /**
     * Asynchronously finishes a matchmaking match identified by the provided match ID.
     * @param matchId - The ID of the match to finish.
     * @param cancellationToken - Optional parameter to enable cancellation of the task.
     * Default value is an unset CancellationToken.
     * @return A task that represents the asynchronous operation.
     * The task result is the ID of the match that has been finished.
     * @throw: Thrown when matchId is null or empty.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Matchmaking", meta=(AutoCreateRefTerm="cancellationToken"))
    static void FinishMatchAsync(
        FMatchmakingModuleFinishMatchAsyncResponse onSuccess,
        FMatchmakingModuleFailResponse onFail,
        const FString& matchId,
        const FBP_CancellationToken& cancellationToken) {
            string cpp_matchId;
            CancellationToken cpp_cancellationToken;
            cpp_matchId = string(TCHAR_TO_UTF8(*matchId));
            FBP_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Matchmaking::MatchmakingModule::FinishMatchAsync(
                [onSuccess](string response) {
                    FString bpResponse;
                    bpResponse = FString(response.c_str());
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_matchId,
                cpp_cancellationToken);
    }
};
