#ifdef READY_GAMES_SDK_UNREAL

#include "Os/Os.h"
#include "HAL/PlatformProcess.h"

void Os::OpenURL(std::string url) {
	FString urlFString(url.c_str());
	FPlatformProcess::LaunchURL(*urlFString, nullptr, nullptr);
}

#endif