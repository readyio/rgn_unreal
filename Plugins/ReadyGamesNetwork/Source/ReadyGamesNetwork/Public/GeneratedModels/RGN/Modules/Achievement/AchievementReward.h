// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace Achievement {
struct AchievementReward {
    string type;
    vector<string> appIds;
    string name;
    int32_t quantity;
    NLOHMANN_DEFINE_TYPE_INTRUSIVE(AchievementReward, type, appIds, name, quantity)
};
}}}