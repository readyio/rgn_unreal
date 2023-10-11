#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../../..//Core/RGNCore.h"
#include <string>
#include <functional>
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace Analytics {
    class AnalyticsModule {
    public:
        static void LogEventAsync(
            string eventName,
            string eventParameters,
            System::Threading::CancellationToken cancellationToken,
            const function<void(void)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                json requestData;
                requestData["eventName"] = eventName;
                requestData["projectId"] = RGNCore::GetAppId();
                requestData["userId"] = userId;
                requestData["userPseudoId"] = userPseudoId;
                requestData["sessionId"] = mSessionId;
                requestData["eventParameters"] = eventParameters;
                RGNCore::CallAPI("analytics-logEvent", requestData, complete, fail);
            };
    };
}}}