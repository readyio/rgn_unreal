#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Leaderboard {
    struct SetScoreResponseData {
        int32_t place = 0;

        friend void to_json(nlohmann::json& nlohmann_json_j, const SetScoreResponseData& nlohmann_json_t) {
            nlohmann_json_j["place"] = nlohmann_json_t.place;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, SetScoreResponseData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("place")) {
                auto json_place = nlohmann_json_j.at("place");
                if (!json_place.is_null() && json_place.is_number()) {
                    json_place.get_to(nlohmann_json_t.place);
                }
            }
        }
    };
}}}