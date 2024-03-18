#include "Analytics/Analytics.h"
#include "SharedPrefs/SharedPrefs.h"
#include "random.hpp"
#include "json.hpp"

namespace RGN {
    std::string Analytics::_analyticsId = "";
    std::string Analytics::_sessionId = "";

    void Analytics::GenerateSessionId() {
        _sessionId = RGN::Random::generate_uuid_v4();
    }

    void Analytics::LoadOrGenerateAnalyticsId() {
        std::string analyticsInfoString;
        if (SharedPrefs::Load("AnalyticsInfo", analyticsInfoString)) {
            nlohmann::json analyticsInfoJson = nlohmann::json::parse(analyticsInfoString);
            if (analyticsInfoJson.contains("analyticsId")) {
                _analyticsId = analyticsInfoJson["analyticsId"].get<std::string>();
            }
            else {
                _analyticsId = RGN::Random::generate_uuid_v4();
                analyticsInfoJson["analyticsId"] = _analyticsId;
                SharedPrefs::Save("AnalyticsInfo", analyticsInfoJson.dump());
            }
        }
    }

    void Analytics::Initialize() {
        GenerateSessionId();
        LoadOrGenerateAnalyticsId();
    }

    std::string Analytics::GetSessionId() {
        return _sessionId;
    }

    std::string Analytics::GetAnalyticsId() {
        return _analyticsId;
    }
}