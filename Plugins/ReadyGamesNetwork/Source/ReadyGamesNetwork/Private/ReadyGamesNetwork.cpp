#include "ReadyGamesNetwork.h"
#include "Core/RGNCore.h"

#define LOCTEXT_NAMESPACE "FReadyGamesNetworkModule"

void FReadyGamesNetworkModule::StartupModule()
{
	RGNCore::Initialize();
}

void FReadyGamesNetworkModule::ShutdownModule()
{
	RGNCore::Deinitialize();
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FReadyGamesNetworkModule, ReadyGamesNetwork)