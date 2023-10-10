#pragma once

#include <string>
#include <functional>

using namespace std;

class AuthChangeCallback {
private:
	function<void(bool)> _callback;
public:
	AuthChangeCallback(function<void(bool)> callback);
	void raise(bool isLoggedIn);
};