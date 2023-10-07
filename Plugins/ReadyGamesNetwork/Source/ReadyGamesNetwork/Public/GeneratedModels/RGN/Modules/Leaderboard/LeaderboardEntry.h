// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../UserProfile/UserProfilePicture.h"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace Leaderboard {
struct LeaderboardEntry {
    string userId;
    string displayName;
    RGN::Modules::UserProfile::UserProfilePicture profilePicture;
    int32_t score = 0;
    string formattedScore;
    int32_t place = 0;
    string extraData;
    NLOHMANN_DEFINE_TYPE_INTRUSIVE(LeaderboardEntry, userId, displayName, profilePicture, score, formattedScore, place, extraData)
};
}}}