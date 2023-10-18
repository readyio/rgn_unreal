#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../../../Core/RGNCore.h"
#include "GetMatchesResponseData.h"
#include "MatchmakingData.h"
#include "GetMatchResponseData.h"
#include "StartMatchResponseData.h"
#include <string>
#include <functional>
using namespace std;

namespace RGN { namespace Modules { namespace Matchmaking {
    class MatchmakingModule {
    public:
        static void GetJoinOpenMatchesAsync(
            int32_t limit,
            string startAfter,
            CancellationToken cancellationToken,
            const function<void(vector<RGN::Modules::Matchmaking::MatchmakingData> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["limit"] = limit;
                requestData["startAfter"] = startAfter;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Matchmaking::GetMatchesResponseData>(
                    "matchmaking-getJoinOpenMatches",
                    requestData,
                    [complete] (RGN::Modules::Matchmaking::GetMatchesResponseData result) {
                        complete(result.matches);
                    },
                    fail);
            };
        static void GetVoteOpenMatchesAsync(
            int32_t limit,
            string startAfter,
            CancellationToken cancellationToken,
            const function<void(vector<RGN::Modules::Matchmaking::MatchmakingData> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["limit"] = limit;
                requestData["startAfter"] = startAfter;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Matchmaking::GetMatchesResponseData>(
                    "matchmaking-getVoteOpenMatches",
                    requestData,
                    [complete] (RGN::Modules::Matchmaking::GetMatchesResponseData result) {
                        complete(result.matches);
                    },
                    fail);
            };
        static void GetFinishedMatchesAsync(
            int32_t limit,
            string startAfter,
            CancellationToken cancellationToken,
            const function<void(vector<RGN::Modules::Matchmaking::MatchmakingData> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["limit"] = limit;
                requestData["startAfter"] = startAfter;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Matchmaking::GetMatchesResponseData>(
                    "matchmaking-getFinishedMatches",
                    requestData,
                    [complete] (RGN::Modules::Matchmaking::GetMatchesResponseData result) {
                        complete(result.matches);
                    },
                    fail);
            };
        static void GetFinishedMatchByIdAsync(
            string matchId,
            CancellationToken cancellationToken,
            const function<void(RGN::Modules::Matchmaking::MatchmakingData result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["matchId"] = matchId;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Matchmaking::GetMatchResponseData>(
                    "matchmaking-getFinishedMatchById",
                    requestData,
                    [complete] (RGN::Modules::Matchmaking::GetMatchResponseData result) {
                        complete(result.match);
                    },
                    fail);
            };
        static void CreateMatchAsync(
            RGN::Modules::Matchmaking::MatchmakingData matchConfig,
            bool participateInOnCreate,
            std::unordered_map<string, string> participatePayload,
            CancellationToken cancellationToken,
            const function<void(RGN::Modules::Matchmaking::MatchmakingData result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["matchConfig"] = matchConfig;
                requestData["participateInOnCreate"] = participateInOnCreate;
                requestData["participatePayload"] = participatePayload;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Matchmaking::GetMatchResponseData>(
                    "matchmaking-createMatch",
                    requestData,
                    [complete] (RGN::Modules::Matchmaking::GetMatchResponseData result) {
                        complete(result.match);
                    },
                    fail);
            };
        static void ParticipateInMatchAsync(
            string matchId,
            std::unordered_map<string, string> participantPayload,
            CancellationToken cancellationToken,
            const function<void(string result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["id"] = matchId;
                requestData["participantPayload"] = participantPayload;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Matchmaking::StartMatchResponseData>(
                    "matchmaking-participateInMatch",
                    requestData,
                    [complete] (RGN::Modules::Matchmaking::StartMatchResponseData result) {
                        complete(result.matchId);
                    },
                    fail);
            };
        static void StartMatchAsync(
            string matchId,
            CancellationToken cancellationToken,
            const function<void(string result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["id"] = matchId;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Matchmaking::StartMatchResponseData>(
                    "matchmaking-startMatch",
                    requestData,
                    [complete] (RGN::Modules::Matchmaking::StartMatchResponseData result) {
                        complete(result.matchId);
                    },
                    fail);
            };
        static void VoteForMatchAsync(
            string matchId,
            string participantId,
            CancellationToken cancellationToken,
            const function<void(string result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["id"] = matchId;
                requestData["participantId"] = participantId;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Matchmaking::StartMatchResponseData>(
                    "matchmaking-voteForMatch",
                    requestData,
                    [complete] (RGN::Modules::Matchmaking::StartMatchResponseData result) {
                        complete(result.matchId);
                    },
                    fail);
            };
        static void SubmitMatchScoreAsync(
            string matchId,
            int64_t score,
            CancellationToken cancellationToken,
            const function<void(string result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["id"] = matchId;
                requestData["score"] = score;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Matchmaking::StartMatchResponseData>(
                    "matchmaking-submitMatchScore",
                    requestData,
                    [complete] (RGN::Modules::Matchmaking::StartMatchResponseData result) {
                        complete(result.matchId);
                    },
                    fail);
            };
        static void FinishMatchAsync(
            string matchId,
            CancellationToken cancellationToken,
            const function<void(string result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["id"] = matchId;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Matchmaking::StartMatchResponseData>(
                    "matchmaking-finishMatch",
                    requestData,
                    [complete] (RGN::Modules::Matchmaking::StartMatchResponseData result) {
                        complete(result.matchId);
                    },
                    fail);
            };
    };
}}}