#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../Model/Request/BP_BaseRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "../../../../../Generated/RGN/Modules/Currency/PurchaseRGNCoinRequestData.h"
#include "BP_PurchaseRGNCoinRequestData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_PurchaseRGNCoinRequestData : public FBP_BaseRequestData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Currency")
    FString iapUUID;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Currency")
    FString requestId;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Currency")
    FString iapTransactionId;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Currency")
    FString iapReceipt;

	static void ConvertToUnrealModel(const RGN::Modules::Currency::PurchaseRGNCoinRequestData& source, FBP_PurchaseRGNCoinRequestData& target) {
		target.iapUUID = FString(source.iapUUID.c_str());
		target.requestId = FString(source.requestId.c_str());
		target.iapTransactionId = FString(source.iapTransactionId.c_str());
		target.iapReceipt = FString(source.iapReceipt.c_str());
		FBP_BaseRequestData::ConvertToUnrealModel(source, target);
	}

	static void ConvertToCoreModel(const FBP_PurchaseRGNCoinRequestData& source, RGN::Modules::Currency::PurchaseRGNCoinRequestData& target) {
		target.iapUUID = string(TCHAR_TO_UTF8(*source.iapUUID));
		target.requestId = string(TCHAR_TO_UTF8(*source.requestId));
		target.iapTransactionId = string(TCHAR_TO_UTF8(*source.iapTransactionId));
		target.iapReceipt = string(TCHAR_TO_UTF8(*source.iapReceipt));
		FBP_BaseRequestData::ConvertToCoreModel(source, target);
	}
};
