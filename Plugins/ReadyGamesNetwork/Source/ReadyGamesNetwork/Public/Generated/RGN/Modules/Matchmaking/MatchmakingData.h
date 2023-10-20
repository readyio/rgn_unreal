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
                nlohmann_json_j.at("id").get_to(nlohmann_json_t.id);
            }
            if (nlohmann_json_j.contains("appId")) {
                nlohmann_json_j.at("appId").get_to(nlohmann_json_t.appId);
            }
            if (nlohmann_json_j.contains("type")) {
                nlohmann_json_j.at("type").get_to(nlohmann_json_t.type);
            }
            if (nlohmann_json_j.contains("finishType")) {
                nlohmann_json_j.at("finishType").get_to(nlohmann_json_t.finishType);
            }
            if (nlohmann_json_j.contains("startType")) {
                nlohmann_json_j.at("startType").get_to(nlohmann_json_t.startType);
            }
            if (nlohmann_json_j.contains("maxUsers")) {
                nlohmann_json_j.at("maxUsers").get_to(nlohmann_json_t.maxUsers);
            }
            if (nlohmann_json_j.contains("isStarted")) {
                nlohmann_json_j.at("isStarted").get_to(nlohmann_json_t.isStarted);
            }
            if (nlohmann_json_j.contains("votingEnabled")) {
                nlohmann_json_j.at("votingEnabled").get_to(nlohmann_json_t.votingEnabled);
            }
            if (nlohmann_json_j.contains("oncePerUserVoting")) {
                nlohmann_json_j.at("oncePerUserVoting").get_to(nlohmann_json_t.oncePerUserVoting);
            }
            if (nlohmann_json_j.contains("createdBy")) {
                nlohmann_json_j.at("createdBy").get_to(nlohmann_json_t.createdBy);
            }
            if (nlohmann_json_j.contains("updatedBy")) {
                nlohmann_json_j.at("updatedBy").get_to(nlohmann_json_t.updatedBy);
            }
            if (nlohmann_json_j.contains("createdAt")) {
                nlohmann_json_j.at("createdAt").get_to(nlohmann_json_t.createdAt);
            }
            if (nlohmann_json_j.contains("updatedAt")) {
                nlohmann_json_j.at("updatedAt").get_to(nlohmann_json_t.updatedAt);
            }
            if (nlohmann_json_j.contains("participants")) {
                nlohmann_json_j.at("participants").get_to(nlohmann_json_t.participants);
            }
            if (nlohmann_json_j.contains("votes")) {
                nlohmann_json_j.at("votes").get_to(nlohmann_json_t.votes);
            }
            if (nlohmann_json_j.contains("participantsScore")) {
                nlohmann_json_j.at("participantsScore").get_to(nlohmann_json_t.participantsScore);
            }
            if (nlohmann_json_j.contains("participantsPayload")) {
                nlohmann_json_j.at("participantsPayload").get_to(nlohmann_json_t.participantsPayload);
            }
        }
    };
}}}