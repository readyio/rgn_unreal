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
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Leaderboard")
    static void GetLeaderboardByIdAsync(
        const FString& id,
        FLeaderboardModuleGetLeaderboardByIdAsyncResponse onSuccess, FLeaderboardModuleFailResponse onFail) {
            string cpp_id;
			cpp_id = string(TCHAR_TO_UTF8(*id));
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Leaderboard")
    static void GetLeaderboardByRequestNameAsync(
        const FString& requestName,
        FLeaderboardModuleGetLeaderboardByRequestNameAsyncResponse onSuccess, FLeaderboardModuleFailResponse onFail) {
            string cpp_requestName;
			cpp_requestName = string(TCHAR_TO_UTF8(*requestName));
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Leaderboard")
    static void GetLeaderboardByRequestNamesAsync(
        const TArray<FString>& requestNames,
        FLeaderboardModuleGetLeaderboardByRequestNamesAsyncResponse onSuccess, FLeaderboardModuleFailResponse onFail) {
            vector<string> cpp_requestNames;
			for (const auto& requestNames_item : requestNames) {
				string cpp_requestNames_item;
				cpp_requestNames_item = string(TCHAR_TO_UTF8(*requestNames_item));
				cpp_requestNames.push_back(cpp_requestNames_item);
			}
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Leaderboard")
    static void GetLeaderboardIdsAsync(
        FLeaderboardModuleGetLeaderboardIdsAsyncResponse onSuccess, FLeaderboardModuleFailResponse onFail) {
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Leaderboard")
    static void SetScoreAsync(
        const FString& leaderboardId,
        int32 score,
        const FString& extraData,
        FLeaderboardModuleSetScoreAsyncResponse onSuccess, FLeaderboardModuleFailResponse onFail) {
            string cpp_leaderboardId;
            int32_t cpp_score;
            string cpp_extraData;
			cpp_leaderboardId = string(TCHAR_TO_UTF8(*leaderboardId));
			cpp_score = score;
			cpp_extraData = string(TCHAR_TO_UTF8(*extraData));
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Leaderboard")
    static void AddScoreAsync(
        const FString& leaderboardId,
        int32 score,
        const FString& extraData,
        FLeaderboardModuleAddScoreAsyncResponse onSuccess, FLeaderboardModuleFailResponse onFail) {
            string cpp_leaderboardId;
            int32_t cpp_score;
            string cpp_extraData;
			cpp_leaderboardId = string(TCHAR_TO_UTF8(*leaderboardId));
			cpp_score = score;
			cpp_extraData = string(TCHAR_TO_UTF8(*extraData));
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Leaderboard")
    static void GetUserEntryAsync(
        const FString& leaderboardId,
        FLeaderboardModuleGetUserEntryAsyncResponse onSuccess, FLeaderboardModuleFailResponse onFail) {
            string cpp_leaderboardId;
			cpp_leaderboardId = string(TCHAR_TO_UTF8(*leaderboardId));
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Leaderboard")
    static void GetEntriesAsync(
        const FString& leaderboardId,
        int32 quantityTop,
        bool includeUser,
        int32 quantityAroundUser,
        FLeaderboardModuleGetEntriesAsyncResponse onSuccess, FLeaderboardModuleFailResponse onFail) {
            string cpp_leaderboardId;
            int32_t cpp_quantityTop;
            bool cpp_includeUser;
            int32_t cpp_quantityAroundUser;
			cpp_leaderboardId = string(TCHAR_TO_UTF8(*leaderboardId));
			cpp_quantityTop = quantityTop;
			cpp_includeUser = includeUser;
			cpp_quantityAroundUser = quantityAroundUser;
            // TODO
    }
};
