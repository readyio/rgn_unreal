#pragma once

#include <string>
#include <unordered_map>

namespace RGN {
	class Environment {
	public:
		static void OpenURL(std::string url);
		static std::string GetProcessorType();
		static int32_t GetProcessorCount();
		static int32_t GetSystemMemorySize();
		static std::string GetGraphicsDeviceName();
		static int32_t GetGraphicsMemorySize();
		static std::string GetOperatingSystem();
		static std::string GetOperatingSystemFamily();
		static std::string GetEngineName();
		static std::string GetEngineVersion();
		static std::string GetAppIdentifier();
		static std::string GetAppInstallerName();
	};
}