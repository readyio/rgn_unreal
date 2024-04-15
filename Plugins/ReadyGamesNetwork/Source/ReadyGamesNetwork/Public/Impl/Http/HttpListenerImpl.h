#pragma once

#include "Sockets.h"
#include "Networking.h"
#include <string>
#include <functional>

namespace RGN {
    class HttpListenerImpl {
    private:
        std::function<void(std::string)> _callback;
        FSocket* _currListenSocket;
        FSocket* _currConnectSocket;
    public:
        bool isListening();
        int32_t getPort();
        bool startListen(int32_t port, const std::function<void(std::string)>& callback, int32_t& boundedToPort);
        bool stopListen();
        void poll();
    };
}