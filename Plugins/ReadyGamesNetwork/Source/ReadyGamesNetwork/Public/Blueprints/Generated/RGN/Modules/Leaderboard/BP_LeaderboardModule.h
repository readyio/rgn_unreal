#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "../../../../../Generated/RGN/Modules/Leaderboard/LeaderboardModule.h"
#include "../../../../../Generated/RGN/Modules/Leaderboard/LeaderboardData.h"
#include "BP_LeaderboardData.h"
#include "../../../../../Generated/RGN/Modules/Leaderboard/GetLeaderboardsResponse.h"
#include "BP_GetLeaderboardsResponse.h"
#include "../../../../../Generated/RGN/Modules/Leaderboard/GetLeaderboardIdsResponseData.h"
#include "BP_GetLeaderboardIdsResponseData.h"
#include "../../../../../Generated/RGN/Modules/Leaderboard/SetScoreResponseData.h"
#include "BP_SetScoreResponseData.h"
#include "../../../../../Generated/RGN/Modules/Leaderboard/LeaderboardEntry.h"
#include "BP_LeaderboardEntry.h"
#include "../../../../../Generated/RGN/Modules/Leaderboard/GetLeaderboardEntriesResponseData.h"
#include "BP_GetLeaderboardEntriesResponseData.h"
#include <vector>
#include <unordered_map>
#include <string>
#include <functional>
#include "BP_LeaderboardModule.generated.h"

using namespace std;

DECLARE_DYNAMIC_DELEGATE_TwoParams(FLeaderboardModuleFailResponse, int32, code, const FString&, message);

DECLARE_DYNAMIC_DELEGATE_OneParam(FLeaderboardModuleGetLeaderboardByIdAsyncResponse, const FBP_LeaderboardData&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FLeaderboardModuleGetLeaderboardByRequestNameAsyncResponse, const FBP_LeaderboardData&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FLeaderboardModuleGetLeaderboardByRequestNamesAsyncResponse, const TArray<FBP_LeaderboardData>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FLeaderboardModuleGetLeaderboardIdsAsyncResponse, const TArray<FString>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FLeaderboardModuleSetScoreAsyncResponse, int32, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FLeaderboardModuleAddScoreAsyncResponse, int32, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FLeaderboardModuleGetUserEntryAsyncResponse, const FBP_LeaderboardEntry&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FLeaderboardModuleGetEntriesAsyncResponse, const TArray<FBP_LeaderboardEntry>&, response);

