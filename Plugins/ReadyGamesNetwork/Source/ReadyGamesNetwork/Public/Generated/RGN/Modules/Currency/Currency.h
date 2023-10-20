#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Currency {
    struct Currency {
        vector<string> appIds;
        string name;
        int32_t quantity = 0;

        friend void to_json(nlohmann::json& nlohmann_json_j, const Currency& nlohmann_json_t) {
            nlohmann_json_j["appIds"] = nlohmann_json_t.appIds;
            nlohmann_json_j["name"] = nlohmann_json_t.name;
            nlohmann_json_j["quantity"] = nlohmann_json_t.quantity;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, Currency& nlohmann_json_t) {
            if (nlohmann_json_j.contains("appIds")) {
                nlohmann_json_j.at("appIds").get_to(nlohmann_json_t.appIds);
            }
            if (nlohmann_json_j.contains("name")) {
                nlohmann_json_j.at("name").get_to(nlohmann_json_t.name);
            }
            if (nlohmann_json_j.contains("quantity")) {
                nlohmann_json_j.at("quantity").get_to(nlohmann_json_t.quantity);
            }
        }
    };
}}}