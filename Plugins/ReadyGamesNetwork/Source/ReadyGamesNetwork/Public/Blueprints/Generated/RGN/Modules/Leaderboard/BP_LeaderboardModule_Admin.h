#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BP_LeaderboardData.h"
#include "BP_LeaderboardModule_Admin.generated.h"

DECLARE_DYNAMIC_DELEGATE_TwoParams(FLeaderboardModule_AdminFailResponse, int32, code, const FString&, message);

DECLARE_DYNAMIC_DELEGATE_OneParam(FLeaderboardModuleAdminAddLeaderboardAsyncResponse, const FString&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FLeaderboardModuleAdminUpdateLeaderboardAsyncResponse, const FString&, response);
DECLARE_DYNAMIC_DELEGATE(FLeaderboardModuleAdminDeleteLeaderboardAsyncResponse);

UCLASS()
class READYGAMESNETWORK_API UBP_LeaderboardModule_Admin : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Leaderboard")
    static void AddLeaderboardAsync(
        const FBP_LeaderboardData& leaderboardData,
        FLeaderboardModuleAdminAddLeaderboardAsyncResponse onSuccess, FLeaderboardModule_AdminFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Leaderboard")
    static void UpdateLeaderboardAsync(
        const FBP_LeaderboardData& leaderboardData,
        FLeaderboardModuleAdminUpdateLeaderboardAsyncResponse onSuccess, FLeaderboardModule_AdminFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Leaderboard")
    static void DeleteLeaderboardAsync(
        const FString& leaderboardId,
        FLeaderboardModuleAdminDeleteLeaderboardAsyncResponse onSuccess, FLeaderboardModule_AdminFailResponse onFail) {
             // TODO
    }
};
