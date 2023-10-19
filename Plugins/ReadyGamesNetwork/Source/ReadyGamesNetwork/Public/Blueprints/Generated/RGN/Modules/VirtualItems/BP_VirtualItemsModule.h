#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BP_VirtualItem.h"
#include "BP_AddVirtualItemResponseData.h"
#include "BP_AddToVirtualItemsRequestData.h"
#include "BP_UpdateVirtualItemsRequestData.h"
#include "BP_VirtualItemsResponseData.h"
#include "../../Model/Request/BP_BaseMigrationRequestData.h"
#include "BP_GetAllVirtualItemsByAppIdsRequestData.h"
#include "BP_GetVirtualItemsByIdsRequestData.h"
#include "BP_GetVirtualItemTagsResponse.h"
#include "../../Model/BP_ImageSize.h"
#include "BP_VirtualItemsModule.generated.h"

DECLARE_DYNAMIC_DELEGATE_TwoParams(FVirtualItemsModuleFailResponse, int32, code, const FString&, message);

DECLARE_DYNAMIC_DELEGATE_OneParam(FVirtualItemsModuleAddVirtualItemAsyncResponse, const FBP_VirtualItem&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FVirtualItemsModuleAddFromCSVAsyncResponse, const TArray<FString>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FVirtualItemsModuleUpdateVirtualItemAsyncResponse, const FBP_VirtualItem&, response);
DECLARE_DYNAMIC_DELEGATE(FVirtualItemsModuleDeleteVirtualItemAsyncResponse);
DECLARE_DYNAMIC_DELEGATE_OneParam(FVirtualItemsModuleGetVirtualItemsAsyncResponse, const TArray<FBP_VirtualItem>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FVirtualItemsModuleGetVirtualItemsByIdsAsyncResponse, const TArray<FBP_VirtualItem>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FVirtualItemsModuleGetByTagsAsyncResponse, const TArray<FBP_VirtualItem>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FVirtualItemsModuleGetTagsAsyncResponse, const TArray<FString>&, response);
DECLARE_DYNAMIC_DELEGATE(FVirtualItemsModuleSetTagsAsyncResponse);
DECLARE_DYNAMIC_DELEGATE(FVirtualItemsModuleSetNameAsyncResponse);
DECLARE_DYNAMIC_DELEGATE(FVirtualItemsModuleSetDescriptionAsyncResponse);
DECLARE_DYNAMIC_DELEGATE_OneParam(FVirtualItemsModuleGetPropertiesAsyncResponse, const FString&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FVirtualItemsModuleSetPropertiesAsyncResponse, const FString&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FVirtualItemsModuleUploadImageAsyncResponse, bool, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FVirtualItemsModuleDownloadImageAsyncResponse, const TArray<uint8>&, response);

UCLASS()
class READYGAMESNETWORK_API UBP_VirtualItemsModule : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | VirtualItems")
    static void AddVirtualItemAsync(
        const FBP_VirtualItem& virtualItem,
        FVirtualItemsModuleAddVirtualItemAsyncResponse onSuccess, FVirtualItemsModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | VirtualItems")
    static void AddFromCSVAsync(
        const FString& virtualItemName,
        const FString& csvContent,
        const FString& csvDelimiter,
        const FBP_CancellationToken& cancellationToken,
        FVirtualItemsModuleAddFromCSVAsyncResponse onSuccess, FVirtualItemsModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | VirtualItems")
    static void UpdateVirtualItemAsync(
        const FString& itemId,
        const FBP_VirtualItem& virtualItem,
        FVirtualItemsModuleUpdateVirtualItemAsyncResponse onSuccess, FVirtualItemsModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | VirtualItems")
    static void DeleteVirtualItemAsync(
        const FString& itemId,
        FVirtualItemsModuleDeleteVirtualItemAsyncResponse onSuccess, FVirtualItemsModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | VirtualItems")
    static void GetVirtualItemsAsync1(
        FVirtualItemsModuleGetVirtualItemsAsyncResponse onSuccess, FVirtualItemsModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | VirtualItems")
    static void GetVirtualItemsAsync2(
        int32 limit,
        const FString& startAfter,
        FVirtualItemsModuleGetVirtualItemsAsyncResponse onSuccess, FVirtualItemsModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | VirtualItems")
    static void GetVirtualItemsByIdsAsync(
        const TArray<FString>& virtualItemsIds,
        FVirtualItemsModuleGetVirtualItemsByIdsAsyncResponse onSuccess, FVirtualItemsModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | VirtualItems")
    static void GetByTagsAsync(
        const TArray<FString>& tags,
        const FString& appId,
        FVirtualItemsModuleGetByTagsAsyncResponse onSuccess, FVirtualItemsModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | VirtualItems")
    static void GetTagsAsync(
        const FString& virtualItemId,
        FVirtualItemsModuleGetTagsAsyncResponse onSuccess, FVirtualItemsModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | VirtualItems")
    static void SetTagsAsync(
        const FString& virtualItemId,
        const TArray<FString>& tags,
        const FString& appId,
        FVirtualItemsModuleSetTagsAsyncResponse onSuccess, FVirtualItemsModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | VirtualItems")
    static void SetNameAsync(
        const FString& virtualItemId,
        const FString& name,
        FVirtualItemsModuleSetNameAsyncResponse onSuccess, FVirtualItemsModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | VirtualItems")
    static void SetDescriptionAsync(
        const FString& virtualItemId,
        const FString& description,
        FVirtualItemsModuleSetDescriptionAsyncResponse onSuccess, FVirtualItemsModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | VirtualItems")
    static void GetPropertiesAsync(
        const FString& virtualItemId,
        FVirtualItemsModuleGetPropertiesAsyncResponse onSuccess, FVirtualItemsModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | VirtualItems")
    static void SetPropertiesAsync(
        const FString& virtualItemId,
        const FString& json,
        FVirtualItemsModuleSetPropertiesAsyncResponse onSuccess, FVirtualItemsModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | VirtualItems")
    static void UploadImageAsync(
        const FString& virtualItemId,
        const TArray<uint8>& thumbnailTextureBytes,
        const FBP_CancellationToken& cancellationToken,
        FVirtualItemsModuleUploadImageAsyncResponse onSuccess, FVirtualItemsModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | VirtualItems")
    static void DownloadImageAsync(
        const FString& virtualItemId,
        const EBP_ImageSize& size,
        const FBP_CancellationToken& cancellationToken,
        FVirtualItemsModuleDownloadImageAsyncResponse onSuccess, FVirtualItemsModuleFailResponse onFail) {
             // TODO
    }
};
