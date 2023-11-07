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
#include "../../../../../Generated/RGN/Modules/Leaderboard/IsLeaderboardAvailableResponseData.h"
#include "BP_IsLeaderboardAvailableResponseData.h"
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
DECLARE_DYNAMIC_DELEGATE_OneParam(FLeaderboardModuleGetLeaderboardByAppIdsAsyncResponse, const TArray<FBP_LeaderboardData>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FLeaderboardModuleGetLeaderboardForCurrentAppAsyncResponse, const TArray<FBP_LeaderboardData>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FLeaderboardModuleGetLeaderboardIdsAsyncResponse, const TArray<FString>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FLeaderboardModuleIsLeaderboardAvailableAsyncResponse, bool, response);
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
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Leaderboard", meta=(AutoCreateRefTerm="startAfter, ignoreTimestamp"))
    static void GetLeaderboardByAppIdsAsync(
        FLeaderboardModuleGetLeaderboardByAppIdsAsyncResponse onSuccess,
        FLeaderboardModuleFailResponse onFail,
        const TArray<FString>& appIds,
        int32 limit,
        const FString& startAfter = "",
        bool ignoreTimestamp = false) {
            vector<string> cpp_appIds;
            int32_t cpp_limit;
            string cpp_startAfter;
            bool cpp_ignoreTimestamp;
            for (const auto& appIds_item : appIds) {
                string cpp_appIds_item;
                cpp_appIds_item = string(TCHAR_TO_UTF8(*appIds_item));
                cpp_appIds.push_back(cpp_appIds_item);
            }
            cpp_limit = limit;
            cpp_startAfter = string(TCHAR_TO_UTF8(*startAfter));
            cpp_ignoreTimestamp = ignoreTimestamp;
            RGN::Modules::Leaderboard::LeaderboardModule::GetLeaderboardByAppIdsAsync(
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
                cpp_appIds,
                cpp_limit,
                cpp_startAfter,
                cpp_ignoreTimestamp);
    }
    /**
     * Asynchronously retrieves a list of leaderboards for the current application from the Ready Games Network (RGN).
     * @param limit - An integer indicating the maximum number of leaderboards to retrieve.
     * @param startAfter - An optional parameter representing an leaderboard id after which to
     * start retrieving the leaderboards. The default is an empty string.
     * @param ignoreTimestamp - An optional parameter that indicates whether to ignore the timestamp in the leaderboard
     * retrieval process. The default is false.
     * @return A Task representing the asynchronous operation. The Result property of the Task returns a list
     * of T:RGN.Modules.Leaderboard.LeaderboardData objects representing the leaderboards that match the current application identifier,
     * limit and other optional parameters.
     * @throw: Thrown when the provided limit value is zero.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Leaderboard", meta=(AutoCreateRefTerm="startAfter, ignoreTimestamp"))
    static void GetLeaderboardForCurrentAppAsync(
        FLeaderboardModuleGetLeaderboardForCurrentAppAsyncResponse onSuccess,
        FLeaderboardModuleFailResponse onFail,
        int32 limit,
        const FString& startAfter = "",
        bool ignoreTimestamp = false) {
            int32_t cpp_limit;
            string cpp_startAfter;
            bool cpp_ignoreTimestamp;
            cpp_limit = limit;
            cpp_startAfter = string(TCHAR_TO_UTF8(*startAfter));
            cpp_ignoreTimestamp = ignoreTimestamp;
            RGN::Modules::Leaderboard::LeaderboardModule::GetLeaderboardForCurrentAppAsync(
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
                cpp_limit,
                cpp_startAfter,
                cpp_ignoreTimestamp);
    }
    /**
     * Method to retrieve leaderboard ids defined for current project
     * @param ignoreTimestamp - An optional parameter that indicates whether to ignore the timestamp in the leaderboard
     * retrieval process. The default is false.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Leaderboard", meta=(AutoCreateRefTerm="ignoreTimestamp"))
    static void GetLeaderboardIdsAsync(
        FLeaderboardModuleGetLeaderboardIdsAsyncResponse onSuccess,
        FLeaderboardModuleFailResponse onFail,
        bool ignoreTimestamp = false) {
            bool cpp_ignoreTimestamp;
            cpp_ignoreTimestamp = ignoreTimestamp;
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
                },
                cpp_ignoreTimestamp);
    }
    /**
     * Method to retrieve available status of leaderboard
     * @param leaderboardId - The ID of the leaderboard which status will be checked.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Leaderboard")
    static void IsLeaderboardAvailableAsync(
        FLeaderboardModuleIsLeaderboardAvailableAsyncResponse onSuccess,
        FLeaderboardModuleFailResponse onFail,
        const FString& leaderboardId) {
            string cpp_leaderboardId;
            cpp_leaderboardId = string(TCHAR_TO_UTF8(*leaderboardId));
            RGN::Modules::Leaderboard::LeaderboardModule::IsLeaderboardAvailableAsync(
                [onSuccess](bool response) {
                    bool bpResponse;
                    bpResponse = response;
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_leaderboardId);
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
