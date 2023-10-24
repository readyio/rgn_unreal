#include "Core/RGNAuthCallback.h"

RGNAuthCallback::RGNAuthCallback(function<void(bool)> onAuthChange)
    : _onAuthChange(onAuthChange) {}

void RGNAuthCallback::onAuthChange(bool isLoggedIn) {
    _onAuthChange(isLoggedIn);
}