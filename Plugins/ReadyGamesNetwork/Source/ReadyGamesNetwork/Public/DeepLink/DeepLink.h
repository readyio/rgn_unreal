#pragma once

#include <vector>
#include <functional>
#include <string>

class DeepLink {
private:
	static std::vector<std::function<void(std::string)>> _callbacks;
public:
	static void Initialize();
	static void Start();
	static void Stop();
	static void Listen(std::function<void(std::string)> callback);
	static void OnDeepLink(std::string payload);
};