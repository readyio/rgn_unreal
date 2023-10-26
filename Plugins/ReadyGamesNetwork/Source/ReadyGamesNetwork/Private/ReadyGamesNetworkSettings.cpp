#include "ReadyGamesNetworkSettings.h"

UReadyGamesNetworkSettings::UReadyGamesNetworkSettings(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, ProjectId(TEXT(""))
	, ApiKey(TEXT(""))
	, EnvironmentTarget(EBP_RGNEnvironmentTarget::Staging)
	, bUseFunctionsEmulator(false)
	, EmulatorHost(TEXT(""))
	, EmulatorPort(TEXT(""))
{
}