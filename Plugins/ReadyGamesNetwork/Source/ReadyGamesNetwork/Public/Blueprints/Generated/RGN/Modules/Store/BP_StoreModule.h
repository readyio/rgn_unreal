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


UCLASS()
class READYGAMESNETWORK_API UBP_StoreModule : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
};
