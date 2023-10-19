#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "../../../../Core/BP_CancellationToken.h"
#include "../../../../../Core/CancellationToken.h"
#include "../../../../../Generated/RGN/Modules/UserProfile/UserProfileModule.h"
#include "../../../../../Generated/RGN/Modules/UserProfile/UserData.h"
#include "BP_UserData.h"
#include "../../../../../Generated/RGN/Modules/UserProfile/GetUserProfileRequestData.h"
#include "BP_GetUserProfileRequestData.h"
#include "../../../../../Generated/RGN/Modules/UserProfile/SearchUsersRequestData.h"
#include "BP_SearchUsersRequestData.h"
#include "../../../../../Generated/RGN/Model/Request/BaseRequestData.h"
#include "../../Model/Request/BP_BaseRequestData.h"
#include "../../../../../Generated/RGN/Modules/UserProfile/GetUserIdByShortUIDRequestData.h"
#include "BP_GetUserIdByShortUIDRequestData.h"
#include "../../../../../Generated/RGN/Modules/UserProfile/UpdateUserProfileRequestData.h"
#include "BP_UpdateUserProfileRequestData.h"
#include "../../../../../Generated/RGN/Model/ImageSize.h"
#include "../../Model/BP_ImageSize.h"
#include "../../../../../Generated/RGN/Modules/UserProfile/SetInvisibleStatusRequestData.h"
#include "BP_SetInvisibleStatusRequestData.h"
#include "../../../../../Generated/RGN/Modules/UserProfile/GetUserStatusResponseData.h"
#include "BP_GetUserStatusResponseData.h"
#include "../../../../../Generated/RGN/Modules/UserProfile/GetUserStatusRequestData.h"
#include "BP_GetUserStatusRequestData.h"
#include <vector>
#include <unordered_map>
#include <string>
#include <functional>
#include "BP_UserProfileModule.generated.h"

using namespace std;

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
            string cpp_userId;
			cpp_userId = string(TCHAR_TO_UTF8(*userId));
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
            string cpp_userId;
			cpp_userId = string(TCHAR_TO_UTF8(*userId));
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | UserProfile")
    static void SearchUsersAsync(
        const FString& nicknameQuery,
        FUserProfileModuleSearchUsersAsyncResponse onSuccess, FUserProfileModuleFailResponse onFail) {
            string cpp_nicknameQuery;
			cpp_nicknameQuery = string(TCHAR_TO_UTF8(*nicknameQuery));
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
            string cpp_shortUID;
			cpp_shortUID = string(TCHAR_TO_UTF8(*shortUID));
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | UserProfile")
    static void SetDisplayNameAsync(
        const FString& displayName,
        FUserProfileModuleSetDisplayNameAsyncResponse onSuccess, FUserProfileModuleFailResponse onFail) {
            string cpp_displayName;
			cpp_displayName = string(TCHAR_TO_UTF8(*displayName));
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | UserProfile")
    static void SetBioAsync(
        const FString& bio,
        FUserProfileModuleSetBioAsyncResponse onSuccess, FUserProfileModuleFailResponse onFail) {
            string cpp_bio;
			cpp_bio = string(TCHAR_TO_UTF8(*bio));
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | UserProfile")
    static void SetDisplayNameAndBioAsync(
        const FString& displayName,
        const FString& bio,
        FUserProfileModuleSetDisplayNameAndBioAsyncResponse onSuccess, FUserProfileModuleFailResponse onFail) {
            string cpp_displayName;
            string cpp_bio;
			cpp_displayName = string(TCHAR_TO_UTF8(*displayName));
			cpp_bio = string(TCHAR_TO_UTF8(*bio));
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | UserProfile")
    static void UploadAvatarImageAsync(
        const TArray<uint8>& bytes,
        const FBP_CancellationToken& cancellationToken,
        FUserProfileModuleUploadAvatarImageAsyncResponse onSuccess, FUserProfileModuleFailResponse onFail) {
            vector<uint8_t> cpp_bytes;
            CancellationToken cpp_cancellationToken;
			for (const auto& bytes_item : bytes) {
				uint8_t cpp_bytes_item;
				cpp_bytes_item = bytes_item;
				cpp_bytes.push_back(cpp_bytes_item);
			}
			FBP_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | UserProfile")
    static void DownloadAvatarImageAsync(
        const FString& userId,
        const EBP_ImageSize& size,
        const FBP_CancellationToken& cancellationToken,
        FUserProfileModuleDownloadAvatarImageAsyncResponse onSuccess, FUserProfileModuleFailResponse onFail) {
            string cpp_userId;
            RGN::Model::ImageSize cpp_size;
            CancellationToken cpp_cancellationToken;
			cpp_userId = string(TCHAR_TO_UTF8(*userId));
			cpp_size = static_cast<RGN::Model::ImageSize>(size);
			FBP_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | UserProfile")
    static void ChangeAdminStatusByEmailAsync(
        const FString& email,
        bool isAdmin,
        int32 accessLevel,
        FUserProfileModuleChangeAdminStatusByEmailAsyncResponse onSuccess, FUserProfileModuleFailResponse onFail) {
            string cpp_email;
            bool cpp_isAdmin;
            int32_t cpp_accessLevel;
			cpp_email = string(TCHAR_TO_UTF8(*email));
			cpp_isAdmin = isAdmin;
			cpp_accessLevel = accessLevel;
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | UserProfile")
    static void ChangeAdminStatusByUserIdAsync(
        const FString& userId,
        bool isAdmin,
        int32 accessLevel,
        FUserProfileModuleChangeAdminStatusByUserIdAsyncResponse onSuccess, FUserProfileModuleFailResponse onFail) {
            string cpp_userId;
            bool cpp_isAdmin;
            int32_t cpp_accessLevel;
			cpp_userId = string(TCHAR_TO_UTF8(*userId));
			cpp_isAdmin = isAdmin;
			cpp_accessLevel = accessLevel;
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | UserProfile")
    static void GetUserCustomClaimsByUserIdAsync(
        const FString& userId,
        FUserProfileModuleGetUserCustomClaimsByUserIdAsyncResponse onSuccess, FUserProfileModuleFailResponse onFail) {
            string cpp_userId;
			cpp_userId = string(TCHAR_TO_UTF8(*userId));
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | UserProfile")
    static void GetUserCustomClaimsByEmailAsync(
        const FString& email,
        FUserProfileModuleGetUserCustomClaimsByEmailAsyncResponse onSuccess, FUserProfileModuleFailResponse onFail) {
            string cpp_email;
			cpp_email = string(TCHAR_TO_UTF8(*email));
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | UserProfile")
    static void SetInvisibleStatusAsync(
        bool invisibleStatus,
        FUserProfileModuleSetInvisibleStatusAsyncResponse onSuccess, FUserProfileModuleFailResponse onFail) {
            bool cpp_invisibleStatus;
			cpp_invisibleStatus = invisibleStatus;
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
            string cpp_userId;
			cpp_userId = string(TCHAR_TO_UTF8(*userId));
            // TODO
    }
};
