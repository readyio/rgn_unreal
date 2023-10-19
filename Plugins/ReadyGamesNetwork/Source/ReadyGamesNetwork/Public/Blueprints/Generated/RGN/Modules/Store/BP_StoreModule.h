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

DECLARE_DYNAMIC_DELEGATE_OneParam(FStoreModuleBuyVirtualItemsAsyncResponse, const FBP_PurchaseResult&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FStoreModuleBuyStoreOfferAsyncResponse, const FBP_PurchaseResult&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FStoreModuleGetLootBoxesByIdsAsyncResponse, const TArray<FBP_LootBox>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FStoreModuleGetLootBoxesByAppIdAsyncResponse, const TArray<FBP_LootBox>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FStoreModuleGetLootBoxesForCurrentAppAsyncResponse, const TArray<FBP_LootBox>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FStoreModuleLootboxIsAvailableAsyncResponse, bool, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FStoreModuleGetAvailableLootBoxItemsCountAsyncResponse, int64, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FStoreModuleOpenLootboxAsyncResponse, const FBP_InventoryItemData&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FStoreModuleAddVirtualItemsStoreOfferAsyncResponse, const FBP_StoreOffer&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FStoreModuleImportStoreOffersFromCSVAsyncResponse, const TArray<FBP_StoreOffer>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FStoreModuleGetByTagsAsyncResponse, const TArray<FBP_StoreOffer>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FStoreModuleGetByTimestampAsyncResponse, const TArray<FBP_StoreOffer>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FStoreModuleGetByAppIdsAsyncResponse, const TArray<FBP_StoreOffer>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FStoreModuleGetForCurrentAppAsyncResponse, const TArray<FBP_StoreOffer>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FStoreModuleGetWithVirtualItemsDataForCurrentAppAsyncResponse, const TArray<FBP_StoreOffer>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FStoreModuleGetWithVirtualItemsDataByAppIdsAsyncResponse, const TArray<FBP_StoreOffer>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FStoreModuleGetByIdsAsyncResponse, const TArray<FBP_StoreOffer>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FStoreModuleGetTagsAsyncResponse, const TArray<FString>&, response);
DECLARE_DYNAMIC_DELEGATE(FStoreModuleSetTagsAsyncResponse);
DECLARE_DYNAMIC_DELEGATE(FStoreModuleSetNameAsyncResponse);
DECLARE_DYNAMIC_DELEGATE(FStoreModuleSetDescriptionAsyncResponse);
DECLARE_DYNAMIC_DELEGATE(FStoreModuleSetPricesAsyncResponse);
DECLARE_DYNAMIC_DELEGATE(FStoreModuleSetTimeAsyncResponse);
DECLARE_DYNAMIC_DELEGATE(FStoreModuleSetImageUrlAsyncResponse);
DECLARE_DYNAMIC_DELEGATE_OneParam(FStoreModuleGetPropertiesAsyncResponse, const FString&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FStoreModuleSetPropertiesAsyncResponse, const FString&, response);

