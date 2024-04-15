#include "Http/HttpHeaders.h"
#include <algorithm>

namespace RGN {
    void HttpHeaders::add(const std::string key, const std::string value) {
        store[key] = value;
    }

    std::string HttpHeaders::get(const std::string& key) const {
        if (store.find(key) != store.end()) {
            return store.at(key);
        }
        return "";
    }

    void HttpHeaders::remove(const std::string& key) {
        if (store.find(key) != store.end()) {
            store.erase(key);
        }
    }

    std::vector<std::string> HttpHeaders::keys() const {
        std::vector<std::string> keys;
        for (const auto& kv : store) {
            keys.push_back(kv.first);
        }
        return keys;
    }
}