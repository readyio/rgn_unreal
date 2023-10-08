#include "DeepLink/DeepLinkCallback.h"

DeepLinkCallback::DeepLinkCallback(std::function<void(std::string)> callback)
    : _callback(callback) {}

void DeepLinkCallback::raise(std::string payload) {
    _callback(payload);
}