UCLASS()
class READYGAMESNETWORK_API UBP_StoreModule : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void BuyVirtualItemsAsync(
        const TArray<FString>& itemIds,
        const TArray<FString>& currencies,
        const FString& offerId,
        FStoreModuleBuyVirtualItemsAsyncResponse onSuccess, FStoreModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void BuyStoreOfferAsync(
        const FString& offerId,
        const TArray<FString>& currencies,
        FStoreModuleBuyStoreOfferAsyncResponse onSuccess, FStoreModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void GetLootBoxesByIdsAsync(
        const TArray<FString>& ids,
        FStoreModuleGetLootBoxesByIdsAsyncResponse onSuccess, FStoreModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void GetLootBoxesByAppIdAsync(
        const FString& appId,
        int32 limit,
        const FString& startAfter,
        FStoreModuleGetLootBoxesByAppIdAsyncResponse onSuccess, FStoreModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void GetLootBoxesForCurrentAppAsync(
        int32 limit,
        const FString& startAfter,
        FStoreModuleGetLootBoxesForCurrentAppAsyncResponse onSuccess, FStoreModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void LootboxIsAvailableAsync(
        const FString& name,
        FStoreModuleLootboxIsAvailableAsyncResponse onSuccess, FStoreModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void GetAvailableLootBoxItemsCountAsync(
        const FString& name,
        FStoreModuleGetAvailableLootBoxItemsCountAsyncResponse onSuccess, FStoreModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void OpenLootboxAsync(
        const FString& name,
        FStoreModuleOpenLootboxAsyncResponse onSuccess, FStoreModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void AddVirtualItemsStoreOfferAsync(
        const TArray<FString>& appIds,
        const TArray<FString>& itemIds,
        const FString& name,
        const FString& description,
        const TArray<FString>& tags,
        int32 quantity,
        FStoreModuleAddVirtualItemsStoreOfferAsyncResponse onSuccess, FStoreModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void ImportStoreOffersFromCSVAsync(
        const FString& content,
        const FString& delimiter,
        const FBP_CancellationToken& cancellationToken,
        FStoreModuleImportStoreOffersFromCSVAsyncResponse onSuccess, FStoreModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void GetByTagsAsync(
        const TArray<FString>& tags,
        const FString& appId,
        bool ignoreTimestamp,
        FStoreModuleGetByTagsAsyncResponse onSuccess, FStoreModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void GetByTimestampAsync(
        const FString& appId,
        int64 timestamp,
        FStoreModuleGetByTimestampAsyncResponse onSuccess, FStoreModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void GetByAppIdsAsync(
        const TArray<FString>& appIds,
        int32 limit,
        const FString& startAfter,
        bool ignoreTimestamp,
        FStoreModuleGetByAppIdsAsyncResponse onSuccess, FStoreModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void GetForCurrentAppAsync(
        int32 limit,
        const FString& startAfter,
        bool ignoreTimestamp,
        FStoreModuleGetForCurrentAppAsyncResponse onSuccess, FStoreModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void GetWithVirtualItemsDataForCurrentAppAsync(
        int32 limit,
        const FString& startAfter,
        bool ignoreTimestamp,
        FStoreModuleGetWithVirtualItemsDataForCurrentAppAsyncResponse onSuccess, FStoreModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void GetWithVirtualItemsDataByAppIdsAsync(
        const TArray<FString>& appIds,
        int32 limit,
        const FString& startAfter,
        bool ignoreTimestamp,
        FStoreModuleGetWithVirtualItemsDataByAppIdsAsyncResponse onSuccess, FStoreModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void GetByIdsAsync(
        const TArray<FString>& ids,
        FStoreModuleGetByIdsAsyncResponse onSuccess, FStoreModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void GetTagsAsync(
        const FString& offerId,
        FStoreModuleGetTagsAsyncResponse onSuccess, FStoreModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void SetTagsAsync(
        const FString& offerId,
        const TArray<FString>& tags,
        const FString& appId,
        FStoreModuleSetTagsAsyncResponse onSuccess, FStoreModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void SetNameAsync(
        const FString& offerId,
        const FString& name,
        FStoreModuleSetNameAsyncResponse onSuccess, FStoreModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void SetDescriptionAsync(
        const FString& offerId,
        const FString& description,
        FStoreModuleSetDescriptionAsyncResponse onSuccess, FStoreModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void SetPricesAsync(
        const FString& offerId,
        const TArray<FBP_PriceInfo>& prices,
        FStoreModuleSetPricesAsyncResponse onSuccess, FStoreModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void SetTimeAsync(
        const FString& offerId,
        const FBP_TimeInfo& time,
        FStoreModuleSetTimeAsyncResponse onSuccess, FStoreModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void SetImageUrlAsync(
        const FString& offerId,
        const FString& imageUrl,
        FStoreModuleSetImageUrlAsyncResponse onSuccess, FStoreModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void GetPropertiesAsync(
        const FString& storeOfferId,
        FStoreModuleGetPropertiesAsyncResponse onSuccess, FStoreModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void SetPropertiesAsync(
        const FString& storeOfferId,
        const FString& json,
        FStoreModuleSetPropertiesAsyncResponse onSuccess, FStoreModuleFailResponse onFail) {
             // TODO
    }
};
