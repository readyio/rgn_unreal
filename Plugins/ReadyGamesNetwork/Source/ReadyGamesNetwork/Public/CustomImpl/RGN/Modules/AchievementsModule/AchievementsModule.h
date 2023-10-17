#pragma once

#include "../../../../json.hpp"
#include "../../../../Core/RGNCore.h"
#include "../../../../Generated/RGN/Modules/Achievement/AchievementsModule.h"
#include <string>

using namespace std;

namespace RGN { namespace Modules { namespace Achievement {
    class AchievementsModuleCustomImpl {
    public:
        static void GetByAppIdsWithUserDataAsync(
            vector<string> appIds,
            int32_t limit,
            string startAfter,
            bool withHistory,
            const function<void(vector<RGN::Modules::Achievement::AchievementWithUserData> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                // TODO
            };
    };
}}}
