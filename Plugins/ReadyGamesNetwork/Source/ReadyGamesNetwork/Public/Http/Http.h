#pragma once

#include "HttpHeaders.h"
#include "HttpMethod.h"
#include "HttpResponse.h"
#include "HttpUtility.h"
#include <string>
#include <functional>

class Http {
public:
    static void Request(std::string url, HttpMethod method, HttpHeaders& headers, std::string body,
        const std::function<void(HttpResponse)>& callback);
};