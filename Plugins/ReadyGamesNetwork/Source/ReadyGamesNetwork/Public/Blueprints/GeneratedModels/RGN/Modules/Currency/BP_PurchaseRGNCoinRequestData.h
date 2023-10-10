#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../Model/Request/BP_BaseRequestData.h"
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
};
