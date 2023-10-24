#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/GameProgress/AddUserLevelRequestData.h"
#include "../../../../../Generated/RGN/Model/Request/BaseMigrationRequestData.h"
#include "../../Model/Request/BP_BaseMigrationRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_AddUserLevelRequestData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_AddUserLevelRequestData : public FBP_BaseMigrationRequestData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | GameProgress")
    FString playerProgress;

	static void ConvertToUnrealModel(const RGN::Modules::GameProgress::AddUserLevelRequestData& source, FBP_AddUserLevelRequestData& target) {
		target.playerProgress = FString(source.playerProgress.c_str());
		FBP_BaseMigrationRequestData::ConvertToUnrealModel(source, target);
	}

	static void ConvertToCoreModel(const FBP_AddUserLevelRequestData& source, RGN::Modules::GameProgress::AddUserLevelRequestData& target) {
		target.playerProgress = string(TCHAR_TO_UTF8(*source.playerProgress));
		FBP_BaseMigrationRequestData::ConvertToCoreModel(source, target);
	}
};
