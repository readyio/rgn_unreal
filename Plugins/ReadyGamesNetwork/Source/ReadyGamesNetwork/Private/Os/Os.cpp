#include "Os/Os.h"
#include "HAL/PlatformProcess.h"

namespace RGN {
	void Os::OpenURL(std::string url) {
		FString urlFString(url.c_str());
		FPlatformProcess::LaunchURL(*urlFString, nullptr, nullptr);
	}
}