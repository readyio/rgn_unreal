#pragma once

#include <string>
#include <functional>

class SignInCallback {
private:
	std::function<void(bool)> _callback;
public:
	SignInCallback(std::function<void(bool)> callback);
	void raise(bool isLoggedIn);
};