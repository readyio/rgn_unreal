// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace Matchmaking {
    struct Vote {
        string voterId;
        string participantId;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(Vote, voterId, participantId)
    };
}}}