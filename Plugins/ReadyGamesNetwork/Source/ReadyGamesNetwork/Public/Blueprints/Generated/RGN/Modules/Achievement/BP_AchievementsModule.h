#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BP_GetAchievementsResponse.h"
#include "BP_AchievementData.h"
#include "BP_GetAchievementsWithUserDataResponse.h"
#include "BP_AchievementWithUserData.h"
#include "BP_TriggerAndClaimResponse.h"
#include "BP_TriggerByIdRequestData.h"
#include "BP_TriggerByRequestNameRequestData.h"
#include "BP_ClaimByIdRequestData.h"
#include "BP_ClaimByRequestNameRequestData.h"
#include "BP_GetUserAchievementsResponse.h"
#include "BP_UserAchievement.h"
#include "BP_AchievementsModule.generated.h"

DECLARE_DYNAMIC_DELEGATE_TwoParams(FAchievementsModuleFailResponse, int32, code, const FString&, message);

DECLARE_DYNAMIC_DELEGATE_OneParam(FAchievementsModuleGetByIdsAsyncResponse, const TArray<FBP_AchievementData>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FAchievementsModuleGetByAppIdsAsyncResponse, const TArray<FBP_AchievementData>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FAchievementsModuleGetForCurrentAppAsyncResponse, const TArray<FBP_AchievementData>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FAchievementsModuleGetByAppIdsWithUserDataAsyncResponse, const TArray<FBP_AchievementWithUserData>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FAchievementsModuleGetForCurrentAppWithUserDataAsyncResponse, const TArray<FBP_AchievementWithUserData>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FAchievementsModuleGetByRequestNameAsyncResponse, const FBP_AchievementData&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FAchievementsModuleGetByRequestNamesAsyncResponse, const TArray<FBP_AchievementData>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FAchievementsModuleTriggerByIdAsyncResponse, const FBP_TriggerAndClaimResponse&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FAchievementsModuleTriggerByRequestNameAsyncResponse, const FBP_TriggerAndClaimResponse&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FAchievementsModuleClaimByIdAsyncResponse, const FBP_TriggerAndClaimResponse&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FAchievementsModuleClaimByRequestNameAsyncResponse, const FBP_TriggerAndClaimResponse&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FAchievementsModuleGetUserAchievementsAsyncResponse, const TArray<FBP_UserAchievement>&, response);

UCLASS()
class READYGAMESNETWORK_API UBP_AchievementsModule : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Achievement")
    static void GetByIdsAsync(
        const TArray<FString>& ids,
        FAchievementsModuleGetByIdsAsyncResponse onSuccess, FAchievementsModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Achievement")
    static void GetByAppIdsAsync(
        const TArray<FString>& appIds,
        int32 limit,
        const FString& startAfter,
        FAchievementsModuleGetByAppIdsAsyncResponse onSuccess, FAchievementsModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Achievement")
    static void GetForCurrentAppAsync(
        int32 limit,
        const FString& startAfter,
        FAchievementsModuleGetForCurrentAppAsyncResponse onSuccess, FAchievementsModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Achievement")
    static void GetByAppIdsWithUserDataAsync(
        const TArray<FString>& appIds,
        int32 limit,
        const FString& startAfter,
        bool withHistory,
        FAchievementsModuleGetByAppIdsWithUserDataAsyncResponse onSuccess, FAchievementsModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Achievement")
    static void GetForCurrentAppWithUserDataAsync(
        int32 limit,
        const FString& startAfter,
        FAchievementsModuleGetForCurrentAppWithUserDataAsyncResponse onSuccess, FAchievementsModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Achievement")
    static void GetByRequestNameAsync(
        const FString& requestName,
        FAchievementsModuleGetByRequestNameAsyncResponse onSuccess, FAchievementsModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Achievement")
    static void GetByRequestNamesAsync(
        const TArray<FString>& requestNames,
        FAchievementsModuleGetByRequestNamesAsyncResponse onSuccess, FAchievementsModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Achievement")
    static void TriggerByIdAsync(
        const FString& id,
        int32 progress,
        FAchievementsModuleTriggerByIdAsyncResponse onSuccess, FAchievementsModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Achievement")
    static void TriggerByRequestNameAsync(
        const FString& requestName,
        int32 progress,
        FAchievementsModuleTriggerByRequestNameAsyncResponse onSuccess, FAchievementsModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Achievement")
    static void ClaimByIdAsync(
        const FString& achievementId,
        FAchievementsModuleClaimByIdAsyncResponse onSuccess, FAchievementsModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Achievement")
    static void ClaimByRequestNameAsync(
        const FString& requestName,
        FAchievementsModuleClaimByRequestNameAsyncResponse onSuccess, FAchievementsModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Achievement")
    static void GetUserAchievementsAsync(
        const FString& userId,
        int64 startAfter,
        int32 limit,
        FAchievementsModuleGetUserAchievementsAsyncResponse onSuccess, FAchievementsModuleFailResponse onFail) {
             // TODO
    }
};
