#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "GamePassUserData.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace GamePass {
    /**
     * Represents the response data received when requesting Game Pass user data.
     */
    struct GetGamePassUserDataResponseData {
        /**
         * The list of GamePassUserData objects detailing the game passes associated with a user.
         */
        vector<RGN::Modules::GamePass::GamePassUserData> gamePasses;

        friend void to_json(nlohmann::json& nlohmann_json_j, const GetGamePassUserDataResponseData& nlohmann_json_t) {
            nlohmann_json_j["gamePasses"] = nlohmann_json_t.gamePasses;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, GetGamePassUserDataResponseData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("gamePasses")) {
                auto json_gamePasses = nlohmann_json_j.at("gamePasses");
                if (!json_gamePasses.is_null() && json_gamePasses.is_array()) {
                    json_gamePasses.get_to(nlohmann_json_t.gamePasses);
                }
            }
        }
    };
}}}