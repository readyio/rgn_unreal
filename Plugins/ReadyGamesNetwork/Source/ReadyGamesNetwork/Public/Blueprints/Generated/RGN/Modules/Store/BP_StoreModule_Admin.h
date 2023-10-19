#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "../VirtualItems/BP_PriceInfo.h"
#include "BP_StoreModule_Admin.generated.h"

DECLARE_DYNAMIC_DELEGATE_TwoParams(FStoreModule_AdminFailResponse, int32, code, const FString&, message);

DECLARE_DYNAMIC_DELEGATE_OneParam(FStoreModuleAdminCreateLootBoxAsyncResponse, const FString&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FStoreModuleAdminDeleteLootBoxAsyncResponse, const FString&, response);
DECLARE_DYNAMIC_DELEGATE(FStoreModuleAdminDeleteStoreOfferAsyncResponse);

UCLASS()
class READYGAMESNETWORK_API UBP_StoreModule_Admin : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void CreateLootBoxAsync(
        const FString& lootBoxName,
        const TArray<FString>& virtualItemTags,
        const TArray<FBP_PriceInfo>& prices,
        FStoreModuleAdminCreateLootBoxAsyncResponse onSuccess, FStoreModule_AdminFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void DeleteLootBoxAsync(
        const FString& lootBoxId,
        FStoreModuleAdminDeleteLootBoxAsyncResponse onSuccess, FStoreModule_AdminFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void DeleteStoreOfferAsync(
        const FString& offerId,
        FStoreModuleAdminDeleteStoreOfferAsyncResponse onSuccess, FStoreModule_AdminFailResponse onFail) {
             // TODO
    }
};
