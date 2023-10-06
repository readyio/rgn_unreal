#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "RGNCoreModule.h"

class FReadyGamesNetworkModule : public IModuleInterface
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
