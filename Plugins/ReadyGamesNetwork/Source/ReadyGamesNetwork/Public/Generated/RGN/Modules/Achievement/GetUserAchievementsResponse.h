#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "UserAchievement.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Achievement {
    struct GetUserAchievementsResponse {
        vector<RGN::Modules::Achievement::UserAchievement> userAchievements;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(GetUserAchievementsResponse, userAchievements)
    };
}}}