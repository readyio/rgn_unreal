#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../UserProfile/UserProfileData.h"
#include <string>
#include <vector>
#include <unordered_map>
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

        friend void to_json(nlohmann::json& nlohmann_json_j, const GameUserFullProfileData& nlohmann_json_t) {
            nlohmann_json_j["lastAppPackageName"] = nlohmann_json_t.lastAppPackageName;
            nlohmann_json_j["invisibleStatus"] = nlohmann_json_t.invisibleStatus;
            nlohmann_json_j["currencies"] = nlohmann_json_t.currencies;
            nlohmann_json_j["userId"] = nlohmann_json_t.userId;
            nlohmann_json_j["email"] = nlohmann_json_t.email;
            nlohmann_json_j["displayName"] = nlohmann_json_t.displayName;
            nlohmann_json_j["profilePicture"] = nlohmann_json_t.profilePicture;
            nlohmann_json_j["bio"] = nlohmann_json_t.bio;
            nlohmann_json_j["readyWins"] = nlohmann_json_t.readyWins;
            nlohmann_json_j["readyLosses"] = nlohmann_json_t.readyLosses;
            nlohmann_json_j["readyDraws"] = nlohmann_json_t.readyDraws;
            nlohmann_json_j["readyTrophies"] = nlohmann_json_t.readyTrophies;
            nlohmann_json_j["readyAchievements"] = nlohmann_json_t.readyAchievements;
            nlohmann_json_j["previousThreshold"] = nlohmann_json_t.previousThreshold;
            nlohmann_json_j["nextThreshold"] = nlohmann_json_t.nextThreshold;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, GameUserFullProfileData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("lastAppPackageName")) {
                nlohmann_json_j.at("lastAppPackageName").get_to(nlohmann_json_t.lastAppPackageName);
            }
            if (nlohmann_json_j.contains("invisibleStatus")) {
                nlohmann_json_j.at("invisibleStatus").get_to(nlohmann_json_t.invisibleStatus);
            }
            if (nlohmann_json_j.contains("currencies")) {
                nlohmann_json_j.at("currencies").get_to(nlohmann_json_t.currencies);
            }
            if (nlohmann_json_j.contains("userId")) {
                nlohmann_json_j.at("userId").get_to(nlohmann_json_t.userId);
            }
            if (nlohmann_json_j.contains("email")) {
                nlohmann_json_j.at("email").get_to(nlohmann_json_t.email);
            }
            if (nlohmann_json_j.contains("displayName")) {
                nlohmann_json_j.at("displayName").get_to(nlohmann_json_t.displayName);
            }
            if (nlohmann_json_j.contains("profilePicture")) {
                nlohmann_json_j.at("profilePicture").get_to(nlohmann_json_t.profilePicture);
            }
            if (nlohmann_json_j.contains("bio")) {
                nlohmann_json_j.at("bio").get_to(nlohmann_json_t.bio);
            }
            if (nlohmann_json_j.contains("readyWins")) {
                nlohmann_json_j.at("readyWins").get_to(nlohmann_json_t.readyWins);
            }
            if (nlohmann_json_j.contains("readyLosses")) {
                nlohmann_json_j.at("readyLosses").get_to(nlohmann_json_t.readyLosses);
            }
            if (nlohmann_json_j.contains("readyDraws")) {
                nlohmann_json_j.at("readyDraws").get_to(nlohmann_json_t.readyDraws);
            }
            if (nlohmann_json_j.contains("readyTrophies")) {
                nlohmann_json_j.at("readyTrophies").get_to(nlohmann_json_t.readyTrophies);
            }
            if (nlohmann_json_j.contains("readyAchievements")) {
                nlohmann_json_j.at("readyAchievements").get_to(nlohmann_json_t.readyAchievements);
            }
            if (nlohmann_json_j.contains("previousThreshold")) {
                nlohmann_json_j.at("previousThreshold").get_to(nlohmann_json_t.previousThreshold);
            }
            if (nlohmann_json_j.contains("nextThreshold")) {
                nlohmann_json_j.at("nextThreshold").get_to(nlohmann_json_t.nextThreshold);
            }
        }
    };
}}}