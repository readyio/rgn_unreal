#pragma once

#include <string>
#include <functional>

class DeepLinkCallback {
private:
	std::function<void(std::string)> _callback;
public:
	DeepLinkCallback(std::function<void(std::string)> callback);
	void raise(std::string payload);
};