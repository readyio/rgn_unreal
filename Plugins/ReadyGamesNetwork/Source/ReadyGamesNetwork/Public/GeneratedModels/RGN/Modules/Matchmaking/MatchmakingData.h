// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "Vote.h"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace Matchmaking {
struct MatchmakingData {
    string id;
    string appId;
    string type;
    string finishType;
    string startType;
    int32_t maxUsers = 0;
    bool isStarted = false;
    bool votingEnabled = false;
    bool oncePerUserVoting = false;
    string createdBy;
    string updatedBy;
    int64_t createdAt = 0;
    int64_t updatedAt = 0;
    vector<string> participants;
    vector<RGN::Modules::Matchmaking::Vote> votes;
    System::Collections::Generic<string, int64_t> participantsScore;
    System::Collections::Generic<string, json> participantsPayload;
    NLOHMANN_DEFINE_TYPE_INTRUSIVE(MatchmakingData, id, appId, type, finishType, startType, maxUsers, isStarted, votingEnabled, oncePerUserVoting, createdBy, updatedBy, createdAt, updatedAt, participants, votes, participantsScore, participantsPayload)
};
}}}