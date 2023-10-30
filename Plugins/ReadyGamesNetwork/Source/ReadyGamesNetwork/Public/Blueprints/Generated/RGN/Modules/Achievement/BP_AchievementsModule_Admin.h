#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "../../../../../Generated/RGN/Modules/Achievement/AchievementsModule_Admin.h"
#include "../../../../../Generated/RGN/Modules/Achievement/AchievementData.h"
#include "BP_AchievementData.h"
#include <vector>
#include <unordered_map>
#include <string>
#include <functional>
#include "BP_AchievementsModule_Admin.generated.h"

using namespace std;

DECLARE_DYNAMIC_DELEGATE_TwoParams(FAchievementsModule_AdminFailResponse, int32, code, const FString&, message);

DECLARE_DYNAMIC_DELEGATE_OneParam(FAchievementsModuleAdminAddAchievementAsyncResponse, const FString&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FAchievementsModuleAdminUpdateAchievementAsyncResponse, const FString&, response);
DECLARE_DYNAMIC_DELEGATE(FAchievementsModuleAdminDeleteAchievementAsyncResponse);
DECLARE_DYNAMIC_DELEGATE(FAchievementsModuleAdminAddLoginDaysInRowAchievementAsyncResponse);
DECLARE_DYNAMIC_DELEGATE(FAchievementsModuleAdminDeleteLoginDaysInRowGameConstRecordAsyncResponse);
DECLARE_DYNAMIC_DELEGATE(FAchievementsModuleAdminAddPlayerProgressAchievementAsyncResponse);
DECLARE_DYNAMIC_DELEGATE(FAchievementsModuleAdminDeletePlayerProgressAchievementAsyncResponse);

