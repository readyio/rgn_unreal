#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "LeaderboardData.h"
#include <string>
#include <functional>
using namespace std;

namespace RGN { namespace Modules { namespace Leaderboard {
    class LeaderboardModule_Admin {
    public:
        static void AddLeaderboardAsync(
            RGN::Modules::Leaderboard::LeaderboardData& leaderboardData,
            const function<void(string& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void UpdateLeaderboardAsync(
            RGN::Modules::Leaderboard::LeaderboardData& leaderboardData,
            const function<void(string& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void DeleteLeaderboardAsync(
            string& leaderboardId,
            const function<void(void)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
    };
}}}