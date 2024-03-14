#include "ReadyGamesNetworkSettings.h"
#if WITH_EDITOR
#include "Misc/FileHelper.h"
#endif

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

#if WITH_EDITOR
void UReadyGamesNetworkSettings::PostInitProperties()
{
	Super::PostInitProperties();
	ValidateAndModifyProjectId();
}

void UReadyGamesNetworkSettings::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
	ValidateAndModifyProjectId();
}

void UReadyGamesNetworkSettings::ValidateAndModifyProjectId()
{
	bool containsUpperChar = false;
	for (int32_t i = 0; i < ProjectId.Len(); i++)
	{
		if (FChar::IsUpper(ProjectId[i]))
		{
			containsUpperChar = true;
			break;
		}
	}
	if (containsUpperChar)
	{
		FString OldProjectId = FString(ProjectId);
		ProjectId = ProjectId.ToLower();

		FString IniFilePath = FPaths::ProjectConfigDir() / TEXT("DefaultGame.ini");
		FString FileContent;

		if (FFileHelper::LoadFileToString(FileContent, *IniFilePath))
		{
			FileContent.ReplaceInline(*OldProjectId, *ProjectId);
			FFileHelper::SaveStringToFile(FileContent, *IniFilePath);
		}
	}
}
#endif