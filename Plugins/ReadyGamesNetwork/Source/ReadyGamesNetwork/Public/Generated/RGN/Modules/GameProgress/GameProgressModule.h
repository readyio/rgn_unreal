#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../Currency/Currency.h"
#include "OnGameCompleteResult.h"
#include "GameProgress.h"
#include "UpdateUserLevelResponseData.h"
#include "GetPlayerLevelResponseData.h"
#include <string>
#include <functional>
using namespace std;

namespace RGN { namespace Modules { namespace GameProgress {
    class GameProgressModule {
    public:
        static void OnGameCompleteAsync(
            vector<RGN::Modules::Currency::Currency>& reward,
            const function<void(RGN::Modules::GameProgress::OnGameCompleteResult& result)>& complete,
            const function<void(int httpCode, string error)>& fail) { }
        static void GetGameProgressAsync(
            const function<void(RGN::Modules::GameProgress::GameProgress& result)>& complete,
            const function<void(int httpCode, string error)>& fail) { }
        template<class T>
        static void AddUserProgressAsync(
            T userProgress,
            const function<void(T result)>& complete,
            const function<void(int httpCode, string error)>& fail) { }
        template<class T>
        static void UpdateUserProgressAsync(
            T userProgress,
            vector<RGN::Modules::Currency::Currency>& reward,
            const function<void(RGN::Modules::GameProgress::UpdateUserLevelResponseData<T> result)>& complete,
            const function<void(int httpCode, string error)>& fail) { }
        template<class T>
        static void GetUserProgressAsync(
            const function<void(RGN::Modules::GameProgress::GetPlayerLevelResponseData<T> result)>& complete,
            const function<void(int httpCode, string error)>& fail) { }
    };
}}}