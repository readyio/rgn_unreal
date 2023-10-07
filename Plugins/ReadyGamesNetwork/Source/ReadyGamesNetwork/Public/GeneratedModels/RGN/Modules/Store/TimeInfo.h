// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace Store {
    struct TimeInfo {
        bool hasStart = false;
        int64_t start = 0;
        bool hasEnd = false;
        int64_t end = 0;
        bool hasInterval = false;
        int64_t intervalDuration = 0;
        int64_t intervalDelay = 0;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(TimeInfo, hasStart, start, hasEnd, end, hasInterval, intervalDuration, intervalDelay)
    };
}}}