#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "LeaderboardData.h"
#include "LeaderboardEntry.h"
#include <string>
#include <functional>
using namespace std;

namespace RGN { namespace Modules { namespace Leaderboard {
    class LeaderboardModule {
    public:
        static void GetLeaderboardByIdAsync(
            string& id,
            const function<void(RGN::Modules::Leaderboard::LeaderboardData& result)>& complete,
            const function<void(int httpCode, string error)>& fail) { }
        static void GetLeaderboardByRequestNameAsync(
            string& requestName,
            const function<void(RGN::Modules::Leaderboard::LeaderboardData& result)>& complete,
            const function<void(int httpCode, string error)>& fail) { }
        static void GetLeaderboardByRequestNamesAsync(
            vector<string>& requestNames,
            const function<void(vector<RGN::Modules::Leaderboard::LeaderboardData>& result)>& complete,
            const function<void(int httpCode, string error)>& fail) { }
        static void GetLeaderboardIdsAsync(
            const function<void(vector<string>& result)>& complete,
            const function<void(int httpCode, string error)>& fail) { }
        static void SetScoreAsync(
            string& leaderboardId,
            int32_t score,
            string& extraData,
            const function<void(int32_t result)>& complete,
            const function<void(int httpCode, string error)>& fail) { }
        static void AddScoreAsync(
            string& leaderboardId,
            int32_t score,
            string& extraData,
            const function<void(int32_t result)>& complete,
            const function<void(int httpCode, string error)>& fail) { }
        static void GetUserEntryAsync(
            string& leaderboardId,
            const function<void(RGN::Modules::Leaderboard::LeaderboardEntry& result)>& complete,
            const function<void(int httpCode, string error)>& fail) { }
        static void GetEntriesAsync(
            string& leaderboardId,
            int32_t quantityTop,
            bool includeUser,
            int32_t quantityAroundUser,
            const function<void(vector<RGN::Modules::Leaderboard::LeaderboardEntry>& result)>& complete,
            const function<void(int httpCode, string error)>& fail) { }
    };
}}}