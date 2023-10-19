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

DECLARE_DYNAMIC_DELEGATE_OneParam(FInventoryModuleAddToInventoryAsyncResponse, const FBP_AddToInventoryResponseData&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FInventoryModuleRemoveByVirtualItemIdAsyncResponse, const FBP_RemoveByVirtualItemIdResponseData&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FInventoryModuleRemoveByInventoryItemIdAsyncResponse, const FBP_RemoveByOwnedIdResponseData&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FInventoryModuleGetPropertiesAsyncResponse, const FString&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FInventoryModuleSetPropertiesAsyncResponse, const FString&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FInventoryModuleGetUpgradesAsyncResponse, const TArray<FBP_UpgradesResponseData>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FInventoryModuleUpgradeAsyncResponse, const TArray<FBP_VirtualItemUpgrade>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FInventoryModuleGetByIdAsyncResponse, const FBP_InventoryItemData&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FInventoryModuleGetByIdsAsyncResponse, const TArray<FBP_InventoryItemData>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FInventoryModuleGetByVirtualItemIdsAsyncResponse, const TArray<FBP_InventoryItemData>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FInventoryModuleGetAllForCurrentAppAsyncResponse, const TArray<FBP_InventoryItemData>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FInventoryModuleGetByAppIdsAsyncResponse, const TArray<FBP_InventoryItemData>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FInventoryModuleGetWithVirtualItemsDataForCurrentAppAsyncResponse, const TArray<FBP_InventoryItemData>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FInventoryModuleGetWithVirtualItemsDataByAppIdsAsyncResponse, const TArray<FBP_InventoryItemData>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FInventoryModuleParseInventoryItemDataResponse, const FBP_InventoryItemData&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FInventoryModuleParseInventoryItemsDataResponse, const TArray<FBP_InventoryItemData>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FInventoryModuleGetByTagsAsyncResponse, const TArray<FBP_InventoryItemData>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FInventoryModuleGetTagsAsyncResponse, const TArray<FString>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FInventoryModuleSetTagsAsyncResponse, const TArray<FString>&, response);

UCLASS()
class READYGAMESNETWORK_API UBP_InventoryModule : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Inventory")
    static void AddToInventoryAsync1(
        const FString& virtualItemId,
        int32 quantity,
        const FBP_Properties& properties,
        FInventoryModuleAddToInventoryAsyncResponse onSuccess, FInventoryModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Inventory")
    static void AddToInventoryAsync2(
        const FString& userId,
        const FString& virtualItemId,
        int32 quantity,
        const FBP_Properties& properties,
        FInventoryModuleAddToInventoryAsyncResponse onSuccess, FInventoryModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Inventory")
    static void AddToInventoryAsync3(
        const FString& userId,
        const FBP_InventoryItemData& inventoryData,
        FInventoryModuleAddToInventoryAsyncResponse onSuccess, FInventoryModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Inventory")
    static void RemoveByVirtualItemIdAsync(
        const FString& userId,
        const FString& virtualItemId,
        int32 quantity,
        FInventoryModuleRemoveByVirtualItemIdAsyncResponse onSuccess, FInventoryModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Inventory")
    static void RemoveByInventoryItemIdAsync(
        const FString& userId,
        const FString& ownedItemId,
        int32 quantity,
        FInventoryModuleRemoveByInventoryItemIdAsyncResponse onSuccess, FInventoryModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Inventory")
    static void GetPropertiesAsync(
        const FString& ownedItemId,
        FInventoryModuleGetPropertiesAsyncResponse onSuccess, FInventoryModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Inventory")
    static void SetPropertiesAsync(
        const FString& ownedItemId,
        const FString& json,
        FInventoryModuleSetPropertiesAsyncResponse onSuccess, FInventoryModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Inventory")
    static void GetUpgradesAsync(
        const FString& ownedItemId,
        FInventoryModuleGetUpgradesAsyncResponse onSuccess, FInventoryModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Inventory")
    static void UpgradeAsync(
        const FString& ownedItemId,
        int32 newUpgradeLevel,
        const FString& upgradeId,
        const TArray<FBP_Currency>& upgradePrice,
        FInventoryModuleUpgradeAsyncResponse onSuccess, FInventoryModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Inventory")
    static void GetByIdAsync(
        const FString& ownedItemId,
        FInventoryModuleGetByIdAsyncResponse onSuccess, FInventoryModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Inventory")
    static void GetByIdsAsync(
        const TArray<FString>& ownedItemIds,
        FInventoryModuleGetByIdsAsyncResponse onSuccess, FInventoryModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Inventory")
    static void GetByVirtualItemIdsAsync(
        const TArray<FString>& virtualItemIds,
        FInventoryModuleGetByVirtualItemIdsAsyncResponse onSuccess, FInventoryModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Inventory")
    static void GetAllForCurrentAppAsync(
        FInventoryModuleGetAllForCurrentAppAsyncResponse onSuccess, FInventoryModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Inventory")
    static void GetByAppIdsAsync(
        const TArray<FString>& appIds,
        FInventoryModuleGetByAppIdsAsyncResponse onSuccess, FInventoryModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Inventory")
    static void GetWithVirtualItemsDataForCurrentAppAsync(
        const FString& startAfter,
        int32 limit,
        FInventoryModuleGetWithVirtualItemsDataForCurrentAppAsyncResponse onSuccess, FInventoryModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Inventory")
    static void GetWithVirtualItemsDataByAppIdsAsync(
        const TArray<FString>& appIds,
        const FString& startAfter,
        int32 limit,
        FInventoryModuleGetWithVirtualItemsDataByAppIdsAsyncResponse onSuccess, FInventoryModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Inventory")
    static void ParseInventoryItemData(
        const FString& json,
        FInventoryModuleParseInventoryItemDataResponse onSuccess, FInventoryModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Inventory")
    static void ParseInventoryItemsData(
        const FString& json,
        FInventoryModuleParseInventoryItemsDataResponse onSuccess, FInventoryModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Inventory")
    static void GetByTagsAsync(
        const TArray<FString>& tags,
        const FString& appId,
        FInventoryModuleGetByTagsAsyncResponse onSuccess, FInventoryModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Inventory")
    static void GetTagsAsync(
        const FString& ownedItemId,
        FInventoryModuleGetTagsAsyncResponse onSuccess, FInventoryModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Inventory")
    static void SetTagsAsync(
        const FString& ownedItemId,
        const TArray<FString>& tags,
        const FString& appId,
        FInventoryModuleSetTagsAsyncResponse onSuccess, FInventoryModuleFailResponse onFail) {
             // TODO
    }
};
