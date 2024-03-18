#include "ReadyGamesNetworkSettings.h"
#if WITH_EDITOR
#include "Misc/FileHelper.h"
#endif

UReadyGamesNetworkSettings::UReadyGamesNetworkSettings(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, ProjectId(TEXT(""))
	, ProjectIdLowerCase(TEXT(""))
	, ApiKey(TEXT(""))
	, EnvironmentTarget(EBP_RGNEnvironmentTarget::Staging)
	, bUseFunctionsEmulator(false)
	, EmulatorHost(TEXT("127.0.0.1"))
	, EmulatorPort(TEXT("5001")) {
}

#if WITH_EDITOR
void UReadyGamesNetworkSettings::PostInitProperties() {
	Super::PostInitProperties();
	PrepareProjectIdLowerCase();
}

void UReadyGamesNetworkSettings::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) {
	Super::PostEditChangeProperty(PropertyChangedEvent);
	PrepareProjectIdLowerCase();
}

void UReadyGamesNetworkSettings::PrepareProjectIdLowerCase() {
	if (ProjectId.Compare(ProjectIdLowerCase, ESearchCase::CaseSensitive) == 0) {
		return;
	}
	ProjectIdLowerCase = ProjectId.ToLower();
	FString IniFilePath = FPaths::ProjectConfigDir() / TEXT("DefaultGame.ini");
	FString FileContent;
	if (FFileHelper::LoadFileToString(FileContent, *IniFilePath)) {
		FJsonSerializableArray linesArray;
		FileContent.ParseIntoArrayLines(linesArray, false);
		bool projectIdLowerCaseWasUpdated = false;
		for (FString& Line : linesArray) {
			if (Line.StartsWith("ProjectIdLowerCase=")) {
				Line = FString("ProjectIdLowerCase=") + ProjectIdLowerCase;
				projectIdLowerCaseWasUpdated = true;
				break;
			}
		}
		if (!projectIdLowerCaseWasUpdated) {
			for (int32 i = 0; i < linesArray.Num(); ++i) {
				if (linesArray[i].StartsWith("ProjectId=", ESearchCase::CaseSensitive)) {
					linesArray.Insert(FString("ProjectIdLowerCase=") + ProjectIdLowerCase, i + 1);
					projectIdLowerCaseWasUpdated = true;
					break;
				}
			}
		}
		if (projectIdLowerCaseWasUpdated) {
			FileContent = FString::Join(linesArray, TEXT("\n"));
			FFileHelper::SaveStringToFile(FileContent, *IniFilePath);
		}
	}
}
#endif