#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace GameProgress {
    struct GameProgress {
        int32_t level = 0;

        friend void to_json(nlohmann::json& nlohmann_json_j, const GameProgress& nlohmann_json_t) {
            nlohmann_json_j["level"] = nlohmann_json_t.level;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, GameProgress& nlohmann_json_t) {
            if (nlohmann_json_j.contains("level")) {
                nlohmann_json_j.at("level").get_to(nlohmann_json_t.level);
            }
        }
    };
}}}