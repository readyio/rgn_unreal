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
        static void GetUserCustomClaimsByUserIdAsync(
            const string& userId,
            const function<void(const RGN::Modules::UserProfile::UserCustomClaims& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                RGN::Modules::UserProfile::UserProfileModuleCustomImpl::GetUserCustomClaimsByUserIdAsync(
                    userId,
                    complete,
                    fail);
            };
        static void GetUserCustomClaimsByEmailAsync(
            const string& email,
            const function<void(const RGN::Modules::UserProfile::UserCustomClaims& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                RGN::Modules::UserProfile::UserProfileModuleCustomImpl::GetUserCustomClaimsByEmailAsync(
                    email,
                    complete,
                    fail);
            };
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