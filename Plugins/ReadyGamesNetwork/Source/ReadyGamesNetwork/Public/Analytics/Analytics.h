#pragma once

#include <string>

namespace RGN {
    class Analytics
    {
    private:
        static std::string _sessionId;
        static std::string _analyticsId;

        static void GenerateSessionId();
        static void LoadOrGenerateAnalyticsId();
    public:
        static void Initialize();
        static std::string GetSessionId();
        static std::string GetAnalyticsId();
    };
}