#pragma once

#include "../../../../json.hpp"
#include "../../../../Core/RGNCore.h"
#include "../../../../Generated/RGN/Modules/UserProfile/UserProfileModule.h"
#include <string>

using namespace std;

namespace RGN { namespace Modules { namespace UserProfile {
	class UserProfileModuleCustomImpl {
	public:
        static void DownloadAvatarImageAsync(
            string userId,
            RGN::Model::ImageSize size,
            CancellationToken cancellationToken,
            const function<void(vector<uint8_t> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                // TODO
            };
	};
}}}