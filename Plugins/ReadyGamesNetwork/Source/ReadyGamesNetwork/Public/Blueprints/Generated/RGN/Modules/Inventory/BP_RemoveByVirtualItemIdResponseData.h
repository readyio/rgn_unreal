#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Inventory/RemoveByVirtualItemIdResponseData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_RemoveByVirtualItemIdResponseData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_RemoveByVirtualItemIdResponseData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Inventory")
    FString virtualItemId;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Inventory")
    int32 newQuantity;

	static void ConvertToUnrealModel(const RGN::Modules::Inventory::RemoveByVirtualItemIdResponseData& source, FBP_RemoveByVirtualItemIdResponseData& target) {
		target.virtualItemId = FString(source.virtualItemId.c_str());
		target.newQuantity = source.newQuantity;
	}

	static void ConvertToCoreModel(const FBP_RemoveByVirtualItemIdResponseData& source, RGN::Modules::Inventory::RemoveByVirtualItemIdResponseData& target) {
		target.virtualItemId = string(TCHAR_TO_UTF8(*source.virtualItemId));
		target.newQuantity = source.newQuantity;
	}
};
