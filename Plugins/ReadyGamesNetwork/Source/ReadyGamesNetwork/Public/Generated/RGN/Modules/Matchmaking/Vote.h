#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
using json = nlohmann::json;
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
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(Vote, voterId, participantId)
    };
}}}