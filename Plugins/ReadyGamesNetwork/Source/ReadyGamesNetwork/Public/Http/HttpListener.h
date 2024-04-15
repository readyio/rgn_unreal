#pragma once

#include "Impl/Http/HttpListenerImpl.h"
#include <string>
#include <functional>
#include <memory>

namespace RGN {
    class HttpListener {
    private:
        std::unique_ptr<HttpListenerImpl> pImpl;
    public:
        HttpListener();
        HttpListener(const HttpListener& other);
        HttpListener(HttpListener&& other) noexcept;
        ~HttpListener();
        HttpListener& operator=(const HttpListener& other);
        HttpListener& operator=(HttpListener&& other) noexcept;
        bool isListening();
        int32_t getPort();
        bool startListen(int32_t port, const std::function<void(std::string)>& callback, int32_t& boundedToPort);
        bool stopListen();
        void poll();
    };
}