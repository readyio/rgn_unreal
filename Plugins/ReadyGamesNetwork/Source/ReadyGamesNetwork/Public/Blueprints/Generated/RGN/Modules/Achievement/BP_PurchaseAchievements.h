#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Achievement/PurchaseAchievements.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_PurchaseAchievements.generated.h"

/**
 * Purchase achievements. Triggered when the user purchases a virtual item with the specified tag.
 * Is triggered when 'storeV2-buyStoreOffer' or 'storeV2-buyVirtualItems' is called.
 */
USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_PurchaseAchievements {
    GENERATED_BODY()

    /**
     * The tag of the virtual item. When the user purchases a virtual item with this tag, the achievement is triggered.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Achievement")
    FString virtualItemTag;
    /**
     * The ID of the achievement to trigger
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Achievement")
    FString achievementId;

	static void ConvertToUnrealModel(const RGN::Modules::Achievement::PurchaseAchievements& source, FBP_PurchaseAchievements& target) {
        target.virtualItemTag = FString(UTF8_TO_TCHAR(source.virtualItemTag.c_str()));
        target.achievementId = FString(UTF8_TO_TCHAR(source.achievementId.c_str()));
	}

	static void ConvertToCoreModel(const FBP_PurchaseAchievements& source, RGN::Modules::Achievement::PurchaseAchievements& target) {
        target.virtualItemTag = string(TCHAR_TO_UTF8(*source.virtualItemTag));
        target.achievementId = string(TCHAR_TO_UTF8(*source.achievementId));
	}
};
