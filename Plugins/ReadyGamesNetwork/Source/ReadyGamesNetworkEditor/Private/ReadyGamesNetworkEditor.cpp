#define LOCTEXT_NAMESPACE "FReadyGamesNetworkEditorModule"

#include "ReadyGamesNetworkEditor.h"
#include "ReadyGamesNetworkSettings.h"

void FReadyGamesNetworkEditorModule::StartupModule()
{
	ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings");

	if (SettingsModule != nullptr)
	{
		SettingsModule->RegisterSettings("Project", "Plugins", "ReadyGamesNetwork",
			LOCTEXT("ReadyGamesNetworkSettingsName", "ReadyGamesNetwork"),
			LOCTEXT("ReadyGamesNetworkSettingsDescription", "Project settings for ReadyGamesNetwork plugin"),
			GetMutableDefault<UReadyGamesNetworkSettings>()
		);
	}
}

void FReadyGamesNetworkEditorModule::ShutdownModule()
{
	ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings");

	if (SettingsModule != nullptr)
	{
		SettingsModule->UnregisterSettings("Project", "Plugins", "ReadyGamesNetwork");
	}
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FReadyGamesNetworkEditorModule, ReadyGamesNetworkEditor)