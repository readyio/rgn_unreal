#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_CompletedAchievementHistoryEntry.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "../../../../../Generated/RGN/Modules/Achievement/UserAchievement.h"
#include "BP_UserAchievement.generated.h"

/**
 * Represents completed achievement data from the users data
 * If the achievement is  then
 * this document can contain more that one
 */
USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_UserAchievement {
    GENERATED_BODY()

    /**
     * Achievement document id
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Achievement")
    FString id;
    /**
     * Current progress value of the achievement
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Achievement")
    int32 value;
    /**
     * Value which should be reached to complete the achievement when
     * the achievement was triggered
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Achievement")
    int32 valueToReach;
    /**
     * Shows if the achievement was completed
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Achievement")
    bool isCompleted;
    /**
     * Shows if the achievement was claimed
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Achievement")
    bool isClaimed;
    /**
     * Time when the achievement was last time completed
     * in milliseconds since midnight, January 1, 1970 UTC.
     * Refer to T:RGN.Utility.DateTimeUtility for helper methods.
     * This field is automatically populated by the backend
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Achievement")
    int64 lastCompleteTime;
    /**
     * Represents all times the user completed this achievement
     * This collection can contain more than 1 item in case the
     * F:RGN.Modules.Achievement.AchievementData.repeatable is true
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Achievement")
    TArray<FBP_CompletedAchievementHistoryEntry> history;

	static void ConvertToUnrealModel(const RGN::Modules::Achievement::UserAchievement& source, FBP_UserAchievement& target) {
		target.id = FString(source.id.c_str());
		target.value = source.value;
		target.valueToReach = source.valueToReach;
		target.isCompleted = source.isCompleted;
		target.isClaimed = source.isClaimed;
		target.lastCompleteTime = source.lastCompleteTime;
		for (const auto& source_history_item : source.history) {
			FBP_CompletedAchievementHistoryEntry b_source_history_item;
			FBP_CompletedAchievementHistoryEntry::ConvertToUnrealModel(source_history_item, b_source_history_item);
			target.history.Add(b_source_history_item);
		}
	}

	static void ConvertToCoreModel(const FBP_UserAchievement& source, RGN::Modules::Achievement::UserAchievement& target) {
		target.id = string(TCHAR_TO_UTF8(*source.id));
		target.value = source.value;
		target.valueToReach = source.valueToReach;
		target.isCompleted = source.isCompleted;
		target.isClaimed = source.isClaimed;
		target.lastCompleteTime = source.lastCompleteTime;
		for (const auto& source_history_item : source.history) {
			RGN::Modules::Achievement::CompletedAchievementHistoryEntry cpp_source_history_item;
			FBP_CompletedAchievementHistoryEntry::ConvertToCoreModel(source_history_item, cpp_source_history_item);
			target.history.push_back(cpp_source_history_item);
		}
	}
};
