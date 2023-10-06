#pragma once

#include "HttpMethod.h"
#include "HttpHeaders.h"
#include "HttpResponse.h"
#include <string>
#include <functional>

class HttpAdapter {
public:
    static void Request(std::string url, HttpMethod method, HttpHeaders& headers, std::string body,
        const std::function<void(HttpResponse)>& callback);
};