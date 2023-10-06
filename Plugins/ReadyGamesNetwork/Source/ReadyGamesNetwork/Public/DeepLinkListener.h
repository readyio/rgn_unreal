#pragma once

#include <string>
#include <functional>

class DeepLinkListener {
private:
	std::function<void(std::string)> _callback;
public:
	DeepLinkListener(std::function<void(std::string)> callback);
	~DeepLinkListener();
	void onDeepLink(std::string payload);
};