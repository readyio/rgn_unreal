#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../../../Core/RGNCore.h"
#include "../../Model/Request/BaseMigrationRequestData.h"
#include "UserData.h"
#include "../Currency/Currency.h"
#include "../../Model/ImageSize.h"
#include "GetUserStatusResponseData.h"
#include <string>
#include <functional>
using namespace std;

namespace RGN { namespace Modules { namespace UserProfile {
    class UserProfileModule {
    public:
        static void GetProfileAsync(
            const function<void(RGN::Modules::UserProfile::UserData result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
            };
        static void GetProfileAsync(
            string userId,
            const function<void(RGN::Modules::UserProfile::UserData result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
            };
        static void GetFullUserProfileAsync(
            const function<void(string result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
            };
        static void GetFullUserProfileAsync(
            string userId,
            const function<void(string result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
            };
        static void SearchUsersAsync(
            string nicknameQuery,
            const function<void(vector<RGN::Modules::UserProfile::UserData> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
            };
        static void GetUserCurrenciesAsync(
            const function<void(vector<RGN::Modules::Currency::Currency> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
            };
        static void GetUserIdByShortUIDAsync(
            string shortUID,
            const function<void(string result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
            };
        static void SetDisplayNameAsync(
            string displayName,
            const function<void(string result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["displayName"] = displayName;
                requestData["version"] = RGN::Model::Request::BaseMigrationRequestData().version;
                RGNCore::CallAPI("user-updateDisplayName", requestData, complete, fail);
            };
        static void SetBioAsync(
            string bio,
            const function<void(string result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["bio"] = bio;
                requestData["version"] = RGN::Model::Request::BaseMigrationRequestData().version;
                RGNCore::CallAPI("user-updateBio", requestData, complete, fail);
            };
        static void SetDisplayNameAndBioAsync(
            string displayName,
            string bio,
            const function<void(string result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
            };
        static void UploadAvatarImageAsync(
            vector<byte> bytes,
            CancellationToken cancellationToken,
            const function<void(bool result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["base64String"] = base64String;
                RGNCore::CallAPI("user-uploadProfilePicture", requestData, complete, fail);
            };
        static void DownloadAvatarImageAsync(
            string userId,
            RGN::Model::ImageSize size,
            CancellationToken cancellationToken,
            const function<void(vector<byte> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
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
                RGNCore::CallAPI("user-changeAdminStatusByEmail", requestData, complete, fail);
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
                RGNCore::CallAPI("user-changeAdminStatusByUserId", requestData, complete, fail);
            };
        static void GetUserCustomClaimsByUserIdAsync(
            string userId,
            const function<void(std::unordered_map<string, string> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["userId"] = userId;
                RGNCore::CallAPI("user-getUserCustomClaimsByUserId", requestData, complete, fail);
            };
        static void GetUserCustomClaimsByEmailAsync(
            string email,
            const function<void(std::unordered_map<string, string> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["email"] = email;
                RGNCore::CallAPI("user-getUserCustomClaimsByEmail", requestData, complete, fail);
            };
        static void SetInvisibleStatusAsync(
            bool invisibleStatus,
            const function<void(void)>& complete,
            const function<void(int httpCode, string error)>& fail) {
            };
        static void PingAsync(
            const function<void(void)>& complete,
            const function<void(int httpCode, string error)>& fail) {
            };
        static void SuspendAsync(
            const function<void(void)>& complete,
            const function<void(int httpCode, string error)>& fail) {
            };
        static void GetUserStateAsync(
            string userId,
            const function<void(RGN::Modules::UserProfile::GetUserStatusResponseData result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
            };
    };
}}}