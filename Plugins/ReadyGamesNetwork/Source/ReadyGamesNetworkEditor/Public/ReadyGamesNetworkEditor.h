#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "ISettingsModule.h"

class FReadyGamesNetworkEditorModule : public IModuleInterface
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
