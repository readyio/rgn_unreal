#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "MatchmakingData.h"
#include <string>
#include <functional>
using namespace std;

namespace RGN { namespace Modules { namespace Matchmaking {
    class MatchmakingModule {
    public:
        static void GetJoinOpenMatchesAsync(
            int32_t limit,
            string& startAfter,
            System::Threading::CancellationToken& cancellationToken,
            const function<void(vector<RGN::Modules::Matchmaking::MatchmakingData>& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void GetVoteOpenMatchesAsync(
            int32_t limit,
            string& startAfter,
            System::Threading::CancellationToken& cancellationToken,
            const function<void(vector<RGN::Modules::Matchmaking::MatchmakingData>& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void GetFinishedMatchesAsync(
            int32_t limit,
            string& startAfter,
            System::Threading::CancellationToken& cancellationToken,
            const function<void(vector<RGN::Modules::Matchmaking::MatchmakingData>& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void GetFinishedMatchByIdAsync(
            string& matchId,
            System::Threading::CancellationToken& cancellationToken,
            const function<void(RGN::Modules::Matchmaking::MatchmakingData& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void CreateMatchAsync(
            RGN::Modules::Matchmaking::MatchmakingData& matchConfig,
            bool participateInOnCreate,
            std::unordered_map<string, json>& participatePayload,
            System::Threading::CancellationToken& cancellationToken,
            const function<void(RGN::Modules::Matchmaking::MatchmakingData& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void ParticipateInMatchAsync(
            string& matchId,
            std::unordered_map<string, json>& participantPayload,
            System::Threading::CancellationToken& cancellationToken,
            const function<void(string& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void StartMatchAsync(
            string& matchId,
            System::Threading::CancellationToken& cancellationToken,
            const function<void(string& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void VoteForMatchAsync(
            string& matchId,
            string& participantId,
            System::Threading::CancellationToken& cancellationToken,
            const function<void(string& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void SubmitMatchScoreAsync(
            string& matchId,
            int64_t score,
            System::Threading::CancellationToken& cancellationToken,
            const function<void(string& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void FinishMatchAsync(
            string& matchId,
            System::Threading::CancellationToken& cancellationToken,
            const function<void(string& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
    };
}}}