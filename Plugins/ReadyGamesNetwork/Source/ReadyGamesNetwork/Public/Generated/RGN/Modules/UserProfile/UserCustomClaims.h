#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace UserProfile {
    struct UserCustomClaims {
        std::unordered_map<string, string> claims;

        friend void to_json(nlohmann::json& nlohmann_json_j, const UserCustomClaims& nlohmann_json_t) {
            nlohmann_json_j["claims"] = nlohmann_json_t.claims;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, UserCustomClaims& nlohmann_json_t) {
            if (nlohmann_json_j.contains("claims")) {
                nlohmann_json_j.at("claims").get_to(nlohmann_json_t.claims);
            }
        }
    };
}}}