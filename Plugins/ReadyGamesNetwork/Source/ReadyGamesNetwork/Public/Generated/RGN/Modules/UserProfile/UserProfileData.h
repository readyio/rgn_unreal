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
                auto json_userId = nlohmann_json_j.at("userId");
                if (!json_userId.is_null() && json_userId.is_string()) {
                    json_userId.get_to(nlohmann_json_t.userId);
                }
            }
            if (nlohmann_json_j.contains("email")) {
                auto json_email = nlohmann_json_j.at("email");
                if (!json_email.is_null() && json_email.is_string()) {
                    json_email.get_to(nlohmann_json_t.email);
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
            if (nlohmann_json_j.contains("bio")) {
                auto json_bio = nlohmann_json_j.at("bio");
                if (!json_bio.is_null() && json_bio.is_string()) {
                    json_bio.get_to(nlohmann_json_t.bio);
                }
            }
            if (nlohmann_json_j.contains("lastAppPackageName")) {
                auto json_lastAppPackageName = nlohmann_json_j.at("lastAppPackageName");
                if (!json_lastAppPackageName.is_null() && json_lastAppPackageName.is_string()) {
                    json_lastAppPackageName.get_to(nlohmann_json_t.lastAppPackageName);
                }
            }
            if (nlohmann_json_j.contains("invisibleStatus")) {
                auto json_invisibleStatus = nlohmann_json_j.at("invisibleStatus");
                if (!json_invisibleStatus.is_null() && json_invisibleStatus.is_boolean()) {
                    json_invisibleStatus.get_to(nlohmann_json_t.invisibleStatus);
                }
            }
            if (nlohmann_json_j.contains("currencies")) {
                auto json_currencies = nlohmann_json_j.at("currencies");
                if (!json_currencies.is_null() && json_currencies.is_array()) {
                    json_currencies.get_to(nlohmann_json_t.currencies);
                }
            }
        }
    };
}}}