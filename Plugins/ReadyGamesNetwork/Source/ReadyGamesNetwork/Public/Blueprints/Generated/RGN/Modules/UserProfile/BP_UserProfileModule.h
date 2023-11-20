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
#include "../../../../../Generated/RGN/Modules/Currency/Currency.h"
#include "../Currency/BP_Currency.h"
#include "../../../../../Generated/RGN/Model/Request/BaseRequestData.h"
#include "../../Model/Request/BP_BaseRequestData.h"
#include "../../../../../Generated/RGN/Modules/UserProfile/GetUserIdByShortUIDRequestData.h"
#include "BP_GetUserIdByShortUIDRequestData.h"
#include "../../../../../Generated/RGN/Modules/UserProfile/UpdateUserProfileRequestData.h"
#include "BP_UpdateUserProfileRequestData.h"
#include "../../../../../Generated/RGN/Model/ImageSize.h"
#include "../../Model/BP_ImageSize.h"
#include "../../../../../Generated/RGN/Modules/UserProfile/UserCustomClaims.h"
#include "BP_UserCustomClaims.h"
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
DECLARE_DYNAMIC_DELEGATE(FUserProfileModuleDeleteUserResponse);

UCLASS()
class READYGAMESNETWORK_API UBP_UserProfileModule : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | UserProfile")
    static void GetProfileAsync(
        FUserProfileModuleGetProfileAsyncResponse onSuccess,
        FUserProfileModuleFailResponse onFail) {
            RGN::Modules::UserProfile::UserProfileModule::GetProfileAsync(
                [onSuccess](RGN::Modules::UserProfile::UserData response) {
                    FBP_UserData bpResponse;
                    FBP_UserData::ConvertToUnrealModel(response, bpResponse);
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                });
    }
    /**
     * Returns user data for provided user id. The base data contains some basic user info
     * In case you want to request more information (like user coins) please use the
     * M:RGN.Modules.UserProfile.UserProfileModule.GetFullUserProfileAsync``1(System.String) method
     * @param userId - User Id to get the data
     * @return Basic user data
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | UserProfile")
    static void GetProfileAsync_UserId(
        FUserProfileModuleGetProfileAsyncResponse onSuccess,
        FUserProfileModuleFailResponse onFail,
        const FString& userId) {
            string cpp_userId;
            cpp_userId = string(TCHAR_TO_UTF8(*userId));
            RGN::Modules::UserProfile::UserProfileModule::GetProfileAsync(
                [onSuccess](RGN::Modules::UserProfile::UserData response) {
                    FBP_UserData bpResponse;
                    FBP_UserData::ConvertToUnrealModel(response, bpResponse);
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_userId);
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | UserProfile")
    static void GetFullUserProfileAsync(
        FUserProfileModuleGetFullUserProfileAsyncResponse onSuccess,
        FUserProfileModuleFailResponse onFail) {
            RGN::Modules::UserProfile::UserProfileModule::GetFullUserProfileAsync(
                [onSuccess](string response) {
                    FString bpResponse;
                    bpResponse = FString(response.c_str());
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                });
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | UserProfile")
    static void GetFullUserProfileAsync_UserId(
        FUserProfileModuleGetFullUserProfileAsyncResponse onSuccess,
        FUserProfileModuleFailResponse onFail,
        const FString& userId) {
            string cpp_userId;
            cpp_userId = string(TCHAR_TO_UTF8(*userId));
            RGN::Modules::UserProfile::UserProfileModule::GetFullUserProfileAsync(
                [onSuccess](string response) {
                    FString bpResponse;
                    bpResponse = FString(response.c_str());
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_userId);
    }
    /**
     * Searches for users by their nickname.
     * @param nicknameQuery - The query string to search for in user nicknames.
     * @return A Task containing a List of UserData objects representing the matching users.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | UserProfile")
    static void SearchUsersAsync(
        FUserProfileModuleSearchUsersAsyncResponse onSuccess,
        FUserProfileModuleFailResponse onFail,
        const FString& nicknameQuery) {
            string cpp_nicknameQuery;
            cpp_nicknameQuery = string(TCHAR_TO_UTF8(*nicknameQuery));
            RGN::Modules::UserProfile::UserProfileModule::SearchUsersAsync(
                [onSuccess](vector<RGN::Modules::UserProfile::UserData> response) {
                    TArray<FBP_UserData> bpResponse;
                    for (const auto& response_item : response) {
                        FBP_UserData b_response_item;
                        FBP_UserData::ConvertToUnrealModel(response_item, b_response_item);
                        bpResponse.Add(b_response_item);
                    }
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_nicknameQuery);
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | UserProfile")
    static void GetUserCurrenciesAsync(
        FUserProfileModuleGetUserCurrenciesAsyncResponse onSuccess,
        FUserProfileModuleFailResponse onFail) {
            RGN::Modules::UserProfile::UserProfileModule::GetUserCurrenciesAsync(
                [onSuccess](vector<RGN::Modules::Currency::Currency> response) {
                    TArray<FBP_Currency> bpResponse;
                    for (const auto& response_item : response) {
                        FBP_Currency b_response_item;
                        FBP_Currency::ConvertToUnrealModel(response_item, b_response_item);
                        bpResponse.Add(b_response_item);
                    }
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                });
    }
    /**
     * Gets the user ID associated with a short UID.
     * @param shortUID - The short UID to get the associated user ID for.
     * @return A Task containing the user ID associated with the short UID.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | UserProfile")
    static void GetUserIdByShortUIDAsync(
        FUserProfileModuleGetUserIdByShortUIDAsyncResponse onSuccess,
        FUserProfileModuleFailResponse onFail,
        const FString& shortUID) {
            string cpp_shortUID;
            cpp_shortUID = string(TCHAR_TO_UTF8(*shortUID));
            RGN::Modules::UserProfile::UserProfileModule::GetUserIdByShortUIDAsync(
                [onSuccess](string response) {
                    FString bpResponse;
                    bpResponse = FString(response.c_str());
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_shortUID);
    }
    /**
     * Sets the display name of the user.
     * @param displayName - The new display name of the user.
     * @return A Task containing the new display name of the user.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | UserProfile")
    static void SetDisplayNameAsync(
        FUserProfileModuleSetDisplayNameAsyncResponse onSuccess,
        FUserProfileModuleFailResponse onFail,
        const FString& displayName) {
            string cpp_displayName;
            cpp_displayName = string(TCHAR_TO_UTF8(*displayName));
            RGN::Modules::UserProfile::UserProfileModule::SetDisplayNameAsync(
                [onSuccess](string response) {
                    FString bpResponse;
                    bpResponse = FString(response.c_str());
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_displayName);
    }
    /**
     * Sets the bio of the user.
     * @param bio - The new bio of the user.
     * @return A Task containing the new bio of the user.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | UserProfile")
    static void SetBioAsync(
        FUserProfileModuleSetBioAsyncResponse onSuccess,
        FUserProfileModuleFailResponse onFail,
        const FString& bio) {
            string cpp_bio;
            cpp_bio = string(TCHAR_TO_UTF8(*bio));
            RGN::Modules::UserProfile::UserProfileModule::SetBioAsync(
                [onSuccess](string response) {
                    FString bpResponse;
                    bpResponse = FString(response.c_str());
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_bio);
    }
    /**
     * Sets the display name and bio of the user.
     * @param displayName - The new display name of the user.
     * @param bio - The new bio of the user.
     * @return A Task containing the new display name of the user.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | UserProfile", meta=(AutoCreateRefTerm="bio"))
    static void SetDisplayNameAndBioAsync(
        FUserProfileModuleSetDisplayNameAndBioAsyncResponse onSuccess,
        FUserProfileModuleFailResponse onFail,
        const FString& displayName,
        const FString& bio = "") {
            string cpp_displayName;
            string cpp_bio;
            cpp_displayName = string(TCHAR_TO_UTF8(*displayName));
            cpp_bio = string(TCHAR_TO_UTF8(*bio));
            RGN::Modules::UserProfile::UserProfileModule::SetDisplayNameAndBioAsync(
                [onSuccess](string response) {
                    FString bpResponse;
                    bpResponse = FString(response.c_str());
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_displayName,
                cpp_bio);
    }
    /**
     * Uploads a user's avatar image to the RGNCore backend.
     * @param bytes - The byte array of the avatar image to upload.
     * @param cancellationToken - The cancellation token.
     * @return A boolean indicating whether the upload was successful.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | UserProfile", meta=(AutoCreateRefTerm="cancellationToken"))
    static void UploadAvatarImageAsync(
        FUserProfileModuleUploadAvatarImageAsyncResponse onSuccess,
        FUserProfileModuleFailResponse onFail,
        const TArray<uint8>& bytes,
        const FBP_CancellationToken& cancellationToken = FBP_CancellationToken()) {
            vector<uint8_t> cpp_bytes;
            CancellationToken cpp_cancellationToken;
            for (const auto& bytes_item : bytes) {
                uint8_t cpp_bytes_item;
                cpp_bytes_item = bytes_item;
                cpp_bytes.push_back(cpp_bytes_item);
            }
            FBP_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::UserProfile::UserProfileModule::UploadAvatarImageAsync(
                [onSuccess](bool response) {
                    bool bpResponse;
                    bpResponse = response;
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_bytes,
                cpp_cancellationToken);
    }
    /**
     * Downloads the avatar image of a user as a byte array from Firebase storage.
     * @param userId - The ID of the user whose avatar image to download.
     * @param size - The size type of avatar image to download.
     * @param cancellationToken - A cancellation token that can be used to cancel the download operation.
     * @return A byte array containing the avatar image, or null if the download fails.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | UserProfile", meta=(AutoCreateRefTerm="cancellationToken"))
    static void DownloadAvatarImageAsync(
        FUserProfileModuleDownloadAvatarImageAsyncResponse onSuccess,
        FUserProfileModuleFailResponse onFail,
        const FString& userId,
        const EBP_ImageSize& size,
        const FBP_CancellationToken& cancellationToken = FBP_CancellationToken()) {
            string cpp_userId;
            RGN::Model::ImageSize cpp_size;
            CancellationToken cpp_cancellationToken;
            cpp_userId = string(TCHAR_TO_UTF8(*userId));
            cpp_size = static_cast<RGN::Model::ImageSize>(size);
            FBP_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::UserProfile::UserProfileModule::DownloadAvatarImageAsync(
                [onSuccess](vector<uint8_t> response) {
                    TArray<uint8> bpResponse;
                    for (const auto& response_item : response) {
                        uint8 b_response_item;
                        b_response_item = response_item;
                        bpResponse.Add(b_response_item);
                    }
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_userId,
                cpp_size,
                cpp_cancellationToken);
    }
    /**
     * Changes the admin status and access level of a user by their email.
     * @param email - The email of the user to modify.
     * @param isAdmin - True if the user should be made an admin, false otherwise.
     * @param accessLevel - The new access level for the user.
     * @return A Task containing a Dictionary of key-value pairs representing the updated user data.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | UserProfile")
    static void ChangeAdminStatusByEmailAsync(
        FUserProfileModuleChangeAdminStatusByEmailAsyncResponse onSuccess,
        FUserProfileModuleFailResponse onFail,
        const FString& email,
        bool isAdmin,
        int32 accessLevel) {
            string cpp_email;
            bool cpp_isAdmin;
            int32_t cpp_accessLevel;
            cpp_email = string(TCHAR_TO_UTF8(*email));
            cpp_isAdmin = isAdmin;
            cpp_accessLevel = accessLevel;
            RGN::Modules::UserProfile::UserProfileModule::ChangeAdminStatusByEmailAsync(
                [onSuccess](RGN::Modules::UserProfile::UserCustomClaims response) {
                    FBP_UserCustomClaims bpResponse;
                    FBP_UserCustomClaims::ConvertToUnrealModel(response, bpResponse);
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_email,
                cpp_isAdmin,
                cpp_accessLevel);
    }
    /**
     * Changes the admin status and access level of a user by their user ID.
     * @param userId - The user ID of the user to modify.
     * @param isAdmin - True if the user should be made an admin, false otherwise.
     * @param accessLevel - The new access level for the user.
     * @return A Task containing a Dictionary of key-value pairs representing the updated user data.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | UserProfile")
    static void ChangeAdminStatusByUserIdAsync(
        FUserProfileModuleChangeAdminStatusByUserIdAsyncResponse onSuccess,
        FUserProfileModuleFailResponse onFail,
        const FString& userId,
        bool isAdmin,
        int32 accessLevel) {
            string cpp_userId;
            bool cpp_isAdmin;
            int32_t cpp_accessLevel;
            cpp_userId = string(TCHAR_TO_UTF8(*userId));
            cpp_isAdmin = isAdmin;
            cpp_accessLevel = accessLevel;
            RGN::Modules::UserProfile::UserProfileModule::ChangeAdminStatusByUserIdAsync(
                [onSuccess](RGN::Modules::UserProfile::UserCustomClaims response) {
                    FBP_UserCustomClaims bpResponse;
                    FBP_UserCustomClaims::ConvertToUnrealModel(response, bpResponse);
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_userId,
                cpp_isAdmin,
                cpp_accessLevel);
    }
    /**
     * Gets the custom claims for a user by their user ID.
     * @param userId - The user ID of the user to retrieve custom claims for.
     * @return A Task containing a Dictionary of key-value pairs representing the user's custom claims.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | UserProfile")
    static void GetUserCustomClaimsByUserIdAsync(
        FUserProfileModuleGetUserCustomClaimsByUserIdAsyncResponse onSuccess,
        FUserProfileModuleFailResponse onFail,
        const FString& userId) {
            string cpp_userId;
            cpp_userId = string(TCHAR_TO_UTF8(*userId));
            RGN::Modules::UserProfile::UserProfileModule::GetUserCustomClaimsByUserIdAsync(
                [onSuccess](RGN::Modules::UserProfile::UserCustomClaims response) {
                    FBP_UserCustomClaims bpResponse;
                    FBP_UserCustomClaims::ConvertToUnrealModel(response, bpResponse);
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_userId);
    }
    /**
     * Gets the custom claims for a user by their email.
     * @param email - The email of the user to retrieve custom claims for.
     * @return A Task containing a Dictionary of key-value pairs representing the user's custom claims.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | UserProfile")
    static void GetUserCustomClaimsByEmailAsync(
        FUserProfileModuleGetUserCustomClaimsByEmailAsyncResponse onSuccess,
        FUserProfileModuleFailResponse onFail,
        const FString& email) {
            string cpp_email;
            cpp_email = string(TCHAR_TO_UTF8(*email));
            RGN::Modules::UserProfile::UserProfileModule::GetUserCustomClaimsByEmailAsync(
                [onSuccess](RGN::Modules::UserProfile::UserCustomClaims response) {
                    FBP_UserCustomClaims bpResponse;
                    FBP_UserCustomClaims::ConvertToUnrealModel(response, bpResponse);
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_email);
    }
    /**
     * Sets the invisible status for the current user.
     * @param invisibleStatus - True if the user should be invisible, false otherwise.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | UserProfile")
    static void SetInvisibleStatusAsync(
        FUserProfileModuleSetInvisibleStatusAsyncResponse onSuccess,
        FUserProfileModuleFailResponse onFail,
        bool invisibleStatus) {
            bool cpp_invisibleStatus;
            cpp_invisibleStatus = invisibleStatus;
            RGN::Modules::UserProfile::UserProfileModule::SetInvisibleStatusAsync(
                [onSuccess]() {
                    onSuccess.ExecuteIfBound();
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_invisibleStatus);
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | UserProfile")
    static void PingAsync(
        FUserProfileModulePingAsyncResponse onSuccess,
        FUserProfileModuleFailResponse onFail) {
            RGN::Modules::UserProfile::UserProfileModule::PingAsync(
                [onSuccess]() {
                    onSuccess.ExecuteIfBound();
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                });
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | UserProfile")
    static void SuspendAsync(
        FUserProfileModuleSuspendAsyncResponse onSuccess,
        FUserProfileModuleFailResponse onFail) {
            RGN::Modules::UserProfile::UserProfileModule::SuspendAsync(
                [onSuccess]() {
                    onSuccess.ExecuteIfBound();
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                });
    }
    /**
     * Retrieves the status of a user with the specified user ID.
     * @param userId - The user ID of the user whose status to retrieve.
     * @return A Task containing the status of the user as a GetUserStatusResponseData object.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | UserProfile")
    static void GetUserStateAsync(
        FUserProfileModuleGetUserStateAsyncResponse onSuccess,
        FUserProfileModuleFailResponse onFail,
        const FString& userId) {
            string cpp_userId;
            cpp_userId = string(TCHAR_TO_UTF8(*userId));
            RGN::Modules::UserProfile::UserProfileModule::GetUserStateAsync(
                [onSuccess](RGN::Modules::UserProfile::GetUserStatusResponseData response) {
                    FBP_GetUserStatusResponseData bpResponse;
                    FBP_GetUserStatusResponseData::ConvertToUnrealModel(response, bpResponse);
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_userId);
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | UserProfile")
    static void DeleteUser(
        FUserProfileModuleDeleteUserResponse onSuccess,
        FUserProfileModuleFailResponse onFail) {
            RGN::Modules::UserProfile::UserProfileModule::DeleteUser(
                [onSuccess]() {
                    onSuccess.ExecuteIfBound();
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                });
    }
};
