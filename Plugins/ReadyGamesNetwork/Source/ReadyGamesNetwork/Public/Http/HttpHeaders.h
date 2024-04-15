#pragma once

#include <string>
#include <map>
#include <vector>

namespace RGN {
    class HttpHeaders {
    private:
        std::map<std::string, std::string> store;

    public:
        void add(const std::string key, const std::string value);
        std::string get(const std::string& key) const;
        void remove(const std::string& key);
        std::vector<std::string> keys() const;
    };
}