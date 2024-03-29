#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "LeaderboardReward.h"
#include "LeaderboardEntry.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Leaderboard {
    /**
     * A class that represents an entry in the leaderboard.
     * This class serves as a Data Transfer Object (DTO) that contains details about a user's entry in the leaderboard.
     */
    struct LeaderboardEntryWithRewards : public RGN::Modules::Leaderboard::LeaderboardEntry {
        /**
         * List of rewards that the user failed to earn. This field is only present if the user failed to earn rewards.
         */
        vector<RGN::Modules::Leaderboard::LeaderboardReward> givenRewards;
        /**
         * List of rewards that the user earned. This field is only present if the user earned rewards.
         */
        vector<RGN::Modules::Leaderboard::LeaderboardReward> failedRewards;

        friend void to_json(nlohmann::json& nlohmann_json_j, const LeaderboardEntryWithRewards& nlohmann_json_t) {
            nlohmann_json_j["userId"] = nlohmann_json_t.userId;
            nlohmann_json_j["displayName"] = nlohmann_json_t.displayName;
            nlohmann_json_j["profilePicture"] = nlohmann_json_t.profilePicture;
            nlohmann_json_j["score"] = nlohmann_json_t.score;
            nlohmann_json_j["formattedScore"] = nlohmann_json_t.formattedScore;
            nlohmann_json_j["place"] = nlohmann_json_t.place;
            nlohmann_json_j["extraData"] = nlohmann_json_t.extraData;
            nlohmann_json_j["givenRewards"] = nlohmann_json_t.givenRewards;
            nlohmann_json_j["failedRewards"] = nlohmann_json_t.failedRewards;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, LeaderboardEntryWithRewards& nlohmann_json_t) {
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
            if (nlohmann_json_j.contains("givenRewards")) {
                auto json_givenRewards = nlohmann_json_j.at("givenRewards");
                if (!json_givenRewards.is_null() && json_givenRewards.is_array()) {
                    json_givenRewards.get_to(nlohmann_json_t.givenRewards);
                }
            }
            if (nlohmann_json_j.contains("failedRewards")) {
                auto json_failedRewards = nlohmann_json_j.at("failedRewards");
                if (!json_failedRewards.is_null() && json_failedRewards.is_array()) {
                    json_failedRewards.get_to(nlohmann_json_t.failedRewards);
                }
            }
        }
    };
}}}