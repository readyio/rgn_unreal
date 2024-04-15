#include "Os/Os.h"
#include "HAL/PlatformProcess.h"

namespace RGN {
	void Os::OpenURL(std::string url) {
		FString urlFString(UTF8_TO_TCHAR(url.c_str()));
		FPlatformProcess::LaunchURL(*urlFString, nullptr, nullptr);
	}
}