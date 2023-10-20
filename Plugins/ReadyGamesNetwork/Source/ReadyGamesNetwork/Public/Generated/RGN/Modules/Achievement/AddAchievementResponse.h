#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Achievement {
    struct AddAchievementResponse {
        string id;

        friend void to_json(nlohmann::json& nlohmann_json_j, const AddAchievementResponse& nlohmann_json_t) {
            nlohmann_json_j["id"] = nlohmann_json_t.id;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, AddAchievementResponse& nlohmann_json_t) {
            if (nlohmann_json_j.contains("id")) {
                nlohmann_json_j.at("id").get_to(nlohmann_json_t.id);
            }
        }
    };
}}}