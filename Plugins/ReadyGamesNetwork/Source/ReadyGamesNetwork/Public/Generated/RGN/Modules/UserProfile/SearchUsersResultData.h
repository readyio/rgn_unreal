#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "UserData.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace UserProfile {
    struct SearchUsersResultData {
        vector<RGN::Modules::UserProfile::UserData> queryResult;

        friend void to_json(nlohmann::json& nlohmann_json_j, const SearchUsersResultData& nlohmann_json_t) {
            nlohmann_json_j["queryResult"] = nlohmann_json_t.queryResult;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, SearchUsersResultData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("queryResult")) {
                nlohmann_json_j.at("queryResult").get_to(nlohmann_json_t.queryResult);
            }
        }
    };
}}}