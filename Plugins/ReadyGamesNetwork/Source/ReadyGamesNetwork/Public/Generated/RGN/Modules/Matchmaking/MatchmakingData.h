#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "Vote.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Matchmaking {
    /**
     * Encapsulates all data necessary to create, manage and finalize a matchmaking process in the Ready Games Network (RGN).
     * This data includes match configuration, participant data, voting data, and match lifecycle timestamps.
     */
    struct MatchmakingData {
        /**
         * Unique identifier of the matchmaking process.
         */
        string id;
        /**
         * Identifier of the application where the matchmaking process is running.
         */
        string appId;
        /**
         * Specifies the type of the match. Currently, only "default" is supported.
         */
        string type;
        /**
         * Defines how the match is finished.
         * It can be "manual" (requires calling M:RGN.Modules.Matchmaking.MatchmakingModule.FinishMatchAsync(System.String,System.Threading.CancellationToken) method), 
         * "scoreSubmitBased" (automatically finishes once all participants submit their scores by using - this is default value
         * M:RGN.Modules.Matchmaking.MatchmakingModule.SubmitMatchScoreAsync(System.String,System.Int64,System.Threading.CancellationToken) method),
         * or "timeBased" (automatically finishes based on time condition).
         */
        string finishType;
        /**
         * Defines how the match is started.
         * It can be "manual" (needs to be started by calling M:RGN.Modules.Matchmaking.MatchmakingModule.StartMatchAsync(System.String,System.Threading.CancellationToken) method), 
         * "matchFillBased" (automatically starts once all participant slots are filled) - this is default value,
         * or "timeBased" (automatically starts based on time condition).
         */
        string startType;
        /**
         * Specifies the maximum number of users that can participate in the matchmaking process. Default is 2.
         */
        int32_t maxUsers = 0;
        /**
         * Indicates whether the matchmaking process has been started.
         */
        bool isStarted = false;
        /**
         * Determines whether voting is enabled during the matchmaking process.
         * Default is false
         */
        bool votingEnabled = false;
        /**
         * Specifies whether a user can vote only once during the matchmaking process.
         * Default is true
         */
        bool oncePerUserVoting = false;
        /**
         * The identifier of the user who initiated the matchmaking process.
         */
        string createdBy;
        /**
         * The identifier of the user who updated the matchmaking process data.
         */
        string updatedBy;
        /**
         * The timestamp representing when the match was created.
         * in milliseconds since midnight, January 1, 1970 UTC.
         * Refer to T:RGN.Utility.DateTimeUtility for helper methods.
         */
        int64_t createdAt = 0;
        /**
         * The timestamp representing when the matchmaking data was last updated.
         * in milliseconds since midnight, January 1, 1970 UTC.
         * Refer to T:RGN.Utility.DateTimeUtility for helper methods.
         */
        int64_t updatedAt = 0;
        /**
         * A list of identifiers of users who are participating in the matchmaking process.
         */
        vector<string> participants;
        /**
         * A list of votes cast during the matchmaking process.
         */
        vector<RGN::Modules::Matchmaking::Vote> votes;
        /**
         * A dictionary mapping the participant identifiers to their respective scores in the matchmaking process.
         */
        std::unordered_map<string, int64_t> participantsScore;
        /**
         * A dictionary mapping the participant identifiers to their respective optional payload data in the matchmaking process.
         */
        std::unordered_map<string, string> participantsPayload;

        friend void to_json(nlohmann::json& nlohmann_json_j, const MatchmakingData& nlohmann_json_t) {
            nlohmann_json_j["id"] = nlohmann_json_t.id;
            nlohmann_json_j["appId"] = nlohmann_json_t.appId;
            nlohmann_json_j["type"] = nlohmann_json_t.type;
            nlohmann_json_j["finishType"] = nlohmann_json_t.finishType;
            nlohmann_json_j["startType"] = nlohmann_json_t.startType;
            nlohmann_json_j["maxUsers"] = nlohmann_json_t.maxUsers;
            nlohmann_json_j["isStarted"] = nlohmann_json_t.isStarted;
            nlohmann_json_j["votingEnabled"] = nlohmann_json_t.votingEnabled;
            nlohmann_json_j["oncePerUserVoting"] = nlohmann_json_t.oncePerUserVoting;
            nlohmann_json_j["createdBy"] = nlohmann_json_t.createdBy;
            nlohmann_json_j["updatedBy"] = nlohmann_json_t.updatedBy;
            nlohmann_json_j["createdAt"] = nlohmann_json_t.createdAt;
            nlohmann_json_j["updatedAt"] = nlohmann_json_t.updatedAt;
            nlohmann_json_j["participants"] = nlohmann_json_t.participants;
            nlohmann_json_j["votes"] = nlohmann_json_t.votes;
            nlohmann_json_j["participantsScore"] = nlohmann_json_t.participantsScore;
            nlohmann_json_j["participantsPayload"] = nlohmann_json_t.participantsPayload;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, MatchmakingData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("id")) {
                auto json_id = nlohmann_json_j.at("id");
                if (!json_id.is_null() && json_id.is_string()) {
                    json_id.get_to(nlohmann_json_t.id);
                }
            }
            if (nlohmann_json_j.contains("appId")) {
                auto json_appId = nlohmann_json_j.at("appId");
                if (!json_appId.is_null() && json_appId.is_string()) {
                    json_appId.get_to(nlohmann_json_t.appId);
                }
            }
            if (nlohmann_json_j.contains("type")) {
                auto json_type = nlohmann_json_j.at("type");
                if (!json_type.is_null() && json_type.is_string()) {
                    json_type.get_to(nlohmann_json_t.type);
                }
            }
            if (nlohmann_json_j.contains("finishType")) {
                auto json_finishType = nlohmann_json_j.at("finishType");
                if (!json_finishType.is_null() && json_finishType.is_string()) {
                    json_finishType.get_to(nlohmann_json_t.finishType);
                }
            }
            if (nlohmann_json_j.contains("startType")) {
                auto json_startType = nlohmann_json_j.at("startType");
                if (!json_startType.is_null() && json_startType.is_string()) {
                    json_startType.get_to(nlohmann_json_t.startType);
                }
            }
            if (nlohmann_json_j.contains("maxUsers")) {
                auto json_maxUsers = nlohmann_json_j.at("maxUsers");
                if (!json_maxUsers.is_null() && json_maxUsers.is_number()) {
                    json_maxUsers.get_to(nlohmann_json_t.maxUsers);
                }
            }
            if (nlohmann_json_j.contains("isStarted")) {
                auto json_isStarted = nlohmann_json_j.at("isStarted");
                if (!json_isStarted.is_null() && json_isStarted.is_boolean()) {
                    json_isStarted.get_to(nlohmann_json_t.isStarted);
                }
            }
            if (nlohmann_json_j.contains("votingEnabled")) {
                auto json_votingEnabled = nlohmann_json_j.at("votingEnabled");
                if (!json_votingEnabled.is_null() && json_votingEnabled.is_boolean()) {
                    json_votingEnabled.get_to(nlohmann_json_t.votingEnabled);
                }
            }
            if (nlohmann_json_j.contains("oncePerUserVoting")) {
                auto json_oncePerUserVoting = nlohmann_json_j.at("oncePerUserVoting");
                if (!json_oncePerUserVoting.is_null() && json_oncePerUserVoting.is_boolean()) {
                    json_oncePerUserVoting.get_to(nlohmann_json_t.oncePerUserVoting);
                }
            }
            if (nlohmann_json_j.contains("createdBy")) {
                auto json_createdBy = nlohmann_json_j.at("createdBy");
                if (!json_createdBy.is_null() && json_createdBy.is_string()) {
                    json_createdBy.get_to(nlohmann_json_t.createdBy);
                }
            }
            if (nlohmann_json_j.contains("updatedBy")) {
                auto json_updatedBy = nlohmann_json_j.at("updatedBy");
                if (!json_updatedBy.is_null() && json_updatedBy.is_string()) {
                    json_updatedBy.get_to(nlohmann_json_t.updatedBy);
                }
            }
            if (nlohmann_json_j.contains("createdAt")) {
                auto json_createdAt = nlohmann_json_j.at("createdAt");
                if (!json_createdAt.is_null() && json_createdAt.is_number()) {
                    json_createdAt.get_to(nlohmann_json_t.createdAt);
                }
            }
            if (nlohmann_json_j.contains("updatedAt")) {
                auto json_updatedAt = nlohmann_json_j.at("updatedAt");
                if (!json_updatedAt.is_null() && json_updatedAt.is_number()) {
                    json_updatedAt.get_to(nlohmann_json_t.updatedAt);
                }
            }
            if (nlohmann_json_j.contains("participants")) {
                auto json_participants = nlohmann_json_j.at("participants");
                if (!json_participants.is_null() && json_participants.is_array()) {
                    json_participants.get_to(nlohmann_json_t.participants);
                }
            }
            if (nlohmann_json_j.contains("votes")) {
                auto json_votes = nlohmann_json_j.at("votes");
                if (!json_votes.is_null() && json_votes.is_array()) {
                    json_votes.get_to(nlohmann_json_t.votes);
                }
            }
            if (nlohmann_json_j.contains("participantsScore")) {
                auto json_participantsScore = nlohmann_json_j.at("participantsScore");
                if (!json_participantsScore.is_null()) {
                    json_participantsScore.get_to(nlohmann_json_t.participantsScore);
                }
            }
            if (nlohmann_json_j.contains("participantsPayload")) {
                auto json_participantsPayload = nlohmann_json_j.at("participantsPayload");
                if (!json_participantsPayload.is_null()) {
                    json_participantsPayload.get_to(nlohmann_json_t.participantsPayload);
                }
            }
        }
    };
}}}