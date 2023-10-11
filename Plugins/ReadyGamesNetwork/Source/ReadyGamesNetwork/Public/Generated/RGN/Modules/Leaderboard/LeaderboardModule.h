#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../../..//Core/RGNCore.h"
#include "LeaderboardData.h"
#include "LeaderboardEntry.h"
#include <string>
#include <functional>
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace Leaderboard {
    class LeaderboardModule {
    public:
        static void GetLeaderboardByIdAsync(
            string id,
            const function<void(RGN::Modules::Leaderboard::LeaderboardData result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["id"] = id;
                RGNCore::CallAPI("leaderboardV2-getById", requestData, complete, fail);
            };
        static void GetLeaderboardByRequestNameAsync(
            string requestName,
            const function<void(RGN::Modules::Leaderboard::LeaderboardData result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["requestName"] = requestName;
                RGNCore::CallAPI("leaderboardV2-getByRequestName", requestData, complete, fail);
            };
        static void GetLeaderboardByRequestNamesAsync(
            vector<string> requestNames,
            const function<void(vector<RGN::Modules::Leaderboard::LeaderboardData> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["requestNames"] = requestNames;
                RGNCore::CallAPI("leaderboardV2-getByRequestNames", requestData, complete, fail);
            };
        static void GetLeaderboardIdsAsync(
            const function<void(vector<string> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                RGNCore::CallAPI("leaderboardV2-getIds", requestData, complete, fail);
            };
        static void SetScoreAsync(
            string leaderboardId,
            int32_t score,
            string extraData,
            const function<void(int32_t result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["leaderboardId"] = leaderboardId;
                requestData["score"] = score;
                requestData["extraData"] = extraData;
                RGNCore::CallAPI("leaderboardV2-setScore", requestData, complete, fail);
            };
        static void AddScoreAsync(
            string leaderboardId,
            int32_t score,
            string extraData,
            const function<void(int32_t result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["leaderboardId"] = leaderboardId;
                requestData["score"] = score;
                requestData["extraData"] = extraData;
                RGNCore::CallAPI("leaderboardV2-addScore", requestData, complete, fail);
            };
        static void GetUserEntryAsync(
            string leaderboardId,
            const function<void(RGN::Modules::Leaderboard::LeaderboardEntry result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["leaderboardId"] = leaderboardId;
                RGNCore::CallAPI("leaderboardV2-getUserEntry", requestData, complete, fail);
            };
        static void GetEntriesAsync(
            string leaderboardId,
            int32_t quantityTop,
            bool includeUser,
            int32_t quantityAroundUser,
            const function<void(vector<RGN::Modules::Leaderboard::LeaderboardEntry> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["leaderboardId"] = leaderboardId;
                requestData["includeUser"] = includeUser;
                requestData["quantityAroundUser"] = quantityAroundUser;
                requestData["quantityTop"] = quantityTop;
                RGNCore::CallAPI("leaderboardV2-getEntries", requestData, complete, fail);
            };
    };
}}}