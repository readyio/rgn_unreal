#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../Currency/Currency.h"
#include "OnGameCompleteResult.h"
#include "OnGameCompleteRequestData.h"
#include "GameProgress.h"
#include "../../Model/Request/BaseMigrationRequestData.h"
#include "AddUserLevelRequestData.h"
#include "UpdateUserLevelRequestData.h"
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
                RGNCore::CallAPI<RGN::Modules::GameProgress::OnGameCompleteRequestData, RGN::Modules::GameProgress::OnGameCompleteResult>(
                    "game-onGameComplete",
                    requestData,
                    complete,
                    fail);
            };
        static void GetGameProgressAsync(
            const function<void(RGN::Modules::GameProgress::GameProgress result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                RGN::Model::Request::BaseMigrationRequestData requestData;
                RGNCore::CallAPI<RGN::Model::Request::BaseMigrationRequestData, RGN::Modules::GameProgress::GameProgress>(
                    "game-getGameProgress",
                    requestData,
                    complete,
                    fail);
            };
        static void AddUserProgressAsync(
            string userProgressJson,
            const function<void(string result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                RGN::Modules::GameProgress::AddUserLevelRequestData requestData;
                requestData.playerProgress = userProgressJson;
                RGNCore::CallAPI<RGN::Modules::GameProgress::AddUserLevelRequestData, string>(
                    "game-addPlayerProgress",
                    requestData,
                    [complete] (string result) {
                        complete(result);
                    },
                    fail);
            };
        static void UpdateUserProgressAsync(
            string userProgressJson,
            vector<RGN::Modules::Currency::Currency> reward,
            const function<void(string result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                RGN::Modules::GameProgress::UpdateUserLevelRequestData requestData;
                requestData.playerProgress = userProgressJson;
                requestData.reward = reward;
                RGNCore::CallAPI<RGN::Modules::GameProgress::UpdateUserLevelRequestData, string>(
                    "game-updatePlayerProgress",
                    requestData,
                    [complete] (string result) {
                        complete(result);
                    },
                    fail);
            };
        static void GetUserProgressAsync(
            const function<void(string result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                RGN::Model::Request::BaseMigrationRequestData requestData;
                RGNCore::CallAPI<RGN::Model::Request::BaseMigrationRequestData, string>(
                    "game-getPlayerProgress",
                    requestData,
                    [complete] (string result) {
                        complete(result);
                    },
                    fail);
            };
    };
}}}