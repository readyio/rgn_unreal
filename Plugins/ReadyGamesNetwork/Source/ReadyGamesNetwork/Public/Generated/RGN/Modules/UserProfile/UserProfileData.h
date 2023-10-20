#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../Currency/Currency.h"
#include "UserData.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace UserProfile {
    struct UserProfileData : public RGN::Modules::UserProfile::UserData {
        string lastAppPackageName;
        bool invisibleStatus = false;
        vector<RGN::Modules::Currency::Currency> currencies;

        friend void to_json(nlohmann::json& nlohmann_json_j, const UserProfileData& nlohmann_json_t) {
            nlohmann_json_j["userId"] = nlohmann_json_t.userId;
            nlohmann_json_j["email"] = nlohmann_json_t.email;
            nlohmann_json_j["displayName"] = nlohmann_json_t.displayName;
            nlohmann_json_j["profilePicture"] = nlohmann_json_t.profilePicture;
            nlohmann_json_j["bio"] = nlohmann_json_t.bio;
            nlohmann_json_j["lastAppPackageName"] = nlohmann_json_t.lastAppPackageName;
            nlohmann_json_j["invisibleStatus"] = nlohmann_json_t.invisibleStatus;
            nlohmann_json_j["currencies"] = nlohmann_json_t.currencies;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, UserProfileData& nlohmann_json_t) {
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
            if (nlohmann_json_j.contains("lastAppPackageName")) {
                nlohmann_json_j.at("lastAppPackageName").get_to(nlohmann_json_t.lastAppPackageName);
            }
            if (nlohmann_json_j.contains("invisibleStatus")) {
                nlohmann_json_j.at("invisibleStatus").get_to(nlohmann_json_t.invisibleStatus);
            }
            if (nlohmann_json_j.contains("currencies")) {
                nlohmann_json_j.at("currencies").get_to(nlohmann_json_t.currencies);
            }
        }
    };
}}}