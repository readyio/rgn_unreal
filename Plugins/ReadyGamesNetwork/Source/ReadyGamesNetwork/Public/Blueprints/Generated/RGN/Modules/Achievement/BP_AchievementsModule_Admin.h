#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BP_AchievementData.h"
#include "BP_AchievementsModule_Admin.generated.h"

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
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Achievement")
    static void UpdateAchievementAsync(
        const FBP_AchievementData& achievementData,
        FAchievementsModuleAdminUpdateAchievementAsyncResponse onSuccess, FAchievementsModule_AdminFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Achievement")
    static void DeleteAchievementAsync(
        const FString& achievementId,
        FAchievementsModuleAdminDeleteAchievementAsyncResponse onSuccess, FAchievementsModule_AdminFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Achievement")
    static void AddLoginDaysInRowAchievementAsync1(
        const FString& achievementId,
        int32 daysInRow,
        FAchievementsModuleAdminAddLoginDaysInRowAchievementAsyncResponse onSuccess, FAchievementsModule_AdminFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Achievement")
    static void AddLoginDaysInRowAchievementAsync2(
        const FBP_AchievementData& achievementData,
        int32 daysInRow,
        FAchievementsModuleAdminAddLoginDaysInRowAchievementAsyncResponse onSuccess, FAchievementsModule_AdminFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Achievement")
    static void DeleteLoginDaysInRowGameConstRecordAsync(
        const FString& achievementId,
        int32 daysInRow,
        FAchievementsModuleAdminDeleteLoginDaysInRowGameConstRecordAsyncResponse onSuccess, FAchievementsModule_AdminFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Achievement")
    static void AddPlayerProgressAchievementAsync1(
        const FString& achievementId,
        const FString& playerProgressFieldName,
        int64 playerProgressFieldValueToReach,
        FAchievementsModuleAdminAddPlayerProgressAchievementAsyncResponse onSuccess, FAchievementsModule_AdminFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Achievement")
    static void AddPlayerProgressAchievementAsync2(
        const FBP_AchievementData& achievementData,
        const FString& playerProgressFieldName,
        int64 playerProgressFieldValueToReach,
        FAchievementsModuleAdminAddPlayerProgressAchievementAsyncResponse onSuccess, FAchievementsModule_AdminFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Achievement")
    static void DeletePlayerProgressAchievementAsync(
        const FString& achievementId,
        const FString& playerProgressFieldName,
        int64 playerProgressFieldValueToReach,
        FAchievementsModuleAdminDeletePlayerProgressAchievementAsyncResponse onSuccess, FAchievementsModule_AdminFailResponse onFail) {
             // TODO
    }
};
