#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Currency/PurchaseRGNCoinRequestData.h"
#include "../../../../../Generated/RGN/Model/Request/BaseRequestData.h"
#include "../../Model/Request/BP_BaseRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_PurchaseRGNCoinRequestData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_PurchaseRGNCoinRequestData : public FBP_BaseRequestData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Currency")
    FString iapUUID;
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Currency")
    FString requestId;
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Currency")
    FString iapTransactionId;
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Currency")
    FString iapReceipt;

	static void ConvertToUnrealModel(const RGN::Modules::Currency::PurchaseRGNCoinRequestData& source, FBP_PurchaseRGNCoinRequestData& target) {
        target.iapUUID = FString(UTF8_TO_TCHAR(source.iapUUID.c_str()));
        target.requestId = FString(UTF8_TO_TCHAR(source.requestId.c_str()));
        target.iapTransactionId = FString(UTF8_TO_TCHAR(source.iapTransactionId.c_str()));
        target.iapReceipt = FString(UTF8_TO_TCHAR(source.iapReceipt.c_str()));
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
