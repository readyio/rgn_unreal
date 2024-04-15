#pragma once

#include <string>
#include <unordered_map>

namespace RGN {
    class HttpUtility {
    public:
        static std::unordered_map<std::string, std::string> ParseUrl(const std::string& url);
        static std::string GetUrlFromRawHttp(const std::string& rawHttpData);
        static std::string GetUrlHost(const std::string& url);
    };
}