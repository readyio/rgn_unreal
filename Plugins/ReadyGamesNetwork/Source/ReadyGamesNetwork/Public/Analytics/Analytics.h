#pragma once

#include <string>

namespace RGN {
    class Analytics
    {
    private:
        static std::string _analyticsId;
        static int64_t _sessionId;

        static void GenerateSessionId();
        static void LoadOrGenerateAnalyticsId();
    public:
        static void Initialize();
        static std::string GetAnalyticsId();
        static int64_t GetSessionId();
        static void LogEvent(std::string eventName, std::string eventParameters = "");
    };
}