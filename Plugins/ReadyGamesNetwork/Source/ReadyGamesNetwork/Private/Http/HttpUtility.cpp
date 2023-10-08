#include "Http/HttpUtility.h"

std::unordered_map<std::string, std::string> HttpUtility::ParseURL(const std::string& url)
{
    std::unordered_map<std::string, std::string> dictionary;

    size_t pos = url.find("?");
    if (pos != std::string::npos) {
        std::string params = url.substr(pos + 1);

        size_t start = 0;
        while (start < params.length()) {
            size_t end = params.find("&", start);
            if (end == std::string::npos)
                end = params.length();

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