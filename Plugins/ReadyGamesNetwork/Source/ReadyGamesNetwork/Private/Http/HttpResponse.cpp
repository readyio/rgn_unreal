#include "Http/HttpResponse.h"

namespace RGN {
    const std::string& HttpResponse::getResponseBody() const {
        return _responseBody;
    }

    int HttpResponse::getResponseCode() const {
        return _responseCode;
    }
}