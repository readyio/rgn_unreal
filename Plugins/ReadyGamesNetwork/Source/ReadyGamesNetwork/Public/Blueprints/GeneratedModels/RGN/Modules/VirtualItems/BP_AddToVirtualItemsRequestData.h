#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_VirtualItem.h"
#include "../../Model/Request/BP_BaseRequestData.h"
#include "BP_AddToVirtualItemsRequestData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_AddToVirtualItemsRequestData : public FBP_BaseRequestData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | VirtualItems")
    FBP_VirtualItem virtualItem;
};
