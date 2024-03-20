#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../../../Core/RGNCore.h"
#include "../../../../Utility/CancellationToken.h"
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
        /**
         * Asynchronously gets a list of open matches that the user can join
         * @param limit - An integer indicating the maximum number of matches to retrieve.
         * @param startAfter - An optional parameter representing a match id after which to
         * start retrieving the matches. The default is an empty string.
         * @param cancellationToken - Cancellation token to cancel the async operation. Optional
         * @return A Task that represents the asynchronous operation.
         * The Task result contains a list of objects, which are the open to join matches.
         */
        static void GetJoinOpenMatchesAsync(
            const function<void(const vector<RGN::Modules::Matchmaking::MatchmakingData>& result)>& success,
            const function<void(const int httpCode, const string& error)>& fail,
            const int32_t limit,
            const string& startAfter = "",
            const CancellationToken& cancellationToken = CancellationToken()) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["limit"] = limit;
                requestData["startAfter"] = startAfter;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Matchmaking::GetMatchesResponseData>(
                    "matchmaking-getJoinOpenMatches",
                    requestData,
                    [success] (const RGN::Modules::Matchmaking::GetMatchesResponseData& result) {
                        success(result.matches);
                    },
                    fail,
                    false,
                    cancellationToken);
            };
        /**
         * Asynchronously gets a list of open matches that the user can vote. Some matches can have voting enabled.
         * If the voting is enabled the users can vote for the match participants
         * @param limit - An integer indicating the maximum number of matches to retrieve.
         * @param startAfter - An optional parameter representing a matches id after which to
         * start retrieving the matches. The default is an empty string.
         * @param cancellationToken - Cancellation token to cancel the async operation. Optional
         * @return A Task that represents the asynchronous operation.
         * The Task result contains a list of objects, which are the open to vote matches.
         */
        static void GetVoteOpenMatchesAsync(
            const function<void(const vector<RGN::Modules::Matchmaking::MatchmakingData>& result)>& success,
            const function<void(const int httpCode, const string& error)>& fail,
            const int32_t limit,
            const string& startAfter = "",
            const CancellationToken& cancellationToken = CancellationToken()) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["limit"] = limit;
                requestData["startAfter"] = startAfter;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Matchmaking::GetMatchesResponseData>(
                    "matchmaking-getVoteOpenMatches",
                    requestData,
                    [success] (const RGN::Modules::Matchmaking::GetMatchesResponseData& result) {
                        success(result.matches);
                    },
                    fail,
                    false,
                    cancellationToken);
            };
        /**
         * Asynchronously gets a list of finished matches
         * @param limit - An integer indicating the maximum number of matches to retrieve.
         * @param startAfter - An optional parameter representing a matches id after which to
         * start retrieving the matches. The default is an empty string.
         * @param cancellationToken - Cancellation token to cancel the async operation. Optional
         * @return A Task that represents the asynchronous operation.
         * The Task result contains a list of objects, which are the finished matches for current app.
         */
        static void GetFinishedMatchesAsync(
            const function<void(const vector<RGN::Modules::Matchmaking::MatchmakingData>& result)>& success,
            const function<void(const int httpCode, const string& error)>& fail,
            const int32_t limit,
            const string& startAfter = "",
            const CancellationToken& cancellationToken = CancellationToken()) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["limit"] = limit;
                requestData["startAfter"] = startAfter;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Matchmaking::GetMatchesResponseData>(
                    "matchmaking-getFinishedMatches",
                    requestData,
                    [success] (const RGN::Modules::Matchmaking::GetMatchesResponseData& result) {
                        success(result.matches);
                    },
                    fail,
                    false,
                    cancellationToken);
            };
        /**
         * Asynchronously finished match by provided id. In case the match does not exist, or is from
         * another app throws an Exception.
         * @param matchId - The match ID that is already finished.
         * @param cancellationToken - Cancellation token to cancel the async operation. Optional
         * @return A Task that represents the asynchronous operation.
         * The Task result contains the finished match data
         */
        static void GetFinishedMatchByIdAsync(
            const function<void(const RGN::Modules::Matchmaking::MatchmakingData& result)>& success,
            const function<void(const int httpCode, const string& error)>& fail,
            const string& matchId,
            const CancellationToken& cancellationToken = CancellationToken()) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["matchId"] = matchId;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Matchmaking::GetMatchResponseData>(
                    "matchmaking-getFinishedMatchById",
                    requestData,
                    [success] (const RGN::Modules::Matchmaking::GetMatchResponseData& result) {
                        success(result.match);
                    },
                    fail,
                    false,
                    cancellationToken);
            };
        static void CreateMatchAsync(
            const function<void(const RGN::Modules::Matchmaking::MatchmakingData& result)>& success,
            const function<void(const int httpCode, const string& error)>& fail,
            const RGN::Modules::Matchmaking::MatchmakingData& matchConfig,
            const std::unordered_map<string, string>& participatePayload = std::unordered_map<string, string>(),
            const bool participateInOnCreate = true,
            const CancellationToken& cancellationToken = CancellationToken()) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["matchConfig"] = matchConfig;
                requestData["participateInOnCreate"] = participateInOnCreate;
                requestData["participatePayload"] = participatePayload;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Matchmaking::GetMatchResponseData>(
                    "matchmaking-createMatch",
                    requestData,
                    [success] (const RGN::Modules::Matchmaking::GetMatchResponseData& result) {
                        success(result.match);
                    },
                    fail,
                    false,
                    cancellationToken);
            };
        static void ParticipateInMatchAsync(
            const function<void(const string& result)>& success,
            const function<void(const int httpCode, const string& error)>& fail,
            const string& matchId,
            const std::unordered_map<string, string>& participantPayload = std::unordered_map<string, string>(),
            const CancellationToken& cancellationToken = CancellationToken()) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["id"] = matchId;
                requestData["participantPayload"] = participantPayload;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Matchmaking::StartMatchResponseData>(
                    "matchmaking-participateInMatch",
                    requestData,
                    [success] (const RGN::Modules::Matchmaking::StartMatchResponseData& result) {
                        success(result.matchId);
                    },
                    fail,
                    false,
                    cancellationToken);
            };
        /**
         * Asynchronously starts a matchmaking match identified by the provided match ID.
         * @param matchId - The ID of the match to start.
         * @param cancellationToken - Optional parameter to enable cancellation of the task.
         * Default value is an unset CancellationToken.
         * @return A task that represents the asynchronous operation.
         * The task result is the ID of the match that has been started.
         * @throw: Thrown when matchId is null or empty.
         */
        static void StartMatchAsync(
            const function<void(const string& result)>& success,
            const function<void(const int httpCode, const string& error)>& fail,
            const string& matchId,
            const CancellationToken& cancellationToken = CancellationToken()) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["id"] = matchId;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Matchmaking::StartMatchResponseData>(
                    "matchmaking-startMatch",
                    requestData,
                    [success] (const RGN::Modules::Matchmaking::StartMatchResponseData& result) {
                        success(result.matchId);
                    },
                    fail,
                    false,
                    cancellationToken);
            };
        /**
         * Asynchronously votes for a matchmaking match identified by the provided match ID and participant ID.
         * @param matchId - The ID of the match to vote for.
         * @param participantId - The ID of the participant casting the vote.
         * @param cancellationToken - Optional parameter to enable cancellation of the task.
         * Default value is an unset CancellationToken.
         * @return A task that represents the asynchronous operation.
         * The task result is the ID of the match for which the vote has been cast.
         * @throw: Thrown when matchId or participantId is null or empty.
         */
        static void VoteForMatchAsync(
            const function<void(const string& result)>& success,
            const function<void(const int httpCode, const string& error)>& fail,
            const string& matchId,
            const string& participantId,
            const CancellationToken& cancellationToken = CancellationToken()) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["id"] = matchId;
                requestData["participantId"] = participantId;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Matchmaking::StartMatchResponseData>(
                    "matchmaking-voteForMatch",
                    requestData,
                    [success] (const RGN::Modules::Matchmaking::StartMatchResponseData& result) {
                        success(result.matchId);
                    },
                    fail,
                    false,
                    cancellationToken);
            };
        /**
         * Asynchronously submits the score for a matchmaking match identified by the provided match ID.
         * @param matchId - The ID of the match for which the score is being submitted.
         * @param score - The score to be submitted for the match.
         * @param cancellationToken - Optional parameter to enable cancellation of the task.
         * Default value is an unset CancellationToken.
         * @return A task that represents the asynchronous operation.
         * The task result is the ID of the match for which the score has been submitted.
         * @throw: Thrown when matchId is null or empty.
         */
        static void SubmitMatchScoreAsync(
            const function<void(const string& result)>& success,
            const function<void(const int httpCode, const string& error)>& fail,
            const string& matchId,
            const int64_t score,
            const CancellationToken& cancellationToken = CancellationToken()) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["id"] = matchId;
                requestData["score"] = score;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Matchmaking::StartMatchResponseData>(
                    "matchmaking-submitMatchScore",
                    requestData,
                    [success] (const RGN::Modules::Matchmaking::StartMatchResponseData& result) {
                        success(result.matchId);
                    },
                    fail,
                    false,
                    cancellationToken);
            };
        /**
         * Asynchronously finishes a matchmaking match identified by the provided match ID.
         * @param matchId - The ID of the match to finish.
         * @param cancellationToken - Optional parameter to enable cancellation of the task.
         * Default value is an unset CancellationToken.
         * @return A task that represents the asynchronous operation.
         * The task result is the ID of the match that has been finished.
         * @throw: Thrown when matchId is null or empty.
         */
        static void FinishMatchAsync(
            const function<void(const string& result)>& success,
            const function<void(const int httpCode, const string& error)>& fail,
            const string& matchId,
            const CancellationToken& cancellationToken = CancellationToken()) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["id"] = matchId;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Matchmaking::StartMatchResponseData>(
                    "matchmaking-finishMatch",
                    requestData,
                    [success] (const RGN::Modules::Matchmaking::StartMatchResponseData& result) {
                        success(result.matchId);
                    },
                    fail,
                    false,
                    cancellationToken);
            };
    };
}}}