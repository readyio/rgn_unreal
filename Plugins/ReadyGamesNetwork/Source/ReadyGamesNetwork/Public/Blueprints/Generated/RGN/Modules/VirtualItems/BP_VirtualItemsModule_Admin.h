#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BP_VirtualItemsModule_Admin.generated.h"

DECLARE_DYNAMIC_DELEGATE_TwoParams(FVirtualItemsModule_AdminFailResponse, int32, code, const FString&, message);

DECLARE_DYNAMIC_DELEGATE(FDeleteVirtualItemsByIdsAsyncResponse);
DECLARE_DYNAMIC_DELEGATE(FDeleteVirtualItemsByNameAsyncResponse);
DECLARE_DYNAMIC_DELEGATE(FDeleteVirtualItemByAppIdAsyncResponse);
DECLARE_DYNAMIC_DELEGATE_OneParam(FAddFromCSVWithBlockchainStubAsyncResponse, const TArray<FString>&, response);

UCLASS()
class READYGAMESNETWORK_API UBP_VirtualItemsModule_Admin : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
};