UCLASS()
class READYGAMESNETWORK_API UBP_AchievementsModule_Admin : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Achievement")
    static void AddAchievementAsync(
        const FBP_AchievementData& achievementData,
        FAchievementsModuleAdminAddAchievementAsyncResponse onSuccess, FAchievementsModule_AdminFailResponse onFail) {
            RGN::Modules::Achievement::AchievementData cpp_achievementData;
			FBP_AchievementData::ConvertToCoreModel(achievementData, cpp_achievementData);
            RGN::Modules::Achievement::AchievementsModule_Admin::AddAchievementAsync(
                cpp_achievementData,
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
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Achievement")
    static void UpdateAchievementAsync(
        const FBP_AchievementData& achievementData,
        FAchievementsModuleAdminUpdateAchievementAsyncResponse onSuccess, FAchievementsModule_AdminFailResponse onFail) {
            RGN::Modules::Achievement::AchievementData cpp_achievementData;
			FBP_AchievementData::ConvertToCoreModel(achievementData, cpp_achievementData);
            RGN::Modules::Achievement::AchievementsModule_Admin::UpdateAchievementAsync(
                cpp_achievementData,
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
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Achievement")
    static void DeleteAchievementAsync(
        const FString& achievementId,
        FAchievementsModuleAdminDeleteAchievementAsyncResponse onSuccess, FAchievementsModule_AdminFailResponse onFail) {
            string cpp_achievementId;
			cpp_achievementId = string(TCHAR_TO_UTF8(*achievementId));
            RGN::Modules::Achievement::AchievementsModule_Admin::DeleteAchievementAsync(
                cpp_achievementId,
                [onSuccess]() {
                    onSuccess.ExecuteIfBound();
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                }
            );
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Achievement")
    static void AddLoginDaysInRowAchievementAsync_AchievementId_DaysInRow(
        const FString& achievementId,
        int32 daysInRow,
        FAchievementsModuleAdminAddLoginDaysInRowAchievementAsyncResponse onSuccess, FAchievementsModule_AdminFailResponse onFail) {
            string cpp_achievementId;
            int32_t cpp_daysInRow;
			cpp_achievementId = string(TCHAR_TO_UTF8(*achievementId));
			cpp_daysInRow = daysInRow;
            RGN::Modules::Achievement::AchievementsModule_Admin::AddLoginDaysInRowAchievementAsync(
                cpp_achievementId,
                cpp_daysInRow,
                [onSuccess]() {
                    onSuccess.ExecuteIfBound();
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                }
            );
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Achievement")
    static void AddLoginDaysInRowAchievementAsync_AchievementData_DaysInRow(
        const FBP_AchievementData& achievementData,
        int32 daysInRow,
        FAchievementsModuleAdminAddLoginDaysInRowAchievementAsyncResponse onSuccess, FAchievementsModule_AdminFailResponse onFail) {
            RGN::Modules::Achievement::AchievementData cpp_achievementData;
            int32_t cpp_daysInRow;
			FBP_AchievementData::ConvertToCoreModel(achievementData, cpp_achievementData);
			cpp_daysInRow = daysInRow;
            RGN::Modules::Achievement::AchievementsModule_Admin::AddLoginDaysInRowAchievementAsync(
                cpp_achievementData,
                cpp_daysInRow,
                [onSuccess]() {
                    onSuccess.ExecuteIfBound();
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                }
            );
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Achievement")
    static void DeleteLoginDaysInRowGameConstRecordAsync(
        const FString& achievementId,
        int32 daysInRow,
        FAchievementsModuleAdminDeleteLoginDaysInRowGameConstRecordAsyncResponse onSuccess, FAchievementsModule_AdminFailResponse onFail) {
            string cpp_achievementId;
            int32_t cpp_daysInRow;
			cpp_achievementId = string(TCHAR_TO_UTF8(*achievementId));
			cpp_daysInRow = daysInRow;
            RGN::Modules::Achievement::AchievementsModule_Admin::DeleteLoginDaysInRowGameConstRecordAsync(
                cpp_achievementId,
                cpp_daysInRow,
                [onSuccess]() {
                    onSuccess.ExecuteIfBound();
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                }
            );
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Achievement")
    static void AddPlayerProgressAchievementAsync_AchievementId_PlayerProgressFieldName_PlayerProgressFieldValueToReach(
        const FString& achievementId,
        const FString& playerProgressFieldName,
        int64 playerProgressFieldValueToReach,
        FAchievementsModuleAdminAddPlayerProgressAchievementAsyncResponse onSuccess, FAchievementsModule_AdminFailResponse onFail) {
            string cpp_achievementId;
            string cpp_playerProgressFieldName;
            int64_t cpp_playerProgressFieldValueToReach;
			cpp_achievementId = string(TCHAR_TO_UTF8(*achievementId));
			cpp_playerProgressFieldName = string(TCHAR_TO_UTF8(*playerProgressFieldName));
			cpp_playerProgressFieldValueToReach = playerProgressFieldValueToReach;
            RGN::Modules::Achievement::AchievementsModule_Admin::AddPlayerProgressAchievementAsync(
                cpp_achievementId,
                cpp_playerProgressFieldName,
                cpp_playerProgressFieldValueToReach,
                [onSuccess]() {
                    onSuccess.ExecuteIfBound();
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                }
            );
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Achievement")
    static void AddPlayerProgressAchievementAsync_AchievementData_PlayerProgressFieldName_PlayerProgressFieldValueToReach(
        const FBP_AchievementData& achievementData,
        const FString& playerProgressFieldName,
        int64 playerProgressFieldValueToReach,
        FAchievementsModuleAdminAddPlayerProgressAchievementAsyncResponse onSuccess, FAchievementsModule_AdminFailResponse onFail) {
            RGN::Modules::Achievement::AchievementData cpp_achievementData;
            string cpp_playerProgressFieldName;
            int64_t cpp_playerProgressFieldValueToReach;
			FBP_AchievementData::ConvertToCoreModel(achievementData, cpp_achievementData);
			cpp_playerProgressFieldName = string(TCHAR_TO_UTF8(*playerProgressFieldName));
			cpp_playerProgressFieldValueToReach = playerProgressFieldValueToReach;
            RGN::Modules::Achievement::AchievementsModule_Admin::AddPlayerProgressAchievementAsync(
                cpp_achievementData,
                cpp_playerProgressFieldName,
                cpp_playerProgressFieldValueToReach,
                [onSuccess]() {
                    onSuccess.ExecuteIfBound();
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                }
            );
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Achievement")
    static void DeletePlayerProgressAchievementAsync(
        const FString& achievementId,
        const FString& playerProgressFieldName,
        int64 playerProgressFieldValueToReach,
        FAchievementsModuleAdminDeletePlayerProgressAchievementAsyncResponse onSuccess, FAchievementsModule_AdminFailResponse onFail) {
            string cpp_achievementId;
            string cpp_playerProgressFieldName;
            int64_t cpp_playerProgressFieldValueToReach;
			cpp_achievementId = string(TCHAR_TO_UTF8(*achievementId));
			cpp_playerProgressFieldName = string(TCHAR_TO_UTF8(*playerProgressFieldName));
			cpp_playerProgressFieldValueToReach = playerProgressFieldValueToReach;
            RGN::Modules::Achievement::AchievementsModule_Admin::DeletePlayerProgressAchievementAsync(
                cpp_achievementId,
                cpp_playerProgressFieldName,
                cpp_playerProgressFieldValueToReach,
                [onSuccess]() {
                    onSuccess.ExecuteIfBound();
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                }
            );
    }
};
