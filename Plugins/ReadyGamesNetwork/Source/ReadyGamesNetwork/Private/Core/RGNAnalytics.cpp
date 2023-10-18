#include "Core/RGNAnalytics.h"
#include "SharedPrefs/SharedPrefs.h"
#include "random.hpp"
#include "json.hpp"

std::string RGNAnalytics::_analyticsId = "";
std::string RGNAnalytics::_sessionId = "";

void RGNAnalytics::GenerateSessionId() {
    _sessionId = RGN::Random::generate_uuid_v4();
}

void RGNAnalytics::LoadOrGenerateAnalyticsId() {
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

void RGNAnalytics::Initialize() {
    GenerateSessionId();
    LoadOrGenerateAnalyticsId();
}

std::string RGNAnalytics::GetSessionId() {
    return _sessionId;
}

std::string RGNAnalytics::GetAnalyticsId() {
    return _analyticsId;
}