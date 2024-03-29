#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Currency/CurrencyOffer.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_CurrencyOffer.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_CurrencyOffer {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Currency")
    FString productId;
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Currency")
    FString offeredProductId;
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Currency")
    double remainingTime;
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Currency")
    float offeringPrice;
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Currency")
    FString promotionalMessage;

	static void ConvertToUnrealModel(const RGN::Modules::Currency::CurrencyOffer& source, FBP_CurrencyOffer& target) {
        target.productId = FString(UTF8_TO_TCHAR(source.productId.c_str()));
        target.offeredProductId = FString(UTF8_TO_TCHAR(source.offeredProductId.c_str()));
        target.remainingTime = source.remainingTime;
        target.offeringPrice = source.offeringPrice;
        target.promotionalMessage = FString(UTF8_TO_TCHAR(source.promotionalMessage.c_str()));
	}

	static void ConvertToCoreModel(const FBP_CurrencyOffer& source, RGN::Modules::Currency::CurrencyOffer& target) {
        target.productId = string(TCHAR_TO_UTF8(*source.productId));
        target.offeredProductId = string(TCHAR_TO_UTF8(*source.offeredProductId));
        target.remainingTime = source.remainingTime;
        target.offeringPrice = source.offeringPrice;
        target.promotionalMessage = string(TCHAR_TO_UTF8(*source.promotionalMessage));
	}
};
