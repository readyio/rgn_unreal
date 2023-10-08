#include "ReadyGamesNetwork.h"
#include "Core/CoreModule/CoreModule.h"

#define LOCTEXT_NAMESPACE "FReadyGamesNetworkModule"

void FReadyGamesNetworkModule::StartupModule()
{
	CoreModule::Initialize();
}

void FReadyGamesNetworkModule::ShutdownModule()
{
	CoreModule::Deinitialize();
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FReadyGamesNetworkModule, ReadyGamesNetwork)