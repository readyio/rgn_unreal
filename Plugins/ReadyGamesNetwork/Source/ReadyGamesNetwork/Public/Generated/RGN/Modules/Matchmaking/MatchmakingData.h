#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "Vote.h"
using json = nlohmann::json;
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
        std::unordered_map<string, json> participantsPayload;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(MatchmakingData, id, appId, type, finishType, startType, maxUsers, isStarted, votingEnabled, oncePerUserVoting, createdBy, updatedBy, createdAt, updatedAt, participants, votes, participantsScore, participantsPayload)
    };
}}}