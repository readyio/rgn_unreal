#include "Core/CoreModule/AuthChangeCallback.h"

AuthChangeCallback::AuthChangeCallback(std::function<void(bool)> callback)
    : _callback(callback) {}

void AuthChangeCallback::raise(bool isLoggedIn) {
    _callback(isLoggedIn);
}