#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../UserProfile/UserProfilePicture.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Leaderboard {
    /**
     * A class that represents an entry in the leaderboard.
     * This class serves as a Data Transfer Object (DTO) that contains details about a user's entry in the leaderboard.
     */
    struct LeaderboardEntry {
        /**
         * Gets the unique identifier of the user.
         */
        string userId;
        /**
         * Gets the displayed name of the user.
         */
        string displayName;
        /**
         * Gets the url of user profile picture.
         */
        RGN::Modules::UserProfile::UserProfilePicture profilePicture;
        /**
         * Gets the score of the user.
         */
        int32_t score = 0;
        /**
         * Gets the score of the user formatted as a string.
         */
        string formattedScore;
        /**
         * Gets or sets the rank or place of the user on the leaderboard.
         */
        int32_t place = 0;
        /**
         * Gets or sets the extra data associated with the user's score entry.
         */
        string extraData;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(LeaderboardEntry, userId, displayName, profilePicture, score, formattedScore, place, extraData)
    };
}}}