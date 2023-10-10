#include "Core/RGNAuthCallback.h"

RGNAuthCallback::RGNAuthCallback(function<void(bool)> callback)
    : _callback(callback) {}

void RGNAuthCallback::raise(bool isLoggedIn) {
    _callback(isLoggedIn);
}