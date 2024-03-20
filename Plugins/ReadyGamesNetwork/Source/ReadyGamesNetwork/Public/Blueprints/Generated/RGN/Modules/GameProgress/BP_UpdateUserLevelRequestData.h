#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/GameProgress/UpdateUserLevelRequestData.h"
#include "../../../../../Generated/RGN/Modules/Currency/Currency.h"
#include "../Currency/BP_Currency.h"
#include "../../../../../Generated/RGN/Model/Request/BaseMigrationRequestData.h"
#include "../../Model/Request/BP_BaseMigrationRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_UpdateUserLevelRequestData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_UpdateUserLevelRequestData : public FBP_BaseMigrationRequestData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | GameProgress")
    FString playerProgress;
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | GameProgress")
    TArray<FBP_Currency> reward;

	static void ConvertToUnrealModel(const RGN::Modules::GameProgress::UpdateUserLevelRequestData& source, FBP_UpdateUserLevelRequestData& target) {
        target.playerProgress = FString(UTF8_TO_TCHAR(source.playerProgress.c_str()));
        for (const auto& source_reward_item : source.reward) {
            FBP_Currency b_source_reward_item;
            FBP_Currency::ConvertToUnrealModel(source_reward_item, b_source_reward_item);
            target.reward.Add(b_source_reward_item);
        }
		FBP_BaseMigrationRequestData::ConvertToUnrealModel(source, target);
	}

	static void ConvertToCoreModel(const FBP_UpdateUserLevelRequestData& source, RGN::Modules::GameProgress::UpdateUserLevelRequestData& target) {
        target.playerProgress = string(TCHAR_TO_UTF8(*source.playerProgress));
        for (const auto& source_reward_item : source.reward) {
            RGN::Modules::Currency::Currency cpp_source_reward_item;
            FBP_Currency::ConvertToCoreModel(source_reward_item, cpp_source_reward_item);
            target.reward.push_back(cpp_source_reward_item);
        }
		FBP_BaseMigrationRequestData::ConvertToCoreModel(source, target);
	}
};
