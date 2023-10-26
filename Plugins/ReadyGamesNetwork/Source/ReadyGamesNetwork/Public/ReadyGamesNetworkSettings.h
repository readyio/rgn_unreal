#pragma once

#include "CoreMinimal.h"
#include "Blueprints/Core/BP_RGNEnvironmentTarget.h"
#include "ReadyGamesNetworkSettings.generated.h"

UCLASS(Config = Game, DefaultConfig)
class READYGAMESNETWORK_API UReadyGamesNetworkSettings : public UObject
{
	GENERATED_UCLASS_BODY()

	UPROPERTY(EditAnywhere, config, Category = Connection)
	FString ProjectId;

	UPROPERTY(EditAnywhere, config, Category = Connection)
	FString ApiKey;

	UPROPERTY(EditAnywhere, config, Category = Connection)
	TEnumAsByte<EBP_RGNEnvironmentTarget> EnvironmentTarget;

	UPROPERTY(EditAnywhere, config, Category = Connection, Meta = (DisplayName = "Use Functions Emulator"))
	bool bUseFunctionsEmulator;

	UPROPERTY(EditAnywhere, config, Category = Connection, Meta = (EditCondition = "bUseFunctionsEmulator"))
	FString EmulatorHost;

	UPROPERTY(EditAnywhere, config, Category = Connection, Meta = (EditCondition = "bUseFunctionsEmulator"))
	FString EmulatorPort;
};