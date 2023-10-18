#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Currency/RGNCoinEconomyProduct.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_RGNCoinEconomyProduct.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_RGNCoinEconomyProduct {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Currency")
    FString uid;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Currency")
    float priceInUSD;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Currency")
    int32 quantity;

	static void ConvertToUnrealModel(const RGN::Modules::Currency::RGNCoinEconomyProduct& source, FBP_RGNCoinEconomyProduct& target) {
		target.uid = FString(source.uid.c_str());
		target.priceInUSD = source.priceInUSD;
		target.quantity = source.quantity;
	}

	static void ConvertToCoreModel(const FBP_RGNCoinEconomyProduct& source, RGN::Modules::Currency::RGNCoinEconomyProduct& target) {
		target.uid = string(TCHAR_TO_UTF8(*source.uid));
		target.priceInUSD = source.priceInUSD;
		target.quantity = source.quantity;
	}
};
