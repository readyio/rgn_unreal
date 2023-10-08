#include "Core/CoreModule/SignInCallback.h"

SignInCallback::SignInCallback(std::function<void(bool)> callback)
    : _callback(callback) {}

void SignInCallback::raise(bool isLoggedIn) {
    _callback(isLoggedIn);
}