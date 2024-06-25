#include "Analytics/Analytics.h"
#include "SharedPrefs/SharedPrefs.h"
#include "Core/RGNCore.h"
#include "Core/RGNAuth.h"
#include "Utility/CancellationToken.h"
#include "random.hpp"
#include "json.hpp"
#include <chrono>

namespace RGN {
    std::string Analytics::_analyticsId = "";
    int64_t Analytics::_sessionId = 0;

    void Analytics::GenerateSessionId() {
        std::chrono::system_clock::time_point now = std::chrono::system_clock::now();
        std::chrono::time_point<std::chrono::system_clock, std::chrono::milliseconds> nowInMs
            = std::chrono::time_point_cast<std::chrono::milliseconds>(now);
        std::chrono::milliseconds epoch = nowInMs.time_since_epoch();
        long long unixTimestampMs = epoch.count();
        _sessionId = unixTimestampMs;
    }

    void Analytics::LoadOrGenerateAnalyticsId() {
        std::string analyticsInfoString;
        if (SharedPrefs::Load("AnalyticsInfo", analyticsInfoString)) {
            nlohmann::json analyticsInfoJson = nlohmann::json::parse(analyticsInfoString);
            if (analyticsInfoJson.contains("analyticsId")) {
                _analyticsId = analyticsInfoJson["analyticsId"].get<std::string>();
            }
        }
        if (_analyticsId.empty()) {
            nlohmann::json analyticsInfoJson;
            _analyticsId = RGN::Random::generate_uuid_v4();
            analyticsInfoJson["analyticsId"] = _analyticsId;
            SharedPrefs::Save("AnalyticsInfo", analyticsInfoJson.dump());
        }
    }

    void Analytics::Initialize() {
        GenerateSessionId();
        LoadOrGenerateAnalyticsId();
    }

    void Analytics::LogEvent(std::string eventName, std::string eventParameters) {
        std::string analyticsId = GetAnalyticsId();
        nlohmann::json parameters;
        parameters["eventName"] = eventName;
        parameters["projectId"] = RGNCore::GetAppId();
        parameters["userId"] = RGNAuth::GetUserId();
        parameters["sessionId"] = GetSessionId();
        parameters["eventParameters"] = eventParameters;
        if (analyticsId.empty())
        {
            parameters["userPseudoId"] = nullptr;
        }
        else
        {
            parameters["userPseudoId"] = analyticsId;
        }
        RGNCore::CallAPI("analytics-logEvent", parameters, nullptr, nullptr, false, CancellationToken());
    }

    int64_t Analytics::GetSessionId() {
        return _sessionId;
    }

    std::string Analytics::GetAnalyticsId() {
        return _analyticsId;
    }
}