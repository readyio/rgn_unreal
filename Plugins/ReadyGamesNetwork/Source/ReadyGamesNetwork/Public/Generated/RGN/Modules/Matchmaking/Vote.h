#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Matchmaking {
    /**
     * Represents a vote in the matchmaking process.
     */
    struct Vote {
        /**
         * Gets or sets the identifier of the voter.
         */
        string voterId;
        /**
         * Gets or sets the identifier of the participant that the vote is for.
         */
        string participantId;

        friend void to_json(nlohmann::json& nlohmann_json_j, const Vote& nlohmann_json_t) {
            nlohmann_json_j["voterId"] = nlohmann_json_t.voterId;
            nlohmann_json_j["participantId"] = nlohmann_json_t.participantId;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, Vote& nlohmann_json_t) {
            if (nlohmann_json_j.contains("voterId")) {
                auto json_voterId = nlohmann_json_j.at("voterId");
                if (!json_voterId.is_null() && json_voterId.is_string()) {
                    json_voterId.get_to(nlohmann_json_t.voterId);
                }
            }
            if (nlohmann_json_j.contains("participantId")) {
                auto json_participantId = nlohmann_json_j.at("participantId");
                if (!json_participantId.is_null() && json_participantId.is_string()) {
                    json_participantId.get_to(nlohmann_json_t.participantId);
                }
            }
        }
    };
}}}