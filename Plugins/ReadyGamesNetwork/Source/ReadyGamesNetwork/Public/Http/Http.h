#pragma once

#include "HttpListener.h"
#include "HttpHeaders.h"
#include "HttpMethod.h"
#include "HttpResponse.h"
#include "HttpUtility.h"
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