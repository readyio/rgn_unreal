#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "../../../../../Generated/RGN/Modules/Leaderboard/LeaderboardModule_Admin.h"
#include "../../../../../Generated/RGN/Modules/Leaderboard/LeaderboardData.h"
#include "BP_LeaderboardData.h"
#include <vector>
#include <unordered_map>
#include <string>
#include <functional>
#include "BP_LeaderboardModule_Admin.generated.h"

using namespace std;

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
            RGN::Modules::Leaderboard::LeaderboardData cpp_leaderboardData;
			FBP_LeaderboardData::ConvertToCoreModel(leaderboardData, cpp_leaderboardData);
            RGN::Modules::Leaderboard::LeaderboardModule_Admin::AddLeaderboardAsync(
                cpp_leaderboardData,
                [onSuccess](string response) {
                    FString bpResponse;
					bpResponse = FString(response.c_str());
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                }
            );
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Leaderboard")
    static void UpdateLeaderboardAsync(
        const FBP_LeaderboardData& leaderboardData,
        FLeaderboardModuleAdminUpdateLeaderboardAsyncResponse onSuccess, FLeaderboardModule_AdminFailResponse onFail) {
            RGN::Modules::Leaderboard::LeaderboardData cpp_leaderboardData;
			FBP_LeaderboardData::ConvertToCoreModel(leaderboardData, cpp_leaderboardData);
            RGN::Modules::Leaderboard::LeaderboardModule_Admin::UpdateLeaderboardAsync(
                cpp_leaderboardData,
                [onSuccess](string response) {
                    FString bpResponse;
					bpResponse = FString(response.c_str());
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                }
            );
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Leaderboard")
    static void DeleteLeaderboardAsync(
        const FString& leaderboardId,
        FLeaderboardModuleAdminDeleteLeaderboardAsyncResponse onSuccess, FLeaderboardModule_AdminFailResponse onFail) {
            string cpp_leaderboardId;
			cpp_leaderboardId = string(TCHAR_TO_UTF8(*leaderboardId));
            RGN::Modules::Leaderboard::LeaderboardModule_Admin::DeleteLeaderboardAsync(
                cpp_leaderboardId,
                [onSuccess]() {
                    onSuccess.ExecuteIfBound();
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                }
            );
    }
};
