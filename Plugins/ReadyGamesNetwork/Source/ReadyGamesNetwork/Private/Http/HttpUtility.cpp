#include "Http/HttpUtility.h"
#include <iostream>
#include <sstream>

namespace RGN {
    std::unordered_map<std::string, std::string> HttpUtility::ParseUrl(const std::string& url) {
        std::unordered_map<std::string, std::string> dictionary;
        size_t pos = url.find("?");
        if (pos != std::string::npos) {
            std::string params = url.substr(pos + 1);
            size_t start = 0;
            while (start < params.length()) {
                size_t end = params.find("&", start);
                if (end == std::string::npos) {
                    end = params.length();
                }
                std::string param = params.substr(start, end - start);
                size_t delimiter = param.find("=");
                if (delimiter != std::string::npos) {
                    std::string key = param.substr(0, delimiter);
                    std::string value = param.substr(delimiter + 1);
                    size_t percent = value.find("%20");
                    while (percent != std::string::npos) {
                        value.replace(percent, 3, " ");
                        percent = value.find("%20", percent + 1);
                    }
                    dictionary[key] = value;
                }
                start = end + 1;
            }
        }
        return dictionary;
    }

    std::string HttpUtility::GetUrlFromRawHttp(const std::string& rawHttpData) {
        std::istringstream iss(rawHttpData);
        std::string line;
        if (!std::getline(iss, line)) {
            return "";
        }
        if (line.empty()) {
            return "";
        }
        std::istringstream firstLineStream(line);
        std::string method, url, protocol;
        if (!(firstLineStream >> method >> url >> protocol)) {
            return "";
        }
        return url;
    }

    std::string HttpUtility::GetUrlHost(const std::string& url) {
        size_t host_start = url.find("://");
        if (url.find("://") == std::string::npos) {
            return "";
        }
        host_start += 3;
        size_t host_end = url.find_first_of("/?", host_start);
        if (host_end == std::string::npos) {
            return url.substr(0);
        }
        return url.substr(0, host_end);
    }
}