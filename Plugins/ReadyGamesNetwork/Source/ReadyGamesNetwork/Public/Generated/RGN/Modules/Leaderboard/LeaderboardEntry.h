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

        friend void to_json(nlohmann::json& nlohmann_json_j, const LeaderboardEntry& nlohmann_json_t) {
            nlohmann_json_j["userId"] = nlohmann_json_t.userId;
            nlohmann_json_j["displayName"] = nlohmann_json_t.displayName;
            nlohmann_json_j["profilePicture"] = nlohmann_json_t.profilePicture;
            nlohmann_json_j["score"] = nlohmann_json_t.score;
            nlohmann_json_j["formattedScore"] = nlohmann_json_t.formattedScore;
            nlohmann_json_j["place"] = nlohmann_json_t.place;
            nlohmann_json_j["extraData"] = nlohmann_json_t.extraData;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, LeaderboardEntry& nlohmann_json_t) {
            if (nlohmann_json_j.contains("userId")) {
                nlohmann_json_j.at("userId").get_to(nlohmann_json_t.userId);
            }
            if (nlohmann_json_j.contains("displayName")) {
                nlohmann_json_j.at("displayName").get_to(nlohmann_json_t.displayName);
            }
            if (nlohmann_json_j.contains("profilePicture")) {
                nlohmann_json_j.at("profilePicture").get_to(nlohmann_json_t.profilePicture);
            }
            if (nlohmann_json_j.contains("score")) {
                nlohmann_json_j.at("score").get_to(nlohmann_json_t.score);
            }
            if (nlohmann_json_j.contains("formattedScore")) {
                nlohmann_json_j.at("formattedScore").get_to(nlohmann_json_t.formattedScore);
            }
            if (nlohmann_json_j.contains("place")) {
                nlohmann_json_j.at("place").get_to(nlohmann_json_t.place);
            }
            if (nlohmann_json_j.contains("extraData")) {
                nlohmann_json_j.at("extraData").get_to(nlohmann_json_t.extraData);
            }
        }
    };
}}}