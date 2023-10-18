#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../Currency/Currency.h"
#include "OnGameCompleteResult.h"
#include "OnGameCompleteRequestData.h"
#include "GameProgress.h"
#include "../../Model/Request/BaseMigrationRequestData.h"
#include <string>
#include <functional>
using namespace std;

namespace RGN { namespace Modules { namespace GameProgress {
    class GameProgressModule {
    public:
        static void OnGameCompleteAsync(
            vector<RGN::Modules::Currency::Currency> reward,
            const function<void(RGN::Modules::GameProgress::OnGameCompleteResult result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                RGN::Modules::GameProgress::OnGameCompleteRequestData requestData;
                requestData.reward = reward;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::GameProgress::OnGameCompleteResult>(
                    "game-onGameComplete",
                    requestData,
                    complete,
                    fail);
            };
        static void GetGameProgressAsync(
            const function<void(RGN::Modules::GameProgress::GameProgress result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                RGN::Model::Request::BaseMigrationRequestData requestData;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::GameProgress::GameProgress>(
                    "game-getGameProgress",
                    requestData,
                    complete,
                    fail);
            };
        static void AddUserProgressAsync(
            string userProgressJson,
            const function<void(string result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                RGN::Modules::GameProgress::AddUserLevelRequestData<T> requestData;
                requestData.playerProgress = userProgressJson;
                RGNCore::CallAPI<nlohmann::json, null>(
                    "game-addPlayerProgress",
                    requestData,
                    complete,
                    fail);
            };
        static void UpdateUserProgressAsync(
            string userProgressJson,
            vector<RGN::Modules::Currency::Currency> reward,
            const function<void(string result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                RGN::Modules::GameProgress::UpdateUserLevelRequestData<T> requestData;
                requestData.playerProgress = userProgressJson;
                requestData.reward = reward;
                RGNCore::CallAPI<nlohmann::json, null>(
                    "game-updatePlayerProgress",
                    requestData,
                    complete,
                    fail);
            };
        static void GetUserProgressAsync(
            const function<void(string result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                RGN::Model::Request::BaseMigrationRequestData requestData;
                RGNCore::CallAPI<nlohmann::json, null>(
                    "game-getPlayerProgress",
                    requestData,
                    complete,
                    fail);
            };
    };
}}}