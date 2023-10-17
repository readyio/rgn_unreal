#pragma once

#include "../../../../json.hpp"
#include "../../../../Core/RGNCore.h"
#include "../../../../Core/RGNAnalytics.h"
#include "../../../../Generated/RGN/Modules/Analytics/AnalyticsModule.h"
#include <string>

using namespace std;

namespace RGN { namespace Modules { namespace Analytics {
	class AnalyticsModuleCustomImpl {
	public:
        static void LogEventAsync(
            string eventName,
            string eventParameters,
            CancellationToken cancellationToken,
            const function<void(void)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json bodyJson;
                bodyJson["eventName"] = eventName;
                bodyJson["projectId"] = RGNCore::GetAppId();
                bodyJson["userId"] = RGNCore::GetUserId();
                bodyJson["userPseudoId"] = RGNAnalytics::GetAnalyticsId();
                bodyJson["sessionId"] = RGNAnalytics::GetSessionId();
                bodyJson["eventParameters"] = eventParameters;
                RGNCore::CallAPI("achievements-getByAppIds", bodyJson, nullptr, nullptr);
            };
	};
}}}
