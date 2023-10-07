// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace Store {
struct LootboxIsAvailableResponse {
    bool isAvailable = false;
    int64_t count = 0;
    NLOHMANN_DEFINE_TYPE_INTRUSIVE(LootboxIsAvailableResponse, isAvailable, count)
};
}}}