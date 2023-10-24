#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Currency/PurchaseCurrencyProductRequestData.h"
#include "../../../../../Generated/RGN/Model/Request/BaseMigrationRequestData.h"
#include "../../Model/Request/BP_BaseMigrationRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_PurchaseCurrencyProductRequestData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_PurchaseCurrencyProductRequestData : public FBP_BaseMigrationRequestData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Currency")
    FString productId;

	static void ConvertToUnrealModel(const RGN::Modules::Currency::PurchaseCurrencyProductRequestData& source, FBP_PurchaseCurrencyProductRequestData& target) {
		target.productId = FString(source.productId.c_str());
		FBP_BaseMigrationRequestData::ConvertToUnrealModel(source, target);
	}

	static void ConvertToCoreModel(const FBP_PurchaseCurrencyProductRequestData& source, RGN::Modules::Currency::PurchaseCurrencyProductRequestData& target) {
		target.productId = string(TCHAR_TO_UTF8(*source.productId));
		FBP_BaseMigrationRequestData::ConvertToCoreModel(source, target);
	}
};
