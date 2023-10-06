#include "ReadyGamesNetwork.h"

#define LOCTEXT_NAMESPACE "FReadyGamesNetworkModule"

void FReadyGamesNetworkModule::StartupModule()
{
	RGNCoreModule::Initialize();
}

void FReadyGamesNetworkModule::ShutdownModule()
{
	RGNCoreModule::Deinitialize();
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FReadyGamesNetworkModule, ReadyGamesNetwork)