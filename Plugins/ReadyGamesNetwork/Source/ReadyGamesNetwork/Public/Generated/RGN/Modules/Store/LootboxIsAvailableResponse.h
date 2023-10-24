#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Store {
    struct LootboxIsAvailableResponse {
        bool isAvailable = false;
        int64_t count = 0;

        friend void to_json(nlohmann::json& nlohmann_json_j, const LootboxIsAvailableResponse& nlohmann_json_t) {
            nlohmann_json_j["isAvailable"] = nlohmann_json_t.isAvailable;
            nlohmann_json_j["count"] = nlohmann_json_t.count;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, LootboxIsAvailableResponse& nlohmann_json_t) {
            if (nlohmann_json_j.contains("isAvailable")) {
                auto json_isAvailable = nlohmann_json_j.at("isAvailable");
                if (!json_isAvailable.is_null() && json_isAvailable.is_boolean()) {
                    json_isAvailable.get_to(nlohmann_json_t.isAvailable);
                }
            }
            if (nlohmann_json_j.contains("count")) {
                auto json_count = nlohmann_json_j.at("count");
                if (!json_count.is_null() && json_count.is_number()) {
                    json_count.get_to(nlohmann_json_t.count);
                }
            }
        }
    };
}}}