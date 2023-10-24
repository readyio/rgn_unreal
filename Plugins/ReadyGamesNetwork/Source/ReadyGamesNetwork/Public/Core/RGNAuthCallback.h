#pragma once

#include <string>
#include <functional>

using namespace std;

class RGNAuthCallback {
private:
	function<void(bool)> _onAuthChange;
public:
	RGNAuthCallback(function<void(bool)> onAuthChange);
	void onAuthChange(bool isLoggedIn);
};