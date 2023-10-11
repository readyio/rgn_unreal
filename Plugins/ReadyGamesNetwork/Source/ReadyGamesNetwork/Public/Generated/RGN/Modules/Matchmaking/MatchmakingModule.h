#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../../..//Core/RGNCore.h"
#include "MatchmakingData.h"
#include <string>
#include <functional>
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace Matchmaking {
    class MatchmakingModule {
    public:
        static void GetJoinOpenMatchesAsync(
            int32_t limit,
            string startAfter,
            System::Threading::CancellationToken cancellationToken,
            const function<void(vector<RGN::Modules::Matchmaking::MatchmakingData> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["limit"] = limit;
                requestData["startAfter"] = startAfter;
                RGNCore::CallAPI("matchmaking-getJoinOpenMatches", requestData, complete, fail);
            };
        static void GetVoteOpenMatchesAsync(
            int32_t limit,
            string startAfter,
            System::Threading::CancellationToken cancellationToken,
            const function<void(vector<RGN::Modules::Matchmaking::MatchmakingData> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["limit"] = limit;
                requestData["startAfter"] = startAfter;
                RGNCore::CallAPI("matchmaking-getVoteOpenMatches", requestData, complete, fail);
            };
        static void GetFinishedMatchesAsync(
            int32_t limit,
            string startAfter,
            System::Threading::CancellationToken cancellationToken,
            const function<void(vector<RGN::Modules::Matchmaking::MatchmakingData> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["limit"] = limit;
                requestData["startAfter"] = startAfter;
                RGNCore::CallAPI("matchmaking-getFinishedMatches", requestData, complete, fail);
            };
        static void GetFinishedMatchByIdAsync(
            string matchId,
            System::Threading::CancellationToken cancellationToken,
            const function<void(RGN::Modules::Matchmaking::MatchmakingData result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["matchId"] = matchId;
                RGNCore::CallAPI("matchmaking-getFinishedMatchById", requestData, complete, fail);
            };
        static void CreateMatchAsync(
            RGN::Modules::Matchmaking::MatchmakingData matchConfig,
            bool participateInOnCreate,
            std::unordered_map<string, json> participatePayload,
            System::Threading::CancellationToken cancellationToken,
            const function<void(RGN::Modules::Matchmaking::MatchmakingData result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["matchConfig"] = matchConfig;
                requestData["participateInOnCreate"] = participateInOnCreate;
                requestData["participatePayload"] = participatePayload;
                RGNCore::CallAPI("matchmaking-createMatch", requestData, complete, fail);
            };
        static void ParticipateInMatchAsync(
            string matchId,
            std::unordered_map<string, json> participantPayload,
            System::Threading::CancellationToken cancellationToken,
            const function<void(string result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["id"] = matchId;
                requestData["participantPayload"] = participantPayload;
                RGNCore::CallAPI("matchmaking-participateInMatch", requestData, complete, fail);
            };
        static void StartMatchAsync(
            string matchId,
            System::Threading::CancellationToken cancellationToken,
            const function<void(string result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["id"] = matchId;
                RGNCore::CallAPI("matchmaking-startMatch", requestData, complete, fail);
            };
        static void VoteForMatchAsync(
            string matchId,
            string participantId,
            System::Threading::CancellationToken cancellationToken,
            const function<void(string result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["id"] = matchId;
                requestData["participantId"] = participantId;
                RGNCore::CallAPI("matchmaking-voteForMatch", requestData, complete, fail);
            };
        static void SubmitMatchScoreAsync(
            string matchId,
            int64_t score,
            System::Threading::CancellationToken cancellationToken,
            const function<void(string result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["id"] = matchId;
                requestData["score"] = score;
                RGNCore::CallAPI("matchmaking-submitMatchScore", requestData, complete, fail);
            };
        static void FinishMatchAsync(
            string matchId,
            System::Threading::CancellationToken cancellationToken,
            const function<void(string result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["id"] = matchId;
                RGNCore::CallAPI("matchmaking-finishMatch", requestData, complete, fail);
            };
    };
}}}