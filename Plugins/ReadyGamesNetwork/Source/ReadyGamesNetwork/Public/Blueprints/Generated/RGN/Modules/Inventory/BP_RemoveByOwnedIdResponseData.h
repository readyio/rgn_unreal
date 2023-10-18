#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Inventory/RemoveByOwnedIdResponseData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_RemoveByOwnedIdResponseData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_RemoveByOwnedIdResponseData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Inventory")
    FString ownedItemId;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Inventory")
    int32 newQuantity;

	static void ConvertToUnrealModel(const RGN::Modules::Inventory::RemoveByOwnedIdResponseData& source, FBP_RemoveByOwnedIdResponseData& target) {
		target.ownedItemId = FString(source.ownedItemId.c_str());
		target.newQuantity = source.newQuantity;
	}

	static void ConvertToCoreModel(const FBP_RemoveByOwnedIdResponseData& source, RGN::Modules::Inventory::RemoveByOwnedIdResponseData& target) {
		target.ownedItemId = string(TCHAR_TO_UTF8(*source.ownedItemId));
		target.newQuantity = source.newQuantity;
	}
};
