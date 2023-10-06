#include "DeepLinkListener.h"

DeepLinkListener::DeepLinkListener(std::function<void(std::string)> callback)
    : _callback(callback) {}

DeepLinkListener::~DeepLinkListener() {
}

void DeepLinkListener::onDeepLink(std::string payload) {
    _callback(payload);
}