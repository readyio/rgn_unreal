#pragma once

#include "../../../../json.hpp"
#include "../../../../Core/RGNCore.h"
#include "../../../../Generated/RGN/Modules/UserProfile/UserProfileModule.h"
#include <string>

namespace RGN { namespace Modules { namespace UserProfile {
	class UserProfileModuleCustomImpl {
	public:
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
	};
}}}