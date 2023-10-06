#ifdef READY_GAMES_SDK_UNREAL

#include "OSAdapter.h"
#include "HAL/PlatformProcess.h"

void OSAdapter::OpenURL(std::string url) {
	FString urlFString(url.c_str());
	FPlatformProcess::LaunchURL(*urlFString, nullptr, nullptr);
}

#endif