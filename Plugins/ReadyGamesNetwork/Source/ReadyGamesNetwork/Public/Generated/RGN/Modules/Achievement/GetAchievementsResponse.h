#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "AchievementData.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Achievement {
    struct GetAchievementsResponse {
        vector<RGN::Modules::Achievement::AchievementData> achievements;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(GetAchievementsResponse, achievements)
    };
}}}