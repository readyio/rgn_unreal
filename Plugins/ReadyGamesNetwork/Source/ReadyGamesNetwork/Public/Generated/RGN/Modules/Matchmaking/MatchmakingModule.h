#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../../../Core/RGNCore.h"
#include "../../../../Core/CancellationToken.h"
#include "GetMatchesResponseData.h"
#include "MatchmakingData.h"
#include "GetMatchResponseData.h"
#include "StartMatchResponseData.h"
#include <vector>
#include <unordered_map>
#include <string>
#include <functional>
using namespace std;

namespace RGN { namespace Modules { namespace Matchmaking {
    class MatchmakingModule {
    public:
        static void GetJoinOpenMatchesAsync(
            const int32_t limit,
            const string& startAfter,
            const CancellationToken& cancellationToken,
            const function<void(const vector<RGN::Modules::Matchmaking::MatchmakingData>& result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["limit"] = limit;
                requestData["startAfter"] = startAfter;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Matchmaking::GetMatchesResponseData>(
                    "matchmaking-getJoinOpenMatches",
                    requestData,
                    [complete] (const RGN::Modules::Matchmaking::GetMatchesResponseData& result) {
                        complete(result.matches);
                    },
                    fail);
            };
        static void GetVoteOpenMatchesAsync(
            const int32_t limit,
            const string& startAfter,
            const CancellationToken& cancellationToken,
            const function<void(const vector<RGN::Modules::Matchmaking::MatchmakingData>& result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["limit"] = limit;
                requestData["startAfter"] = startAfter;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Matchmaking::GetMatchesResponseData>(
                    "matchmaking-getVoteOpenMatches",
                    requestData,
                    [complete] (const RGN::Modules::Matchmaking::GetMatchesResponseData& result) {
                        complete(result.matches);
                    },
                    fail);
            };
        static void GetFinishedMatchesAsync(
            const int32_t limit,
            const string& startAfter,
            const CancellationToken& cancellationToken,
            const function<void(const vector<RGN::Modules::Matchmaking::MatchmakingData>& result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["limit"] = limit;
                requestData["startAfter"] = startAfter;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Matchmaking::GetMatchesResponseData>(
                    "matchmaking-getFinishedMatches",
                    requestData,
                    [complete] (const RGN::Modules::Matchmaking::GetMatchesResponseData& result) {
                        complete(result.matches);
                    },
                    fail);
            };
        static void GetFinishedMatchByIdAsync(
            const string& matchId,
            const CancellationToken& cancellationToken,
            const function<void(const RGN::Modules::Matchmaking::MatchmakingData& result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["matchId"] = matchId;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Matchmaking::GetMatchResponseData>(
                    "matchmaking-getFinishedMatchById",
                    requestData,
                    [complete] (const RGN::Modules::Matchmaking::GetMatchResponseData& result) {
                        complete(result.match);
                    },
                    fail);
            };
        static void CreateMatchAsync(
            const RGN::Modules::Matchmaking::MatchmakingData& matchConfig,
            const bool participateInOnCreate,
            const std::unordered_map<string, string>& participatePayload,
            const CancellationToken& cancellationToken,
            const function<void(const RGN::Modules::Matchmaking::MatchmakingData& result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["matchConfig"] = matchConfig;
                requestData["participateInOnCreate"] = participateInOnCreate;
                requestData["participatePayload"] = participatePayload;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Matchmaking::GetMatchResponseData>(
                    "matchmaking-createMatch",
                    requestData,
                    [complete] (const RGN::Modules::Matchmaking::GetMatchResponseData& result) {
                        complete(result.match);
                    },
                    fail);
            };
        static void ParticipateInMatchAsync(
            const string& matchId,
            const std::unordered_map<string, string>& participantPayload,
            const CancellationToken& cancellationToken,
            const function<void(const string& result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["id"] = matchId;
                requestData["participantPayload"] = participantPayload;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Matchmaking::StartMatchResponseData>(
                    "matchmaking-participateInMatch",
                    requestData,
                    [complete] (const RGN::Modules::Matchmaking::StartMatchResponseData& result) {
                        complete(result.matchId);
                    },
                    fail);
            };
        static void StartMatchAsync(
            const string& matchId,
            const CancellationToken& cancellationToken,
            const function<void(const string& result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["id"] = matchId;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Matchmaking::StartMatchResponseData>(
                    "matchmaking-startMatch",
                    requestData,
                    [complete] (const RGN::Modules::Matchmaking::StartMatchResponseData& result) {
                        complete(result.matchId);
                    },
                    fail);
            };
        static void VoteForMatchAsync(
            const string& matchId,
            const string& participantId,
            const CancellationToken& cancellationToken,
            const function<void(const string& result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["id"] = matchId;
                requestData["participantId"] = participantId;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Matchmaking::StartMatchResponseData>(
                    "matchmaking-voteForMatch",
                    requestData,
                    [complete] (const RGN::Modules::Matchmaking::StartMatchResponseData& result) {
                        complete(result.matchId);
                    },
                    fail);
            };
        static void SubmitMatchScoreAsync(
            const string& matchId,
            const int64_t score,
            const CancellationToken& cancellationToken,
            const function<void(const string& result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["id"] = matchId;
                requestData["score"] = score;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Matchmaking::StartMatchResponseData>(
                    "matchmaking-submitMatchScore",
                    requestData,
                    [complete] (const RGN::Modules::Matchmaking::StartMatchResponseData& result) {
                        complete(result.matchId);
                    },
                    fail);
            };
        static void FinishMatchAsync(
            const string& matchId,
            const CancellationToken& cancellationToken,
            const function<void(const string& result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["id"] = matchId;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Matchmaking::StartMatchResponseData>(
                    "matchmaking-finishMatch",
                    requestData,
                    [complete] (const RGN::Modules::Matchmaking::StartMatchResponseData& result) {
                        complete(result.matchId);
                    },
                    fail);
            };
    };
}}}