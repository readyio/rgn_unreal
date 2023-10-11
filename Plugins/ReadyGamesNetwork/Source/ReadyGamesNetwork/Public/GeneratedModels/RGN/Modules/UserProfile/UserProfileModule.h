#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "UserData.h"
#include "TFullProfileData.h"
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
            const function<void(RGN::Modules::UserProfile::UserData& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void GetProfileAsync(
            string& userId,
            const function<void(RGN::Modules::UserProfile::UserData& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        template<class T>
        static void GetFullUserProfileAsync(
            const function<void(T result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        template<class T>
        static void GetFullUserProfileAsync(
            string& userId,
            const function<void(T result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void SearchUsersAsync(
            string& nicknameQuery,
            const function<void(vector<RGN::Modules::UserProfile::UserData>& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void GetUserCurrenciesAsync(
            const function<void(vector<RGN::Modules::Currency::Currency>& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void GetUserIdByShortUIDAsync(
            string& shortUID,
            const function<void(string& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void SetDisplayNameAsync(
            string& displayName,
            const function<void(string& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void SetBioAsync(
            string& bio,
            const function<void(string& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void SetDisplayNameAndBioAsync(
            string& displayName,
            string& bio,
            const function<void(string& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void UploadAvatarImageAsync(
            vector<byte>& bytes,
            System::Threading::CancellationToken& cancellationToken,
            const function<void(bool result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void DownloadAvatarImageAsync(
            string& userId,
            RGN::Model::ImageSize& size,
            System::Threading::CancellationToken& cancellationToken,
            const function<void(vector<byte>& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void ChangeAdminStatusByEmailAsync(
            string& email,
            bool isAdmin,
            int32_t accessLevel,
            const function<void(std::unordered_map<string, json>& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void ChangeAdminStatusByUserIdAsync(
            string& userId,
            bool isAdmin,
            int32_t accessLevel,
            const function<void(std::unordered_map<string, json>& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void GetUserCustomClaimsByUserIdAsync(
            string& userId,
            const function<void(std::unordered_map<string, json>& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void GetUserCustomClaimsByEmailAsync(
            string& email,
            const function<void(std::unordered_map<string, json>& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void SetInvisibleStatusAsync(
            bool invisibleStatus,
            const function<void(void)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void PingAsync(
            const function<void(void)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void SuspendAsync(
            const function<void(void)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void GetUserStateAsync(
            string& userId,
            const function<void(RGN::Modules::UserProfile::GetUserStatusResponseData& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
    };
}}}