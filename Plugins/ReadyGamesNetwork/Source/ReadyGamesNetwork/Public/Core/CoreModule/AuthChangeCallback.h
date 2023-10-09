#pragma once

#include <string>
#include <functional>

class AuthChangeCallback {
private:
	std::function<void(bool)> _callback;
public:
	AuthChangeCallback(std::function<void(bool)> callback);
	void raise(bool isLoggedIn);
};