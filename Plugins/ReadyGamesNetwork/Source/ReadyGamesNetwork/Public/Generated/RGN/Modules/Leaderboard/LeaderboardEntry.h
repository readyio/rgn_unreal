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
                auto json_userId = nlohmann_json_j.at("userId");
                if (!json_userId.is_null() && json_userId.is_string()) {
                    json_userId.get_to(nlohmann_json_t.userId);
                }
            }
            if (nlohmann_json_j.contains("displayName")) {
                auto json_displayName = nlohmann_json_j.at("displayName");
                if (!json_displayName.is_null() && json_displayName.is_string()) {
                    json_displayName.get_to(nlohmann_json_t.displayName);
                }
            }
            if (nlohmann_json_j.contains("profilePicture")) {
                auto json_profilePicture = nlohmann_json_j.at("profilePicture");
                if (!json_profilePicture.is_null()) {
                    json_profilePicture.get_to(nlohmann_json_t.profilePicture);
                }
            }
            if (nlohmann_json_j.contains("score")) {
                auto json_score = nlohmann_json_j.at("score");
                if (!json_score.is_null() && json_score.is_number()) {
                    json_score.get_to(nlohmann_json_t.score);
                }
            }
            if (nlohmann_json_j.contains("formattedScore")) {
                auto json_formattedScore = nlohmann_json_j.at("formattedScore");
                if (!json_formattedScore.is_null() && json_formattedScore.is_string()) {
                    json_formattedScore.get_to(nlohmann_json_t.formattedScore);
                }
            }
            if (nlohmann_json_j.contains("place")) {
                auto json_place = nlohmann_json_j.at("place");
                if (!json_place.is_null() && json_place.is_number()) {
                    json_place.get_to(nlohmann_json_t.place);
                }
            }
            if (nlohmann_json_j.contains("extraData")) {
                auto json_extraData = nlohmann_json_j.at("extraData");
                if (!json_extraData.is_null() && json_extraData.is_string()) {
                    json_extraData.get_to(nlohmann_json_t.extraData);
                }
            }
        }
    };
}}}