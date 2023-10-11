#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include <string>
#include <functional>
using namespace std;

namespace RGN { namespace Modules { namespace Analytics {
    class AnalyticsModule {
    public:
        static void LogEventAsync(
            string& eventName,
            string& eventParameters,
            System::Threading::CancellationToken& cancellationToken,
            const function<void(void)>& complete,
            const function<void(int httpCode, string error)>& fail) { }
    };
}}}