UCLASS()
class READYGAMESNETWORK_API UBP_LeaderboardModule : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    /**
     * Asynchronous method that retrieves leaderboard data.
     * Resulting Data contains leaderboard description fields like id, name, type, etc.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Leaderboard")
    static void GetLeaderboardByIdAsync(
        FLeaderboardModuleGetLeaderboardByIdAsyncResponse onSuccess,
        FLeaderboardModuleFailResponse onFail,
        const FString& id) {
            string cpp_id;
            cpp_id = string(TCHAR_TO_UTF8(*id));
            RGN::Modules::Leaderboard::LeaderboardModule::GetLeaderboardByIdAsync(
                [onSuccess](RGN::Modules::Leaderboard::LeaderboardData response) {
                    FBP_LeaderboardData bpResponse;
                    FBP_LeaderboardData::ConvertToUnrealModel(response, bpResponse);
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_id);
    }
    /**
     * Asynchronous method that retrieves leaderboard data.
     * Resulting Data contains leaderboard description fields like id, name, type, etc.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Leaderboard")
    static void GetLeaderboardByRequestNameAsync(
        FLeaderboardModuleGetLeaderboardByRequestNameAsyncResponse onSuccess,
        FLeaderboardModuleFailResponse onFail,
        const FString& requestName) {
            string cpp_requestName;
            cpp_requestName = string(TCHAR_TO_UTF8(*requestName));
            RGN::Modules::Leaderboard::LeaderboardModule::GetLeaderboardByRequestNameAsync(
                [onSuccess](RGN::Modules::Leaderboard::LeaderboardData response) {
                    FBP_LeaderboardData bpResponse;
                    FBP_LeaderboardData::ConvertToUnrealModel(response, bpResponse);
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_requestName);
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Leaderboard")
    static void GetLeaderboardByRequestNamesAsync(
        FLeaderboardModuleGetLeaderboardByRequestNamesAsyncResponse onSuccess,
        FLeaderboardModuleFailResponse onFail,
        const TArray<FString>& requestNames) {
            vector<string> cpp_requestNames;
            for (const auto& requestNames_item : requestNames) {
                string cpp_requestNames_item;
                cpp_requestNames_item = string(TCHAR_TO_UTF8(*requestNames_item));
                cpp_requestNames.push_back(cpp_requestNames_item);
            }
            RGN::Modules::Leaderboard::LeaderboardModule::GetLeaderboardByRequestNamesAsync(
                [onSuccess](vector<RGN::Modules::Leaderboard::LeaderboardData> response) {
                    TArray<FBP_LeaderboardData> bpResponse;
                    for (const auto& response_item : response) {
                        FBP_LeaderboardData b_response_item;
                        FBP_LeaderboardData::ConvertToUnrealModel(response_item, b_response_item);
                        bpResponse.Add(b_response_item);
                    }
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_requestNames);
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Leaderboard")
    static void GetLeaderboardIdsAsync(
        FLeaderboardModuleGetLeaderboardIdsAsyncResponse onSuccess,
        FLeaderboardModuleFailResponse onFail) {
            RGN::Modules::Leaderboard::LeaderboardModule::GetLeaderboardIdsAsync(
                [onSuccess](vector<string> response) {
                    TArray<FString> bpResponse;
                    for (const auto& response_item : response) {
                        FString b_response_item;
                        b_response_item = FString(response_item.c_str());
                        bpResponse.Add(b_response_item);
                    }
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                });
    }
    /**
     * Asynchronously sets the player's score on the specified leaderboard.
     * @param leaderboardId - The ID of the leaderboard where the score will be set.
     * @param score - The score to be set on the leaderboard.
     * @param extraData - (Optional) Extra data associated with the score. Defaults to an empty string if not provided.
     * @return A task that represents the asynchronous operation. The task result contains the player's place after setting the score.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Leaderboard", meta=(AutoCreateRefTerm="extraData"))
    static void SetScoreAsync(
        FLeaderboardModuleSetScoreAsyncResponse onSuccess,
        FLeaderboardModuleFailResponse onFail,
        const FString& leaderboardId,
        int32 score,
        const FString& extraData = "") {
            string cpp_leaderboardId;
            int32_t cpp_score;
            string cpp_extraData;
            cpp_leaderboardId = string(TCHAR_TO_UTF8(*leaderboardId));
            cpp_score = score;
            cpp_extraData = string(TCHAR_TO_UTF8(*extraData));
            RGN::Modules::Leaderboard::LeaderboardModule::SetScoreAsync(
                [onSuccess](int32_t response) {
                    int32 bpResponse;
                    bpResponse = response;
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_leaderboardId,
                cpp_score,
                cpp_extraData);
    }
    /**
     * Asynchronously adds the player's score on the specified leaderboard.
     * @param leaderboardId - The ID of the leaderboard where the score will be added.
     * @param score - The score to be added on the leaderboard.
     * @param extraData - (Optional) Extra data associated with the score. Defaults to an empty string if not provided.
     * @return A task that represents the asynchronous operation. The task result contains the player's place after setting the score.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Leaderboard", meta=(AutoCreateRefTerm="extraData"))
    static void AddScoreAsync(
        FLeaderboardModuleAddScoreAsyncResponse onSuccess,
        FLeaderboardModuleFailResponse onFail,
        const FString& leaderboardId,
        int32 score,
        const FString& extraData = "") {
            string cpp_leaderboardId;
            int32_t cpp_score;
            string cpp_extraData;
            cpp_leaderboardId = string(TCHAR_TO_UTF8(*leaderboardId));
            cpp_score = score;
            cpp_extraData = string(TCHAR_TO_UTF8(*extraData));
            RGN::Modules::Leaderboard::LeaderboardModule::AddScoreAsync(
                [onSuccess](int32_t response) {
                    int32 bpResponse;
                    bpResponse = response;
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_leaderboardId,
                cpp_score,
                cpp_extraData);
    }
    /**
     * Asynchronously retrieves the player's entry on the specified leaderboard.
     * @param leaderboardId - The ID of the leaderboard from which the entry will be retrieved.
     * @return A task that represents the asynchronous operation. The task result contains the player's entry data on the leaderboard.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Leaderboard")
    static void GetUserEntryAsync(
        FLeaderboardModuleGetUserEntryAsyncResponse onSuccess,
        FLeaderboardModuleFailResponse onFail,
        const FString& leaderboardId) {
            string cpp_leaderboardId;
            cpp_leaderboardId = string(TCHAR_TO_UTF8(*leaderboardId));
            RGN::Modules::Leaderboard::LeaderboardModule::GetUserEntryAsync(
                [onSuccess](RGN::Modules::Leaderboard::LeaderboardEntry response) {
                    FBP_LeaderboardEntry bpResponse;
                    FBP_LeaderboardEntry::ConvertToUnrealModel(response, bpResponse);
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_leaderboardId);
    }
    /**
     * Asynchronously retrieves a specified number of top entries and entries around the user from the specified leaderboard.
     * @param leaderboardId - The ID of the leaderboard from which the entries will be retrieved.
     * @param quantityTop - The number of top entries to retrieve from the leaderboard.
     * @param includeUser - Whether to include the user's entry in the retrieved entries.
     * @param quantityAroundUser - The number of entries to retrieve around the user's entry.
     * @return A task that represents the asynchronous operation. The task result contains a list of the retrieved leaderboard entries.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Leaderboard")
    static void GetEntriesAsync(
        FLeaderboardModuleGetEntriesAsyncResponse onSuccess,
        FLeaderboardModuleFailResponse onFail,
        const FString& leaderboardId,
        int32 quantityTop,
        bool includeUser,
        int32 quantityAroundUser) {
            string cpp_leaderboardId;
            int32_t cpp_quantityTop;
            bool cpp_includeUser;
            int32_t cpp_quantityAroundUser;
            cpp_leaderboardId = string(TCHAR_TO_UTF8(*leaderboardId));
            cpp_quantityTop = quantityTop;
            cpp_includeUser = includeUser;
            cpp_quantityAroundUser = quantityAroundUser;
            RGN::Modules::Leaderboard::LeaderboardModule::GetEntriesAsync(
                [onSuccess](vector<RGN::Modules::Leaderboard::LeaderboardEntry> response) {
                    TArray<FBP_LeaderboardEntry> bpResponse;
                    for (const auto& response_item : response) {
                        FBP_LeaderboardEntry b_response_item;
                        FBP_LeaderboardEntry::ConvertToUnrealModel(response_item, b_response_item);
                        bpResponse.Add(b_response_item);
                    }
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_leaderboardId,
                cpp_quantityTop,
                cpp_includeUser,
                cpp_quantityAroundUser);
    }
};
