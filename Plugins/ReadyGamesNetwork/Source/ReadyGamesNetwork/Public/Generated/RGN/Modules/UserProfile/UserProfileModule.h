#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../../../Core/RGNCore.h"
#include "../../../../CustomImpl/RGN/Modules/UserProfile/UserProfileModule.h"
#include "../../../../Core/CancellationToken.h"
#include "../../Model/Request/BaseMigrationRequestData.h"
#include "UserData.h"
#include "GetUserProfileRequestData.h"
#include "SearchUsersRequestData.h"
#include "../../Model/Request/BaseRequestData.h"
#include "../Currency/Currency.h"
#include "GetUserIdByShortUIDRequestData.h"
#include "UpdateUserProfileRequestData.h"
#include "../../Model/ImageSize.h"
#include "UserCustomClaims.h"
#include "SetInvisibleStatusRequestData.h"
#include "GetUserStatusResponseData.h"
#include "GetUserStatusRequestData.h"
#include <vector>
#include <unordered_map>
#include <string>
#include <functional>
using namespace std;

namespace RGN { namespace Modules { namespace UserProfile {
    class UserProfileModule {
    public:
        static void GetProfileAsync(
            const function<void(const RGN::Modules::UserProfile::UserData& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                RGN::Modules::UserProfile::UserProfileModuleCustomImpl::GetProfileAsync(
                    complete,
                    fail);
            };
        /**
         * Returns user data for provided user id. The base data contains some basic user info
         * In case you want to request more information (like user coins) please use the
         * M:RGN.Modules.UserProfile.UserProfileModule.GetFullUserProfileAsync``1(System.String) method
         * @param userId - User Id to get the data
         * @return Basic user data
         */
        static void GetProfileAsync(
            const string& userId,
            const function<void(const RGN::Modules::UserProfile::UserData& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                RGN::Modules::UserProfile::GetUserProfileRequestData requestData;
                requestData.userId = userId;
                RGNCore::CallAPI<RGN::Modules::UserProfile::GetUserProfileRequestData, RGN::Modules::UserProfile::UserData>(
                    "user-getProfile",
                    requestData,
                    complete,
                    fail);
            };
        static void GetFullUserProfileAsync(
            const function<void(const string& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                RGN::Modules::UserProfile::UserProfileModuleCustomImpl::GetFullUserProfileAsync(
                    complete,
                    fail);
            };
        static void GetFullUserProfileAsync(
            const string& userId,
            const function<void(const string& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                RGN::Modules::UserProfile::UserProfileModuleCustomImpl::GetFullUserProfileAsync(
                    userId,
                    complete,
                    fail);
            };
        /**
         * Searches for users by their nickname.
         * @param nicknameQuery - The query string to search for in user nicknames.
         * @return A Task containing a List of UserData objects representing the matching users.
         */
        static void SearchUsersAsync(
            const string& nicknameQuery,
            const function<void(const vector<RGN::Modules::UserProfile::UserData>& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                RGN::Modules::UserProfile::SearchUsersRequestData requestData;
                requestData.nicknameQuery = nicknameQuery;
                RGNCore::CallAPI<RGN::Modules::UserProfile::SearchUsersRequestData, vector<RGN::Modules::UserProfile::UserData>>(
                    "user-searchUsers",
                    requestData,
                    complete,
                    fail);
            };
        static void GetUserCurrenciesAsync(
            const function<void(const vector<RGN::Modules::Currency::Currency>& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                RGN::Model::Request::BaseRequestData requestData;
                RGNCore::CallAPI<RGN::Model::Request::BaseRequestData, vector<RGN::Modules::Currency::Currency>>(
                    "user-getUserCurrenciesV2",
                    requestData,
                    complete,
                    fail);
            };
        /**
         * Gets the user ID associated with a short UID.
         * @param shortUID - The short UID to get the associated user ID for.
         * @return A Task containing the user ID associated with the short UID.
         */
        static void GetUserIdByShortUIDAsync(
            const string& shortUID,
            const function<void(const string& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                RGN::Modules::UserProfile::GetUserIdByShortUIDRequestData requestData;
                requestData.shortUID = shortUID;
                RGNCore::CallAPI<RGN::Modules::UserProfile::GetUserIdByShortUIDRequestData>(
                    "user-getUserIdByShortUID",
                    requestData,
                    complete,
                    fail);
            };
        /**
         * Sets the display name of the user.
         * @param displayName - The new display name of the user.
         * @return A Task containing the new display name of the user.
         */
        static void SetDisplayNameAsync(
            const string& displayName,
            const function<void(const string& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                nlohmann::json requestData;
                requestData["displayName"] = displayName;
                requestData["version"] = RGN::Model::Request::BaseMigrationRequestData().version;
                RGNCore::CallAPI<nlohmann::json, nlohmann::json>(
                    "user-updateDisplayName",
                    requestData,
                    [complete] (const nlohmann::json& result) {
                        complete(result["displayName"].template get<string>());
                    },
                    fail);
            };
        /**
         * Sets the bio of the user.
         * @param bio - The new bio of the user.
         * @return A Task containing the new bio of the user.
         */
        static void SetBioAsync(
            const string& bio,
            const function<void(const string& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                nlohmann::json requestData;
                requestData["bio"] = bio;
                requestData["version"] = RGN::Model::Request::BaseMigrationRequestData().version;
                RGNCore::CallAPI<nlohmann::json, nlohmann::json>(
                    "user-updateBio",
                    requestData,
                    [complete] (const nlohmann::json& result) {
                        complete(result["bio"].template get<string>());
                    },
                    fail);
            };
        /**
         * Sets the display name and bio of the user.
         * @param displayName - The new display name of the user.
         * @param bio - The new bio of the user.
         * @return A Task containing the new display name of the user.
         */
        static void SetDisplayNameAndBioAsync(
            const string& displayName,
            const string& bio,
            const function<void(const string& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                RGN::Modules::UserProfile::UpdateUserProfileRequestData requestData;
                requestData.displayName = displayName;
                requestData.bio = bio;
                RGNCore::CallAPI<RGN::Modules::UserProfile::UpdateUserProfileRequestData>(
                    "user-updateProfile",
                    requestData,
                    complete,
                    fail);
            };
        /**
         * Uploads a user's avatar image to the RGNCore backend.
         * @param bytes - The byte array of the avatar image to upload.
         * @param cancellationToken - The cancellation token.
         * @return A boolean indicating whether the upload was successful.
         */
        static void UploadAvatarImageAsync(
            const vector<uint8_t>& bytes,
            const CancellationToken& cancellationToken,
            const function<void(const bool result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                RGN::Modules::UserProfile::UserProfileModuleCustomImpl::UploadAvatarImageAsync(
                    bytes,
                    cancellationToken,
                    complete,
                    fail);
            };
        /**
         * Downloads the avatar image of a user as a byte array from Firebase storage.
         * @param userId - The ID of the user whose avatar image to download.
         * @param size - The size type of avatar image to download.
         * @param cancellationToken - A cancellation token that can be used to cancel the download operation.
         * @return A byte array containing the avatar image, or null if the download fails.
         */
        static void DownloadAvatarImageAsync(
            const string& userId,
            const RGN::Model::ImageSize& size,
            const CancellationToken& cancellationToken,
            const function<void(const vector<uint8_t>& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                RGN::Modules::UserProfile::UserProfileModuleCustomImpl::DownloadAvatarImageAsync(
                    userId,
                    size,
                    cancellationToken,
                    complete,
                    fail);
            };
        /**
         * Changes the admin status and access level of a user by their email.
         * @param email - The email of the user to modify.
         * @param isAdmin - True if the user should be made an admin, false otherwise.
         * @param accessLevel - The new access level for the user.
         * @return A Task containing a Dictionary of key-value pairs representing the updated user data.
         */
        static void ChangeAdminStatusByEmailAsync(
            const string& email,
            const bool isAdmin,
            const int32_t accessLevel,
            const function<void(const RGN::Modules::UserProfile::UserCustomClaims& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                RGN::Modules::UserProfile::UserProfileModuleCustomImpl::ChangeAdminStatusByEmailAsync(
                    email,
                    isAdmin,
                    accessLevel,
                    complete,
                    fail);
            };
        /**
         * Changes the admin status and access level of a user by their user ID.
         * @param userId - The user ID of the user to modify.
         * @param isAdmin - True if the user should be made an admin, false otherwise.
         * @param accessLevel - The new access level for the user.
         * @return A Task containing a Dictionary of key-value pairs representing the updated user data.
         */
        static void ChangeAdminStatusByUserIdAsync(
            const string& userId,
            const bool isAdmin,
            const int32_t accessLevel,
            const function<void(const RGN::Modules::UserProfile::UserCustomClaims& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                RGN::Modules::UserProfile::UserProfileModuleCustomImpl::ChangeAdminStatusByUserIdAsync(
                    userId,
                    isAdmin,
                    accessLevel,
                    complete,
                    fail);
            };
        /**
         * Gets the custom claims for a user by their user ID.
         * @param userId - The user ID of the user to retrieve custom claims for.
         * @return A Task containing a Dictionary of key-value pairs representing the user's custom claims.
         */
        static void GetUserCustomClaimsByUserIdAsync(
            const string& userId,
            const function<void(const RGN::Modules::UserProfile::UserCustomClaims& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                RGN::Modules::UserProfile::UserProfileModuleCustomImpl::GetUserCustomClaimsByUserIdAsync(
                    userId,
                    complete,
                    fail);
            };
        /**
         * Gets the custom claims for a user by their email.
         * @param email - The email of the user to retrieve custom claims for.
         * @return A Task containing a Dictionary of key-value pairs representing the user's custom claims.
         */
        static void GetUserCustomClaimsByEmailAsync(
            const string& email,
            const function<void(const RGN::Modules::UserProfile::UserCustomClaims& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                RGN::Modules::UserProfile::UserProfileModuleCustomImpl::GetUserCustomClaimsByEmailAsync(
                    email,
                    complete,
                    fail);
            };
        /**
         * Sets the invisible status for the current user.
         * @param invisibleStatus - True if the user should be invisible, false otherwise.
         */
        static void SetInvisibleStatusAsync(
            const bool invisibleStatus,
            const function<void(void)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                RGN::Modules::UserProfile::SetInvisibleStatusRequestData requestData;
                requestData.invisibleStatus = invisibleStatus;
                RGNCore::CallAPI<RGN::Modules::UserProfile::SetInvisibleStatusRequestData>(
                    "userStatuses-setInvisibleStatus",
                    requestData,
                    complete,
                    fail);
            };
        static void PingAsync(
            const function<void(void)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                RGN::Model::Request::BaseRequestData requestData;
                RGNCore::CallAPI<RGN::Model::Request::BaseRequestData>(
                    "userStatuses-ping",
                    requestData,
                    complete,
                    fail);
            };
        static void SuspendAsync(
            const function<void(void)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                RGN::Modules::UserProfile::UserProfileModuleCustomImpl::SuspendAsync(
                    complete,
                    fail);
            };
        /**
         * Retrieves the status of a user with the specified user ID.
         * @param userId - The user ID of the user whose status to retrieve.
         * @return A Task containing the status of the user as a GetUserStatusResponseData object.
         */
        static void GetUserStateAsync(
            const string& userId,
            const function<void(const RGN::Modules::UserProfile::GetUserStatusResponseData& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                RGN::Modules::UserProfile::GetUserStatusRequestData requestData;
                requestData.userId = userId;
                RGNCore::CallAPI<RGN::Modules::UserProfile::GetUserStatusRequestData, RGN::Modules::UserProfile::GetUserStatusResponseData>(
                    "userStatuses-getUserState",
                    requestData,
                    complete,
                    fail);
            };
    };
}}}