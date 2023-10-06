#pragma once

#include "DeepLinkListener.h"
#include <vector>
#include <functional>
#include <string>

class DeepLinkAdapter {
private:
	static std::vector<DeepLinkListener*> _listeners;
public:
	static void Initialize();
	static void Start();
	static void Stop();
	static void AddListener(DeepLinkListener* listener);
	static void RemoveListener(DeepLinkListener* listener);
	static void OnDeepLink(std::string payload);
};