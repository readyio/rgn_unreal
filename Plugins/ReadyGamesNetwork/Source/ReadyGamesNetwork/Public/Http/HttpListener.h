#pragma once

#include <string>
#include <functional>

namespace RGN {
    class HttpListener {
    public:
        bool isListening();
        int32_t getPort();
        bool startListen(int32_t port, const std::function<void(std::string)>& callback, int32_t& boundedToPort);
        bool stopListen();
        void poll();
    };
}