#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../../../Core/RGNCore.h"
#include "LeaderboardData.h"
#include "GetLeaderboardsResponse.h"
#include "GetLeaderboardIdsResponseData.h"
#include "SetScoreResponseData.h"
#include "LeaderboardEntry.h"
#include "GetLeaderboardEntriesResponseData.h"
#include <vector>
#include <unordered_map>
#include <string>
#include <functional>
using namespace std;

namespace RGN { namespace Modules { namespace Leaderboard {
    class LeaderboardModule {
    public:
        static void GetLeaderboardByIdAsync(
            string& id,
            const function<void(RGN::Modules::Leaderboard::LeaderboardData result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["id"] = id;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Leaderboard::LeaderboardData>(
                    "leaderboardV2-getById",
                    requestData,
                    complete,
                    fail);
            };
        static void GetLeaderboardByRequestNameAsync(
            string& requestName,
            const function<void(RGN::Modules::Leaderboard::LeaderboardData result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["requestName"] = requestName;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Leaderboard::LeaderboardData>(
                    "leaderboardV2-getByRequestName",
                    requestData,
                    complete,
                    fail);
            };
        static void GetLeaderboardByRequestNamesAsync(
            vector<string>& requestNames,
            const function<void(vector<RGN::Modules::Leaderboard::LeaderboardData> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["requestNames"] = requestNames;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Leaderboard::GetLeaderboardsResponse>(
                    "leaderboardV2-getByRequestNames",
                    requestData,
                    [complete] (RGN::Modules::Leaderboard::GetLeaderboardsResponse result) {
                        complete(result.Leaderboards);
                    },
                    fail);
            };
        static void GetLeaderboardIdsAsync(
            const function<void(vector<string> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Leaderboard::GetLeaderboardIdsResponseData>(
                    "leaderboardV2-getIds",
                    requestData,
                    [complete] (RGN::Modules::Leaderboard::GetLeaderboardIdsResponseData result) {
                        complete(result.ids);
                    },
                    fail);
            };
        static void SetScoreAsync(
            string& leaderboardId,
            int32_t score,
            string& extraData,
            const function<void(int32_t result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["leaderboardId"] = leaderboardId;
                requestData["score"] = score;
                requestData["extraData"] = extraData;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Leaderboard::SetScoreResponseData>(
                    "leaderboardV2-setScore",
                    requestData,
                    [complete] (RGN::Modules::Leaderboard::SetScoreResponseData result) {
                        complete(result.place);
                    },
                    fail);
            };
        static void AddScoreAsync(
            string& leaderboardId,
            int32_t score,
            string& extraData,
            const function<void(int32_t result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["leaderboardId"] = leaderboardId;
                requestData["score"] = score;
                requestData["extraData"] = extraData;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Leaderboard::SetScoreResponseData>(
                    "leaderboardV2-addScore",
                    requestData,
                    [complete] (RGN::Modules::Leaderboard::SetScoreResponseData result) {
                        complete(result.place);
                    },
                    fail);
            };
        static void GetUserEntryAsync(
            string& leaderboardId,
            const function<void(RGN::Modules::Leaderboard::LeaderboardEntry result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["leaderboardId"] = leaderboardId;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Leaderboard::LeaderboardEntry>(
                    "leaderboardV2-getUserEntry",
                    requestData,
                    complete,
                    fail);
            };
        static void GetEntriesAsync(
            string& leaderboardId,
            int32_t quantityTop,
            bool includeUser,
            int32_t quantityAroundUser,
            const function<void(vector<RGN::Modules::Leaderboard::LeaderboardEntry> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["leaderboardId"] = leaderboardId;
                requestData["includeUser"] = includeUser;
                requestData["quantityAroundUser"] = quantityAroundUser;
                requestData["quantityTop"] = quantityTop;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Leaderboard::GetLeaderboardEntriesResponseData>(
                    "leaderboardV2-getEntries",
                    requestData,
                    [complete] (RGN::Modules::Leaderboard::GetLeaderboardEntriesResponseData result) {
                        complete(result.entries);
                    },
                    fail);
            };
    };
}}}