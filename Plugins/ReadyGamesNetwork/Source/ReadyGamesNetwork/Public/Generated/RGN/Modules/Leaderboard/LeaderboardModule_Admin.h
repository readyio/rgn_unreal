#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../../../Core/RGNCore.h"
#include "LeaderboardData.h"
#include <vector>
#include <unordered_map>
#include <string>
#include <functional>
using namespace std;

namespace RGN { namespace Modules { namespace Leaderboard {
    class LeaderboardModule_Admin {
    public:
        static void AddLeaderboardAsync(
            const RGN::Modules::Leaderboard::LeaderboardData& leaderboardData,
            const function<void(const string& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["data"] = leaderboardData;
                RGNCore::CallAPI<nlohmann::json, nlohmann::json>(
                    "leaderboardV2-add",
                    requestData,
                    [complete] (const nlohmann::json& result) {
                        complete(result["result"]["leaderboardId"].template get<string>());
                    },
                    fail);
            };
        static void UpdateLeaderboardAsync(
            const RGN::Modules::Leaderboard::LeaderboardData& leaderboardData,
            const function<void(const string& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["data"] = leaderboardData;
                RGNCore::CallAPI<nlohmann::json, nlohmann::json>(
                    "leaderboardV2-update",
                    requestData,
                    [complete] (const nlohmann::json& result) {
                        complete(result["result"]["leaderboardId"].template get<string>());
                    },
                    fail);
            };
        static void DeleteLeaderboardAsync(
            const string& leaderboardId,
            const function<void(void)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["id"] = leaderboardId;
                RGNCore::CallAPI<nlohmann::json>(
                    "leaderboardV2-delete",
                    requestData,
                    complete,
                    fail);
            };
    };
}}}