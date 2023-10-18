#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "../VirtualItems/BP_Properties.h"
#include "BP_AddToInventoryResponseData.h"
#include "BP_InventoryItemData.h"
#include "BP_AddVirtualItemToUserInventoryRequestData.h"
#include "BP_RemoveByVirtualItemIdResponseData.h"
#include "BP_RemoveByOwnedIdResponseData.h"
#include "BP_UpgradesResponseData.h"
#include "../Currency/BP_Currency.h"
#include "BP_VirtualItemUpgrade.h"
#include "BP_InventoryItemsWithVirtualItemsData.h"
#include "BP_InventoryModule.generated.h"

DECLARE_DYNAMIC_DELEGATE_TwoParams(FInventoryModuleFailResponse, int32, code, const FString&, message);

DECLARE_DYNAMIC_DELEGATE_OneParam(FAddToInventoryAsyncResponse, const FBP_AddToInventoryResponseData&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FAddToInventoryAsyncResponse, const FBP_AddToInventoryResponseData&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FAddToInventoryAsyncResponse, const FBP_AddToInventoryResponseData&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FRemoveByVirtualItemIdAsyncResponse, const FBP_RemoveByVirtualItemIdResponseData&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FRemoveByInventoryItemIdAsyncResponse, const FBP_RemoveByOwnedIdResponseData&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetPropertiesAsyncResponse, const FString&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FSetPropertiesAsyncResponse, const FString&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetUpgradesAsyncResponse, const TArray<FBP_UpgradesResponseData>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FUpgradeAsyncResponse, const TArray<FBP_VirtualItemUpgrade>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetByIdAsyncResponse, const FBP_InventoryItemData&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetByIdsAsyncResponse, const TArray<FBP_InventoryItemData>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetByVirtualItemIdsAsyncResponse, const TArray<FBP_InventoryItemData>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetAllForCurrentAppAsyncResponse, const TArray<FBP_InventoryItemData>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetByAppIdsAsyncResponse, const TArray<FBP_InventoryItemData>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetWithVirtualItemsDataForCurrentAppAsyncResponse, const TArray<FBP_InventoryItemData>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetWithVirtualItemsDataByAppIdsAsyncResponse, const TArray<FBP_InventoryItemData>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FParseInventoryItemDataResponse, const FBP_InventoryItemData&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FParseInventoryItemsDataResponse, const TArray<FBP_InventoryItemData>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetByTagsAsyncResponse, const TArray<FBP_InventoryItemData>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetTagsAsyncResponse, const TArray<FString>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FSetTagsAsyncResponse, const TArray<FString>&, response);

UCLASS()
class READYGAMESNETWORK_API UBP_InventoryModule : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
};
