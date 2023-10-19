#pragma once

#include "../../../../json.hpp"
#include "../../../../base64.hpp"
#include "../../../../Core/RGNCore.h"
#include "../../../../Generated/RGN/Modules/UserProfile/UserProfileModule.h"
#include <string>

namespace RGN { namespace Modules { namespace UserProfile {
	class UserProfileModuleCustomImpl {
	public:
        static void GetProfileAsync(
            const function<void(RGN::Modules::UserProfile::UserData result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                RGN::Modules::UserProfile::UserProfileModule::GetProfileAsync(
                    RGNCore::GetUserId(),
                    complete,
                    fail
                );
            };
        static void GetFullUserProfileAsync(
            const function<void(string result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                GetFullUserProfileAsync(RGNCore::GetUserId(), complete, fail);
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
                    [complete](string result) {
                        complete(result);
                    },
                    fail
                );
            };
        static void UploadAvatarImageAsync(
            vector<uint8_t> bytes,
            CancellationToken cancellationToken,
            const function<void(bool result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["base64String"] = RGN::Base64::base64_encode(&bytes[0], bytes.size());
                RGNCore::CallAPI<nlohmann::json>(
                    "user-uploadProfilePicture",
                    requestData,
                    [complete]() {
                        complete(true);
                    },
                    fail
                );
            };
        static void DownloadAvatarImageAsync(
            std::string userId,
            RGN::Model::ImageSize size,
            CancellationToken cancellationToken,
            const std::function<void(std::vector<uint8_t> result)>& complete,
            const std::function<void(int httpCode, std::string error)>& fail) {
                UserProfileModule::GetProfileAsync([complete, fail, size]
                (RGN::Modules::UserProfile::UserData userData) {
                    RGN::Modules::UserProfile::UserProfilePicture userProfilePicture = userData.profilePicture;

                    std::string pictureUrl = "";
                    switch (size) {
                    case RGN::Model::ImageSize::Large:
                        pictureUrl = userProfilePicture.source;
                        break;
                    case RGN::Model::ImageSize::Medium:
                        pictureUrl = userProfilePicture.source;
                        break;
                    case RGN::Model::ImageSize::Small:
                        pictureUrl = userProfilePicture.source;
                        break;
                    default:
                        pictureUrl = userProfilePicture.source;
                        break;
                    }

                    HttpHeaders headers;
                    headers.add("Content-type", "application/json");
                    Http::Request(pictureUrl, HttpMethod::GET, headers, "", [complete, fail](HttpResponse httpResponse) {
                        int httpResponseCode = httpResponse.getResponseCode();
                        std::string httpResponseBody = httpResponse.getResponseBody();

                        if (httpResponseCode != 200) {
                            fail(httpResponseCode, httpResponseBody);
                            return;
                        }

                        std::vector<uint8_t> byteVector;
                        for (char strChar : httpResponseBody) {
                            byteVector.push_back(static_cast<uint8_t>(strChar));
                        }
                        complete(byteVector);
                    });
                }, fail);
            };
        static void ChangeAdminStatusByEmailAsync(
            string email,
            bool isAdmin,
            int32_t accessLevel,
            const function<void(RGN::Modules::UserProfile::UserCustomClaims result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json bodyJson;
                bodyJson["email"] = email;
                bodyJson["isAdmin"] = isAdmin;
                bodyJson["accessLevel"] = accessLevel;
                RGNCore::CallAPI<nlohmann::json, nlohmann::json>
                ("user-changeAdminStatusByEmail", bodyJson,
                    [complete](nlohmann::json response) {
                        RGN::Modules::UserProfile::UserCustomClaims userCustomClaims;
                        userCustomClaims.claims = response.template get<std::unordered_map<std::string, std::string>>();
                        complete(userCustomClaims);
                    },
                    fail
                );
            };
        static void ChangeAdminStatusByUserIdAsync(
            string userId,
            bool isAdmin,
            int32_t accessLevel,
            const function<void(RGN::Modules::UserProfile::UserCustomClaims result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json bodyJson;
                bodyJson["userId"] = userId;
                bodyJson["isAdmin"] = isAdmin;
                bodyJson["accessLevel"] = accessLevel;
                RGNCore::CallAPI<nlohmann::json, nlohmann::json>
                ("user-changeAdminStatusByUserId", bodyJson,
                    [complete](nlohmann::json response) {
                        RGN::Modules::UserProfile::UserCustomClaims userCustomClaims;
                        userCustomClaims.claims = response.template get<std::unordered_map<std::string, std::string>>();
                        complete(userCustomClaims);
                    },
                    fail
                );
            };
        static void GetUserCustomClaimsByUserIdAsync(
            string userId,
            const function<void(RGN::Modules::UserProfile::UserCustomClaims result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json bodyJson;
                bodyJson["userId"] = userId;
                RGNCore::CallAPI<nlohmann::json, nlohmann::json>
                ("user-getUserCustomClaimsByUserId", bodyJson,
                    [complete](nlohmann::json response) {
                        RGN::Modules::UserProfile::UserCustomClaims userCustomClaims;
                        userCustomClaims.claims = response.template get<std::unordered_map<std::string, std::string>>();
                        complete(userCustomClaims);
                    },
                    fail
                );
            };
        static void GetUserCustomClaimsByEmailAsync(
            string email,
            const function<void(RGN::Modules::UserProfile::UserCustomClaims result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json bodyJson;
                bodyJson["email"] = email;
                RGNCore::CallAPI<nlohmann::json, nlohmann::json>
                ("user-getUserCustomClaimsByEmail", bodyJson,
                    [complete](nlohmann::json response) {
                        RGN::Modules::UserProfile::UserCustomClaims userCustomClaims;
                        userCustomClaims.claims = response.template get<std::unordered_map<std::string, std::string>>();
                        complete(userCustomClaims);
                    },
                    fail
                );
            };
        static void SuspendAsync(
            const function<void(void)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                RGNCore::CallAPI("userStatuses-suspend", complete, fail);
            };
	};
}}}