#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Store/GetLootBoxesResponse.h"
#include "../../../../../Generated/RGN/Modules/Store/LootBox.h"
#include "BP_LootBox.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_GetLootBoxesResponse.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_GetLootBoxesResponse {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Store")
    TArray<FBP_LootBox> lootBoxes;

	static void ConvertToUnrealModel(const RGN::Modules::Store::GetLootBoxesResponse& source, FBP_GetLootBoxesResponse& target) {
		for (const auto& source_lootBoxes_item : source.lootBoxes) {
			FBP_LootBox b_source_lootBoxes_item;
			FBP_LootBox::ConvertToUnrealModel(source_lootBoxes_item, b_source_lootBoxes_item);
			target.lootBoxes.Add(b_source_lootBoxes_item);
		}
	}

	static void ConvertToCoreModel(const FBP_GetLootBoxesResponse& source, RGN::Modules::Store::GetLootBoxesResponse& target) {
		for (const auto& source_lootBoxes_item : source.lootBoxes) {
			RGN::Modules::Store::LootBox cpp_source_lootBoxes_item;
			FBP_LootBox::ConvertToCoreModel(source_lootBoxes_item, cpp_source_lootBoxes_item);
			target.lootBoxes.push_back(cpp_source_lootBoxes_item);
		}
	}
};
