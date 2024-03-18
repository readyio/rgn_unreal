#pragma once

#include "../Utility/FunctionEvent.h"
#include <vector>
#include <string>

namespace RGN {
	class DeepLink {
	private:
		static Utility::FunctionEvent<void(bool, std::string)> _deepLinkOpenEvent;
	public:
		static void Initialize();
		static void Start();
		static void Stop();
		static void Listen(std::function<void(bool, std::string)> callback);
		static void OnDeepLink(bool, std::string url);
	};
}