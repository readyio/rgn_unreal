// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace Store {
struct TimeInfo {
    bool hasStart;
    int64_t start;
    bool hasEnd;
    int64_t end;
    bool hasInterval;
    int64_t intervalDuration;
    int64_t intervalDelay;
    NLOHMANN_DEFINE_TYPE_INTRUSIVE(TimeInfo, hasStart, start, hasEnd, end, hasInterval, intervalDuration, intervalDelay)
};
}}}