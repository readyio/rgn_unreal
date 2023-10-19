#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BP_UserData.h"
#include "BP_GetUserProfileRequestData.h"
#include "BP_SearchUsersRequestData.h"
#include "../../Model/Request/BP_BaseRequestData.h"
#include "../Currency/BP_Currency.h"
#include "BP_GetUserIdByShortUIDRequestData.h"
#include "BP_UpdateUserProfileRequestData.h"
#include "../../Model/BP_ImageSize.h"
#include "BP_UserCustomClaims.h"
#include "BP_SetInvisibleStatusRequestData.h"
#include "BP_GetUserStatusResponseData.h"
#include "BP_GetUserStatusRequestData.h"
#include "BP_UserProfileModule.generated.h"

DECLARE_DYNAMIC_DELEGATE_TwoParams(FUserProfileModuleFailResponse, int32, code, const FString&, message);

DECLARE_DYNAMIC_DELEGATE_OneParam(FUserProfileModuleGetProfileAsyncResponse, const FBP_UserData&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FUserProfileModuleGetFullUserProfileAsyncResponse, const FString&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FUserProfileModuleSearchUsersAsyncResponse, const TArray<FBP_UserData>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FUserProfileModuleGetUserCurrenciesAsyncResponse, const TArray<FBP_Currency>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FUserProfileModuleGetUserIdByShortUIDAsyncResponse, const FString&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FUserProfileModuleSetDisplayNameAsyncResponse, const FString&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FUserProfileModuleSetBioAsyncResponse, const FString&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FUserProfileModuleSetDisplayNameAndBioAsyncResponse, const FString&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FUserProfileModuleUploadAvatarImageAsyncResponse, bool, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FUserProfileModuleDownloadAvatarImageAsyncResponse, const TArray<uint8>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FUserProfileModuleChangeAdminStatusByEmailAsyncResponse, const FBP_UserCustomClaims&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FUserProfileModuleChangeAdminStatusByUserIdAsyncResponse, const FBP_UserCustomClaims&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FUserProfileModuleGetUserCustomClaimsByUserIdAsyncResponse, const FBP_UserCustomClaims&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FUserProfileModuleGetUserCustomClaimsByEmailAsyncResponse, const FBP_UserCustomClaims&, response);
DECLARE_DYNAMIC_DELEGATE(FUserProfileModuleSetInvisibleStatusAsyncResponse);
DECLARE_DYNAMIC_DELEGATE(FUserProfileModulePingAsyncResponse);
DECLARE_DYNAMIC_DELEGATE(FUserProfileModuleSuspendAsyncResponse);
DECLARE_DYNAMIC_DELEGATE_OneParam(FUserProfileModuleGetUserStateAsyncResponse, const FBP_GetUserStatusResponseData&, response);

UCLASS()
class READYGAMESNETWORK_API UBP_UserProfileModule : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | UserProfile")
    static void GetProfileAsync1(
        FUserProfileModuleGetProfileAsyncResponse onSuccess, FUserProfileModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | UserProfile")
    static void GetProfileAsync2(
        const FString& userId,
        FUserProfileModuleGetProfileAsyncResponse onSuccess, FUserProfileModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | UserProfile")
    static void GetFullUserProfileAsync1(
        FUserProfileModuleGetFullUserProfileAsyncResponse onSuccess, FUserProfileModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | UserProfile")
    static void GetFullUserProfileAsync2(
        const FString& userId,
        FUserProfileModuleGetFullUserProfileAsyncResponse onSuccess, FUserProfileModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | UserProfile")
    static void SearchUsersAsync(
        const FString& nicknameQuery,
        FUserProfileModuleSearchUsersAsyncResponse onSuccess, FUserProfileModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | UserProfile")
    static void GetUserCurrenciesAsync(
        FUserProfileModuleGetUserCurrenciesAsyncResponse onSuccess, FUserProfileModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | UserProfile")
    static void GetUserIdByShortUIDAsync(
        const FString& shortUID,
        FUserProfileModuleGetUserIdByShortUIDAsyncResponse onSuccess, FUserProfileModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | UserProfile")
    static void SetDisplayNameAsync(
        const FString& displayName,
        FUserProfileModuleSetDisplayNameAsyncResponse onSuccess, FUserProfileModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | UserProfile")
    static void SetBioAsync(
        const FString& bio,
        FUserProfileModuleSetBioAsyncResponse onSuccess, FUserProfileModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | UserProfile")
    static void SetDisplayNameAndBioAsync(
        const FString& displayName,
        const FString& bio,
        FUserProfileModuleSetDisplayNameAndBioAsyncResponse onSuccess, FUserProfileModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | UserProfile")
    static void UploadAvatarImageAsync(
        const TArray<uint8>& bytes,
        const FBP_CancellationToken& cancellationToken,
        FUserProfileModuleUploadAvatarImageAsyncResponse onSuccess, FUserProfileModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | UserProfile")
    static void DownloadAvatarImageAsync(
        const FString& userId,
        const EBP_ImageSize& size,
        const FBP_CancellationToken& cancellationToken,
        FUserProfileModuleDownloadAvatarImageAsyncResponse onSuccess, FUserProfileModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | UserProfile")
    static void ChangeAdminStatusByEmailAsync(
        const FString& email,
        bool isAdmin,
        int32 accessLevel,
        FUserProfileModuleChangeAdminStatusByEmailAsyncResponse onSuccess, FUserProfileModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | UserProfile")
    static void ChangeAdminStatusByUserIdAsync(
        const FString& userId,
        bool isAdmin,
        int32 accessLevel,
        FUserProfileModuleChangeAdminStatusByUserIdAsyncResponse onSuccess, FUserProfileModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | UserProfile")
    static void GetUserCustomClaimsByUserIdAsync(
        const FString& userId,
        FUserProfileModuleGetUserCustomClaimsByUserIdAsyncResponse onSuccess, FUserProfileModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | UserProfile")
    static void GetUserCustomClaimsByEmailAsync(
        const FString& email,
        FUserProfileModuleGetUserCustomClaimsByEmailAsyncResponse onSuccess, FUserProfileModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | UserProfile")
    static void SetInvisibleStatusAsync(
        bool invisibleStatus,
        FUserProfileModuleSetInvisibleStatusAsyncResponse onSuccess, FUserProfileModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | UserProfile")
    static void PingAsync(
        FUserProfileModulePingAsyncResponse onSuccess, FUserProfileModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | UserProfile")
    static void SuspendAsync(
        FUserProfileModuleSuspendAsyncResponse onSuccess, FUserProfileModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | UserProfile")
    static void GetUserStateAsync(
        const FString& userId,
        FUserProfileModuleGetUserStateAsyncResponse onSuccess, FUserProfileModuleFailResponse onFail) {
             // TODO
    }
};
