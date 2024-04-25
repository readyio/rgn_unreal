#pragma once

#include "CoreMinimal.h"
#include "Impl/Core/BP_RGNEnvironmentTarget.h"
#include "ReadyGamesNetworkSettings.generated.h"

UCLASS(Config = Game, DefaultConfig)
class READYGAMESNETWORK_API UReadyGamesNetworkSettings : public UObject
{
	GENERATED_UCLASS_BODY()

	UPROPERTY(EditAnywhere, config, Category = Connection)
	FString ProjectId;

	UPROPERTY(VisibleAnywhere, config, Category = Connection)
	FString ProjectIdLowerCase;

	UPROPERTY(EditAnywhere, config, Category = Connection)
	FString ApiKey;

	UPROPERTY(EditAnywhere, config, Category = Connection)
	EBP_RGNEnvironmentTarget EnvironmentTarget;

	UPROPERTY(EditAnywhere, config, Category = Connection, Meta = (DisplayName = "Auto Guest Login"))
	bool bAutoGuestLogin;

	UPROPERTY(EditAnywhere, config, Category = Connection, Meta = (DisplayName = "Use Functions Emulator"))
	bool bUseFunctionsEmulator;

	UPROPERTY(EditAnywhere, config, Category = Connection, Meta = (EditCondition = "bUseFunctionsEmulator"))
	FString EmulatorHost;

	UPROPERTY(EditAnywhere, config, Category = Connection, Meta = (EditCondition = "bUseFunctionsEmulator"))
	FString EmulatorPort;

#if WITH_EDITOR
	void PostInitProperties();
	void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent);
	void PrepareProjectIdLowerCase();
#endif
};