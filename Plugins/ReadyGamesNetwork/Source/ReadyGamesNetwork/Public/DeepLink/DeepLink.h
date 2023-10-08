#pragma once

#include "DeepLinkCallback.h"
#include <vector>
#include <functional>
#include <string>

class DeepLink {
private:
	static std::vector<DeepLinkCallback*> _callbacks;
public:
	static void Initialize();
	static void Start();
	static void Stop();
	static void Subscribe(DeepLinkCallback* callback);
	static void Unsubscribe(DeepLinkCallback* callback);
	static void OnDeepLink(std::string payload);
};