#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "UserAchievement.h"
#include "AchievementData.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Achievement {
    /**
     * Represents achievement data from the backend
     */
    struct AchievementWithUserData : public RGN::Modules::Achievement::AchievementData {
        RGN::Modules::Achievement::UserAchievement _userAchievement;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(AchievementWithUserData, _userAchievement)
    };
}}}