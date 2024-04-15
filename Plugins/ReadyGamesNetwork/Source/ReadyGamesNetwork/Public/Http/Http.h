#pragma once

#include "Http/HttpHeaders.h"
#include "Http/HttpListener.h"
#include "Http/HttpMethod.h"
#include "Http/HttpResponse.h"
#include "Http/HttpUtility.h"
#include <string>
#include <functional>

namespace RGN {
    class Http {
    public:
        static void Request(std::string url, HttpMethod method, HttpHeaders& headers, std::string body,
            const std::function<void(HttpResponse)>& callback);
        static bool WaitForInRequest(int32_t port, const std::function<void(std::string)>& callback, int32_t& boundedToPort);
        static void CancelWaitForInRequest(int32_t boundedToPort);
        static void Update();
    };
}