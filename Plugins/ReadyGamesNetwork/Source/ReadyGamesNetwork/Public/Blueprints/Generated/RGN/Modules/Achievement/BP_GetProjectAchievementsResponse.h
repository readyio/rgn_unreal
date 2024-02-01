#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Achievement/GetProjectAchievementsResponse.h"
#include "../../../../../Generated/RGN/Modules/Achievement/DailyAchievements.h"
#include "BP_DailyAchievements.h"
#include "../../../../../Generated/RGN/Modules/Achievement/PlayerProgressAchievements.h"
#include "BP_PlayerProgressAchievements.h"
#include "../../../../../Generated/RGN/Modules/Achievement/PurchaseAchievements.h"
#include "BP_PurchaseAchievements.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_GetProjectAchievementsResponse.generated.h"

/**
 * Currently active achievements for a project
 */
USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_GetProjectAchievementsResponse {
    GENERATED_BODY()

    /**
     * Daily achievements. Triggered when the user logs in.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Achievement")
    TArray<FBP_DailyAchievements> dailyAchievements;
    /**
     * Player progress achievements. Triggered when the player progress field reaches the specified value.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Achievement")
    TArray<FBP_PlayerProgressAchievements> playerProgressAchievements;
    /**
     * Purchase achievements. Triggered when the user purchases a virtual item with the specified tag.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Achievement")
    TArray<FBP_PurchaseAchievements> purchaseAchievements;

	static void ConvertToUnrealModel(const RGN::Modules::Achievement::GetProjectAchievementsResponse& source, FBP_GetProjectAchievementsResponse& target) {
        for (const auto& source_dailyAchievements_item : source.dailyAchievements) {
            FBP_DailyAchievements b_source_dailyAchievements_item;
            FBP_DailyAchievements::ConvertToUnrealModel(source_dailyAchievements_item, b_source_dailyAchievements_item);
            target.dailyAchievements.Add(b_source_dailyAchievements_item);
        }
        for (const auto& source_playerProgressAchievements_item : source.playerProgressAchievements) {
            FBP_PlayerProgressAchievements b_source_playerProgressAchievements_item;
            FBP_PlayerProgressAchievements::ConvertToUnrealModel(source_playerProgressAchievements_item, b_source_playerProgressAchievements_item);
            target.playerProgressAchievements.Add(b_source_playerProgressAchievements_item);
        }
        for (const auto& source_purchaseAchievements_item : source.purchaseAchievements) {
            FBP_PurchaseAchievements b_source_purchaseAchievements_item;
            FBP_PurchaseAchievements::ConvertToUnrealModel(source_purchaseAchievements_item, b_source_purchaseAchievements_item);
            target.purchaseAchievements.Add(b_source_purchaseAchievements_item);
        }
	}

	static void ConvertToCoreModel(const FBP_GetProjectAchievementsResponse& source, RGN::Modules::Achievement::GetProjectAchievementsResponse& target) {
        for (const auto& source_dailyAchievements_item : source.dailyAchievements) {
            RGN::Modules::Achievement::DailyAchievements cpp_source_dailyAchievements_item;
            FBP_DailyAchievements::ConvertToCoreModel(source_dailyAchievements_item, cpp_source_dailyAchievements_item);
            target.dailyAchievements.push_back(cpp_source_dailyAchievements_item);
        }
        for (const auto& source_playerProgressAchievements_item : source.playerProgressAchievements) {
            RGN::Modules::Achievement::PlayerProgressAchievements cpp_source_playerProgressAchievements_item;
            FBP_PlayerProgressAchievements::ConvertToCoreModel(source_playerProgressAchievements_item, cpp_source_playerProgressAchievements_item);
            target.playerProgressAchievements.push_back(cpp_source_playerProgressAchievements_item);
        }
        for (const auto& source_purchaseAchievements_item : source.purchaseAchievements) {
            RGN::Modules::Achievement::PurchaseAchievements cpp_source_purchaseAchievements_item;
            FBP_PurchaseAchievements::ConvertToCoreModel(source_purchaseAchievements_item, cpp_source_purchaseAchievements_item);
            target.purchaseAchievements.push_back(cpp_source_purchaseAchievements_item);
        }
	}
};
