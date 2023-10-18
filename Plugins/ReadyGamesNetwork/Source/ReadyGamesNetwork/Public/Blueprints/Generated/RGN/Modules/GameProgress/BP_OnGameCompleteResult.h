#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/GameProgress/OnGameCompleteResult.h"
#include "../../../../../Generated/RGN/Modules/GameProgress/GameProgress.h"
#include "BP_GameProgress.h"
#include "../../../../../Generated/RGN/Modules/Currency/UserCurrencyData.h"
#include "../Currency/BP_UserCurrencyData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_OnGameCompleteResult.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_OnGameCompleteResult {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | GameProgress")
    FBP_GameProgress gameProgress;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | GameProgress")
    FBP_UserCurrencyData userCurrencies;

	static void ConvertToUnrealModel(const RGN::Modules::GameProgress::OnGameCompleteResult& source, FBP_OnGameCompleteResult& target) {
		FBP_GameProgress::ConvertToUnrealModel(source.gameProgress, target.gameProgress);
		FBP_UserCurrencyData::ConvertToUnrealModel(source.userCurrencies, target.userCurrencies);
	}

	static void ConvertToCoreModel(const FBP_OnGameCompleteResult& source, RGN::Modules::GameProgress::OnGameCompleteResult& target) {
		FBP_GameProgress::ConvertToCoreModel(source.gameProgress, target.gameProgress);
		FBP_UserCurrencyData::ConvertToCoreModel(source.userCurrencies, target.userCurrencies);
	}
};
