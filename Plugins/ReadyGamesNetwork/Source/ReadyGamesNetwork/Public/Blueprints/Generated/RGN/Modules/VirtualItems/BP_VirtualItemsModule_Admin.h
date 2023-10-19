#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BP_VirtualItemsModule_Admin.generated.h"

DECLARE_DYNAMIC_DELEGATE_TwoParams(FVirtualItemsModule_AdminFailResponse, int32, code, const FString&, message);

DECLARE_DYNAMIC_DELEGATE(FVirtualItemsModuleAdminDeleteVirtualItemsByIdsAsyncResponse);
DECLARE_DYNAMIC_DELEGATE(FVirtualItemsModuleAdminDeleteVirtualItemsByNameAsyncResponse);
DECLARE_DYNAMIC_DELEGATE(FVirtualItemsModuleAdminDeleteVirtualItemByAppIdAsyncResponse);
DECLARE_DYNAMIC_DELEGATE_OneParam(FVirtualItemsModuleAdminAddFromCSVWithBlockchainStubAsyncResponse, const TArray<FString>&, response);

UCLASS()
class READYGAMESNETWORK_API UBP_VirtualItemsModule_Admin : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | VirtualItems")
    static void DeleteVirtualItemsByIdsAsync(
        const TArray<FString>& virtualItemIds,
        FVirtualItemsModuleAdminDeleteVirtualItemsByIdsAsyncResponse onSuccess, FVirtualItemsModule_AdminFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | VirtualItems")
    static void DeleteVirtualItemsByNameAsync(
        const FString& itemName,
        FVirtualItemsModuleAdminDeleteVirtualItemsByNameAsyncResponse onSuccess, FVirtualItemsModule_AdminFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | VirtualItems")
    static void DeleteVirtualItemByAppIdAsync(
        const FString& appId,
        FVirtualItemsModuleAdminDeleteVirtualItemByAppIdAsyncResponse onSuccess, FVirtualItemsModule_AdminFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | VirtualItems")
    static void AddFromCSVWithBlockchainStubAsync(
        const FString& virtualItemName,
        const FString& csvContent,
        const FString& csvDelimiter,
        const FBP_CancellationToken& cancellationToken,
        FVirtualItemsModuleAdminAddFromCSVWithBlockchainStubAsyncResponse onSuccess, FVirtualItemsModule_AdminFailResponse onFail) {
             // TODO
    }
};
