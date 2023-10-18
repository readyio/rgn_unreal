#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../../../Core/RGNCore.h"
#include "../../../../CustomImpl/RGN/Modules/UserProfile\UserProfileModule.h"
#include "../../Model/Request/BaseMigrationRequestData.h"
#include "UserData.h"
#include "GetUserProfileRequestData.h"
#include "SearchUsersRequestData.h"
#include "../../Model/Request/BaseRequestData.h"
#include "../Currency/Currency.h"
#include "GetUserIdByShortUIDRequestData.h"
#include "UpdateUserProfileRequestData.h"
#include "../../Model/ImageSize.h"
#include "SetInvisibleStatusRequestData.h"
#include "GetUserStatusResponseData.h"
#include "GetUserStatusRequestData.h"
#include <string>
#include <functional>
using namespace std;

namespace RGN { namespace Modules { namespace UserProfile {
    class UserProfileModule {
    public:
        static void GetProfileAsync(
            const function<void(RGN::Modules::UserProfile::UserData result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                // Request parameters are null
            };
        static void GetProfileAsync(
            string userId,
            const function<void(RGN::Modules::UserProfile::UserData result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                RGN::Modules::UserProfile::GetUserProfileRequestData requestData;
                requestData.userId = userId;
                RGNCore::CallAPI<RGN::Modules::UserProfile::GetUserProfileRequestData, RGN::Modules::UserProfile::UserData>(
                    "user-getProfile",
                    requestData,
                    complete,
                    fail);
            };
        static void GetFullUserProfileAsync(
            const function<void(string result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                // Request parameters are null
            };
        static void GetFullUserProfileAsync(
            string userId,
            const function<void(string result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                RGN::Modules::UserProfile::GetUserProfileRequestData requestData;
                requestData.userId = userId;
                RGNCore::CallAPI<RGN::Modules::UserProfile::GetUserProfileRequestData, string>(
                    "user-getFullProfile",
                    requestData,
                    [complete] (string result) {
                        complete(getFullProfile.CallAsync<GetUserProfileRequestData, TFullProfileData>(new GetUserProfileRequestData() {
                userId = userId
            }));
                    },
                    fail);
            };
        static void SearchUsersAsync(
            string nicknameQuery,
            const function<void(vector<RGN::Modules::UserProfile::UserData> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                RGN::Modules::UserProfile::SearchUsersRequestData requestData;
                requestData.nicknameQuery = nicknameQuery;
                RGNCore::CallAPI<RGN::Modules::UserProfile::SearchUsersRequestData, vector<RGN::Modules::UserProfile::UserData>>(
                    "user-searchUsers",
                    requestData,
                    [complete] (vector<RGN::Modules::UserProfile::UserData> result) {
                        complete(result);
                    },
                    fail);
            };
        static void GetUserCurrenciesAsync(
            const function<void(vector<RGN::Modules::Currency::Currency> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                RGN::Model::Request::BaseRequestData requestData;
                RGNCore::CallAPI<RGN::Model::Request::BaseRequestData, vector<RGN::Modules::Currency::Currency>>(
                    "user-getUserCurrenciesV2",
                    requestData,
                    [complete] (vector<RGN::Modules::Currency::Currency> result) {
                        complete(result);
                    },
                    fail);
            };
        static void GetUserIdByShortUIDAsync(
            string shortUID,
            const function<void(string result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                RGN::Modules::UserProfile::GetUserIdByShortUIDRequestData requestData;
                requestData.shortUID = shortUID;
                RGNCore::CallAPI<RGN::Modules::UserProfile::GetUserIdByShortUIDRequestData, string>(
                    "user-getUserIdByShortUID",
                    requestData,
                    [complete] (string result) {
                        complete(result);
                    },
                    fail);
            };
        static void SetDisplayNameAsync(
            string displayName,
            const function<void(string result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["displayName"] = displayName;
                requestData["version"] = RGN::Model::Request::BaseMigrationRequestData().version;
                RGNCore::CallAPI(
                    "user-updateDisplayName",
                    requestData,
                    [complete] (nlohmann::json result) {
                        complete(result["displayName"] as string);
                    },
                    fail);
            };
        static void SetBioAsync(
            string bio,
            const function<void(string result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["bio"] = bio;
                requestData["version"] = RGN::Model::Request::BaseMigrationRequestData().version;
                RGNCore::CallAPI(
                    "user-updateBio",
                    requestData,
                    [complete] (nlohmann::json result) {
                        complete(result["bio"] as string);
                    },
                    fail);
            };
        static void SetDisplayNameAndBioAsync(
            string displayName,
            string bio,
            const function<void(string result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                RGN::Modules::UserProfile::UpdateUserProfileRequestData requestData;
                requestData.displayName = displayName;
                requestData.bio = bio;
                RGNCore::CallAPI<RGN::Modules::UserProfile::UpdateUserProfileRequestData, string>(
                    "user-updateProfile",
                    requestData,
                    [complete] (string result) {
                        complete(function.CallAsync<UpdateUserProfileRequestData, string>(
                new UpdateUserProfileRequestData() { displayName = displayName, bio = bio }));
                    },
                    fail);
            };
        static void UploadAvatarImageAsync(
            vector<uint8_t> bytes,
            CancellationToken cancellationToken,
            const function<void(bool result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["base64String"] = base64String;
                RGNCore::CallAPI(
                    "user-uploadProfilePicture",
                    requestData,
                    [complete] (nlohmann::json result) {
                        complete(true);
                    },
                    fail);
            };
        static void DownloadAvatarImageAsync(
            string userId,
            RGN::Model::ImageSize size,
            CancellationToken cancellationToken,
            const function<void(vector<uint8_t> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                RGN::Modules::UserProfile::UserProfileModuleCustomImpl::DownloadAvatarImageAsync(
                    userId,
                    size,
                    cancellationToken,
                    complete,
                    fail);
            };
        static void ChangeAdminStatusByEmailAsync(
            string email,
            bool isAdmin,
            int32_t accessLevel,
            const function<void(std::unordered_map<string, string> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["email"] = email;
                requestData["admin"] = isAdmin;
                requestData["accessLevel"] = accessLevel;
                RGNCore::CallAPI(
                    "user-changeAdminStatusByEmail",
                    requestData,
                    [complete] (nlohmann::json result) {
                        complete(result);
                    },
                    fail);
            };
        static void ChangeAdminStatusByUserIdAsync(
            string userId,
            bool isAdmin,
            int32_t accessLevel,
            const function<void(std::unordered_map<string, string> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["userId"] = userId;
                requestData["admin"] = isAdmin;
                requestData["accessLevel"] = accessLevel;
                RGNCore::CallAPI(
                    "user-changeAdminStatusByUserId",
                    requestData,
                    [complete] (nlohmann::json result) {
                        complete(result);
                    },
                    fail);
            };
        static void GetUserCustomClaimsByUserIdAsync(
            string userId,
            const function<void(std::unordered_map<string, string> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["userId"] = userId;
                RGNCore::CallAPI(
                    "user-getUserCustomClaimsByUserId",
                    requestData,
                    [complete] (nlohmann::json result) {
                        complete(result);
                    },
                    fail);
            };
        static void GetUserCustomClaimsByEmailAsync(
            string email,
            const function<void(std::unordered_map<string, string> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["email"] = email;
                RGNCore::CallAPI(
                    "user-getUserCustomClaimsByEmail",
                    requestData,
                    [complete] (nlohmann::json result) {
                        complete(result);
                    },
                    fail);
            };
        static void SetInvisibleStatusAsync(
            bool invisibleStatus,
            const function<void(void)>& complete,
            const function<void(int httpCode, string error)>& fail) {
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
            const function<void(int httpCode, string error)>& fail) {
                RGN::Model::Request::BaseRequestData requestData;
                RGNCore::CallAPI(
                    "userStatuses-ping",
                    requestData,
                    complete,
                    fail);
            };
        static void SuspendAsync(
            const function<void(void)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                // Request parameters are null
            };
        static void GetUserStateAsync(
            string userId,
            const function<void(RGN::Modules::UserProfile::GetUserStatusResponseData result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
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