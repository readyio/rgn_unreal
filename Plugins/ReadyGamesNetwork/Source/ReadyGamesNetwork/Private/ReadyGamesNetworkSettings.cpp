#include "ReadyGamesNetworkSettings.h"

UReadyGamesNetworkSettings::UReadyGamesNetworkSettings(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, ProjectId(TEXT(""))
	, ApiKey(TEXT(""))
	, EnvironmentTarget(EBP_RGNEnvironmentTarget::Staging)
	, bUseFunctionsEmulator(false)
	, EmulatorHost(TEXT("127.0.0.1"))
	, EmulatorPort(TEXT("5001"))
{
}