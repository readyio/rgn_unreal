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
        /**
         * Asynchronous method that retrieves leaderboard data.
         * Resulting Data contains leaderboard description fields like id, name, type, etc.
         */
        static void GetLeaderboardByIdAsync(
            const function<void(const RGN::Modules::Leaderboard::LeaderboardData& result)>& success,
            const function<void(const int httpCode, const string& error)>& fail,
            const string& id) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["id"] = id;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Leaderboard::LeaderboardData>(
                    "leaderboardV2-getById",
                    requestData,
                    success,
                    fail);
            };
        /**
         * Asynchronous method that retrieves leaderboard data.
         * Resulting Data contains leaderboard description fields like id, name, type, etc.
         */
        static void GetLeaderboardByRequestNameAsync(
            const function<void(const RGN::Modules::Leaderboard::LeaderboardData& result)>& success,
            const function<void(const int httpCode, const string& error)>& fail,
            const string& requestName) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["requestName"] = requestName;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Leaderboard::LeaderboardData>(
                    "leaderboardV2-getByRequestName",
                    requestData,
                    success,
                    fail);
            };
        static void GetLeaderboardByRequestNamesAsync(
            const function<void(const vector<RGN::Modules::Leaderboard::LeaderboardData>& result)>& success,
            const function<void(const int httpCode, const string& error)>& fail,
            const vector<string>& requestNames) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["requestNames"] = requestNames;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Leaderboard::GetLeaderboardsResponse>(
                    "leaderboardV2-getByRequestNames",
                    requestData,
                    [success] (const RGN::Modules::Leaderboard::GetLeaderboardsResponse& result) {
                        success(result.Leaderboards);
                    },
                    fail);
            };
        static void GetLeaderboardIdsAsync(
            const function<void(const vector<string>& result)>& success,
            const function<void(const int httpCode, const string& error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Leaderboard::GetLeaderboardIdsResponseData>(
                    "leaderboardV2-getIds",
                    requestData,
                    [success] (const RGN::Modules::Leaderboard::GetLeaderboardIdsResponseData& result) {
                        success(result.ids);
                    },
                    fail);
            };
        /**
         * Asynchronously sets the player's score on the specified leaderboard.
         * @param leaderboardId - The ID of the leaderboard where the score will be set.
         * @param score - The score to be set on the leaderboard.
         * @param extraData - (Optional) Extra data associated with the score. Defaults to an empty string if not provided.
         * @return A task that represents the asynchronous operation. The task result contains the player's place after setting the score.
         */
        static void SetScoreAsync(
            const function<void(const int32_t result)>& success,
            const function<void(const int httpCode, const string& error)>& fail,
            const string& leaderboardId,
            const int32_t score,
            const string& extraData = "") {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["leaderboardId"] = leaderboardId;
                requestData["score"] = score;
                requestData["extraData"] = extraData;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Leaderboard::SetScoreResponseData>(
                    "leaderboardV2-setScore",
                    requestData,
                    [success] (const RGN::Modules::Leaderboard::SetScoreResponseData& result) {
                        success(result.place);
                    },
                    fail);
            };
        /**
         * Asynchronously adds the player's score on the specified leaderboard.
         * @param leaderboardId - The ID of the leaderboard where the score will be added.
         * @param score - The score to be added on the leaderboard.
         * @param extraData - (Optional) Extra data associated with the score. Defaults to an empty string if not provided.
         * @return A task that represents the asynchronous operation. The task result contains the player's place after setting the score.
         */
        static void AddScoreAsync(
            const function<void(const int32_t result)>& success,
            const function<void(const int httpCode, const string& error)>& fail,
            const string& leaderboardId,
            const int32_t score,
            const string& extraData = "") {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["leaderboardId"] = leaderboardId;
                requestData["score"] = score;
                requestData["extraData"] = extraData;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Leaderboard::SetScoreResponseData>(
                    "leaderboardV2-addScore",
                    requestData,
                    [success] (const RGN::Modules::Leaderboard::SetScoreResponseData& result) {
                        success(result.place);
                    },
                    fail);
            };
        /**
         * Asynchronously retrieves the player's entry on the specified leaderboard.
         * @param leaderboardId - The ID of the leaderboard from which the entry will be retrieved.
         * @return A task that represents the asynchronous operation. The task result contains the player's entry data on the leaderboard.
         */
        static void GetUserEntryAsync(
            const function<void(const RGN::Modules::Leaderboard::LeaderboardEntry& result)>& success,
            const function<void(const int httpCode, const string& error)>& fail,
            const string& leaderboardId) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["leaderboardId"] = leaderboardId;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Leaderboard::LeaderboardEntry>(
                    "leaderboardV2-getUserEntry",
                    requestData,
                    success,
                    fail);
            };
        /**
         * Asynchronously retrieves a specified number of top entries and entries around the user from the specified leaderboard.
         * @param leaderboardId - The ID of the leaderboard from which the entries will be retrieved.
         * @param quantityTop - The number of top entries to retrieve from the leaderboard.
         * @param includeUser - Whether to include the user's entry in the retrieved entries.
         * @param quantityAroundUser - The number of entries to retrieve around the user's entry.
         * @return A task that represents the asynchronous operation. The task result contains a list of the retrieved leaderboard entries.
         */
        static void GetEntriesAsync(
            const function<void(const vector<RGN::Modules::Leaderboard::LeaderboardEntry>& result)>& success,
            const function<void(const int httpCode, const string& error)>& fail,
            const string& leaderboardId,
            const int32_t quantityTop,
            const bool includeUser,
            const int32_t quantityAroundUser) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["leaderboardId"] = leaderboardId;
                requestData["includeUser"] = includeUser;
                requestData["quantityAroundUser"] = quantityAroundUser;
                requestData["quantityTop"] = quantityTop;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Leaderboard::GetLeaderboardEntriesResponseData>(
                    "leaderboardV2-getEntries",
                    requestData,
                    [success] (const RGN::Modules::Leaderboard::GetLeaderboardEntriesResponseData& result) {
                        success(result.entries);
                    },
                    fail);
            };
    };
}}}