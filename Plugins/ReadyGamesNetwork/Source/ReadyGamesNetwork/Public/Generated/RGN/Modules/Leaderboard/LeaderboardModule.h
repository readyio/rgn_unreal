#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../../../Core/RGNCore.h"
#include "../../../../CustomImpl/RGN/Modules/Leaderboard/LeaderboardModule.h"
#include "LeaderboardData.h"
#include "GetLeaderboardsResponse.h"
#include "GetLeaderboardIdsResponseData.h"
#include "IsLeaderboardAvailableResponseData.h"
#include "IsInGracePeriodResponseData.h"
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
                    fail,
                    false);
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
                    fail,
                    false);
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
                        success(result.leaderboards);
                    },
                    fail,
                    false);
            };
        static void GetLeaderboardByAppIdsAsync(
            const function<void(const vector<RGN::Modules::Leaderboard::LeaderboardData>& result)>& success,
            const function<void(const int httpCode, const string& error)>& fail,
            const vector<string>& appIds,
            const int32_t limit,
            const string& startAfter = "",
            const bool ignoreTimestamp = false) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["appIds"] = appIds;
                requestData["limit"] = limit;
                requestData["startAfter"] = startAfter;
                requestData["ignoreTimestamp"] = ignoreTimestamp;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Leaderboard::GetLeaderboardsResponse>(
                    "leaderboardV2-getByAppIds",
                    requestData,
                    [success] (const RGN::Modules::Leaderboard::GetLeaderboardsResponse& result) {
                        success(result.leaderboards);
                    },
                    fail,
                    false);
            };
        /**
         * Asynchronously retrieves a list of leaderboards for the current application from the Ready Games Network (RGN).
         * @param limit - An integer indicating the maximum number of leaderboards to retrieve.
         * @param startAfter - An optional parameter representing an leaderboard id after which to
         * start retrieving the leaderboards. The default is an empty string.
         * @param ignoreTimestamp - An optional parameter that indicates whether to ignore the timestamp in the leaderboard
         * retrieval process. The default is false.
         * @return A Task representing the asynchronous operation. The Result property of the Task returns a list
         * of T:RGN.Modules.Leaderboard.LeaderboardData objects representing the leaderboards that match the current application identifier,
         * limit and other optional parameters.
         * @throw: Thrown when the provided limit value is zero.
         */
        static void GetLeaderboardForCurrentAppAsync(
            const function<void(const vector<RGN::Modules::Leaderboard::LeaderboardData>& result)>& success,
            const function<void(const int httpCode, const string& error)>& fail,
            const int32_t limit,
            const string& startAfter = "",
            const bool ignoreTimestamp = false) {
                RGN::Modules::Leaderboard::LeaderboardModuleCustomImpl::GetLeaderboardForCurrentAppAsync(
                    success,
                    fail,
                    limit,
                    startAfter,
                    ignoreTimestamp);
            };
        /**
         * Method to retrieve leaderboard ids defined for current project
         * @param ignoreTimestamp - An optional parameter that indicates whether to ignore the timestamp in the leaderboard
         * retrieval process. The default is false.
         */
        static void GetLeaderboardIdsAsync(
            const function<void(const vector<string>& result)>& success,
            const function<void(const int httpCode, const string& error)>& fail,
            const bool ignoreTimestamp = false) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["ignoreTimestamp"] = ignoreTimestamp;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Leaderboard::GetLeaderboardIdsResponseData>(
                    "leaderboardV2-getIds",
                    requestData,
                    [success] (const RGN::Modules::Leaderboard::GetLeaderboardIdsResponseData& result) {
                        success(result.ids);
                    },
                    fail,
                    false);
            };
        /**
         * Method to retrieve available status of leaderboard
         * @param leaderboardId - The ID of the leaderboard which status will be checked.
         */
        static void IsLeaderboardAvailableAsync(
            const function<void(const bool result)>& success,
            const function<void(const int httpCode, const string& error)>& fail,
            const string& leaderboardId) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["leaderboardId"] = leaderboardId;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Leaderboard::IsLeaderboardAvailableResponseData>(
                    "leaderboardV2-isAvailable",
                    requestData,
                    [success] (const RGN::Modules::Leaderboard::IsLeaderboardAvailableResponseData& result) {
                        success(result.isAvailable);
                    },
                    fail,
                    false);
            };
        /**
         * Method to retrieve available status of leaderboard
         * @param leaderboardId - The ID of the leaderboard which status will be checked.
         */
        static void IsInGracePeriodAsync(
            const function<void(const RGN::Modules::Leaderboard::IsInGracePeriodResponseData& result)>& success,
            const function<void(const int httpCode, const string& error)>& fail,
            const string& leaderboardId) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["leaderboardId"] = leaderboardId;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Leaderboard::IsInGracePeriodResponseData>(
                    "leaderboardV2-isInGracePeriod",
                    requestData,
                    success,
                    fail,
                    false);
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
                    fail,
                    false);
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
                    fail,
                    false);
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
                    fail,
                    false);
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
                    fail,
                    false);
            };
    };
}}}