// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../UserProfile/UserProfileData.h"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace GameProgress {
struct GameUserFullProfileData : public RGN::Modules::UserProfile::UserProfileData {
    int32_t readyWins;
    int32_t readyLosses;
    int32_t readyDraws;
    int32_t readyTrophies;
    int32_t readyAchievements;
    int32_t previousThreshold;
    int32_t nextThreshold;
    NLOHMANN_DEFINE_TYPE_INTRUSIVE(GameUserFullProfileData, readyWins, readyLosses, readyDraws, readyTrophies, readyAchievements, previousThreshold, nextThreshold)
};
}}}