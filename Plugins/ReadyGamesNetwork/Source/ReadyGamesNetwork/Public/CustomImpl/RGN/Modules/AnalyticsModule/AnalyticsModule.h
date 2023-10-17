#pragma once

#include "../../../../json.hpp"
#include "../../../../Core/RGNCore.h"
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
                // TODO
            };
	};
}}}
