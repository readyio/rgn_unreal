#pragma once

#include <string>
#include <functional>

using namespace std;

class RGNAuthCallback {
private:
	function<void(bool)> _callback;
public:
	RGNAuthCallback(function<void(bool)> callback);
	void raise(bool isLoggedIn);
};