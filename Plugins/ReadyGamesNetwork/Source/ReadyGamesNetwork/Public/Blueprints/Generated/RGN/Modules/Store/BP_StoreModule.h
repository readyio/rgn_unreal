#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BP_BuyVirtualItemsResponse.h"
#include "BP_PurchaseResult.h"
#include "BP_BuyStoreOfferResponse.h"
#include "BP_GetLootBoxesResponse.h"
#include "BP_LootBox.h"
#include "BP_LootboxIsAvailableResponse.h"
#include "BP_PurchaseItem.h"
#include "../Inventory/BP_InventoryItemData.h"
#include "BP_StoreOffer.h"
#include "BP_ImportStoreOffersFromCSVResponse.h"
#include "BP_GetStoreOffersResponse.h"
#include "BP_GetStoreOffersWithVirtualItemsDataResponse.h"
#include "BP_GetStoreOfferTagsResponse.h"
#include "../VirtualItems/BP_PriceInfo.h"
#include "BP_SetPricesRequestData.h"
#include "BP_TimeInfo.h"
#include "BP_SetTimeRequestData.h"
#include "BP_StoreModule.generated.h"

DECLARE_DYNAMIC_DELEGATE_TwoParams(FStoreModuleFailResponse, int32, code, const FString&, message);

DECLARE_DYNAMIC_DELEGATE_OneParam(FBuyVirtualItemsAsyncResponse, const FBP_PurchaseResult&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FBuyStoreOfferAsyncResponse, const FBP_PurchaseResult&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetLootBoxesByIdsAsyncResponse, const TArray<FBP_LootBox>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetLootBoxesByAppIdAsyncResponse, const TArray<FBP_LootBox>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetLootBoxesForCurrentAppAsyncResponse, const TArray<FBP_LootBox>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FLootboxIsAvailableAsyncResponse, const bool&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetAvailableLootBoxItemsCountAsyncResponse, const int64&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOpenLootboxAsyncResponse, const FBP_InventoryItemData&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FAddVirtualItemsStoreOfferAsyncResponse, const FBP_StoreOffer&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FImportStoreOffersFromCSVAsyncResponse, const TArray<FBP_StoreOffer>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetByTagsAsyncResponse, const TArray<FBP_StoreOffer>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetByTimestampAsyncResponse, const TArray<FBP_StoreOffer>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetByAppIdsAsyncResponse, const TArray<FBP_StoreOffer>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetForCurrentAppAsyncResponse, const TArray<FBP_StoreOffer>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetWithVirtualItemsDataForCurrentAppAsyncResponse, const TArray<FBP_StoreOffer>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetWithVirtualItemsDataByAppIdsAsyncResponse, const TArray<FBP_StoreOffer>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetByIdsAsyncResponse, const TArray<FBP_StoreOffer>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetTagsAsyncResponse, const TArray<FString>&, response);
DECLARE_DYNAMIC_DELEGATE(FSetTagsAsyncResponse);
DECLARE_DYNAMIC_DELEGATE(FSetNameAsyncResponse);
DECLARE_DYNAMIC_DELEGATE(FSetDescriptionAsyncResponse);
DECLARE_DYNAMIC_DELEGATE(FSetPricesAsyncResponse);
DECLARE_DYNAMIC_DELEGATE(FSetTimeAsyncResponse);
DECLARE_DYNAMIC_DELEGATE(FSetImageUrlAsyncResponse);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetPropertiesAsyncResponse, const FString&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FSetPropertiesAsyncResponse, const FString&, response);

UCLASS()
class READYGAMESNETWORK_API UBP_StoreModule : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
};
