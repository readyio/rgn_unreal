// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../UserProfile/UserProfileData.h"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace GameProgress {
    struct GameUserFullProfileData : public RGN::Modules::UserProfile::UserProfileData {
        int32_t readyWins = 0;
        int32_t readyLosses = 0;
        int32_t readyDraws = 0;
        int32_t readyTrophies = 0;
        int32_t readyAchievements = 0;
        int32_t previousThreshold = 0;
        int32_t nextThreshold = 0;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(GameUserFullProfileData, readyWins, readyLosses, readyDraws, readyTrophies, readyAchievements, previousThreshold, nextThreshold)
    };
}}}