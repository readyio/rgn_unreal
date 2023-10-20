#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "UserProfilePicture.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace UserProfile {
    struct UserData {
        string userId;
        string email;
        string displayName;
        RGN::Modules::UserProfile::UserProfilePicture profilePicture;
        string bio;

        friend void to_json(nlohmann::json& nlohmann_json_j, const UserData& nlohmann_json_t) {
            nlohmann_json_j["userId"] = nlohmann_json_t.userId;
            nlohmann_json_j["email"] = nlohmann_json_t.email;
            nlohmann_json_j["displayName"] = nlohmann_json_t.displayName;
            nlohmann_json_j["profilePicture"] = nlohmann_json_t.profilePicture;
            nlohmann_json_j["bio"] = nlohmann_json_t.bio;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, UserData& nlohmann_json_t) {
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
        }
    };
}}}