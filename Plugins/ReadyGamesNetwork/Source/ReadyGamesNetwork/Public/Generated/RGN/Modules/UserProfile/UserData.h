#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "UserProfilePicture.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace UserProfile {
    struct UserData {
        string userId;
        string email;
        string displayName;
        RGN::Modules::UserProfile::UserProfilePicture profilePicture;
        string bio;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(UserData, userId, email, displayName, profilePicture, bio)
    };
}}}