#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "../VirtualItems/BP_PriceInfo.h"
#include "BP_StoreModule_Admin.generated.h"

DECLARE_DYNAMIC_DELEGATE_TwoParams(FStoreModule_AdminFailResponse, int32, code, const FString&, message);

DECLARE_DYNAMIC_DELEGATE_OneParam(FCreateLootBoxAsyncResponse, const FString&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FDeleteLootBoxAsyncResponse, const FString&, response);
DECLARE_DYNAMIC_DELEGATE(FDeleteStoreOfferAsyncResponse);

UCLASS()
class READYGAMESNETWORK_API UBP_StoreModule_Admin : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
};
