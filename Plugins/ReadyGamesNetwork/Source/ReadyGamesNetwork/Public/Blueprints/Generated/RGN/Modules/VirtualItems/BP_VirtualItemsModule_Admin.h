#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "../../../../Core/BP_CancellationToken.h"
#include "../../../../../Core/CancellationToken.h"
#include "../../../../../Generated/RGN/Modules/VirtualItems/VirtualItemsModule_Admin.h"
#include <vector>
#include <unordered_map>
#include <string>
#include <functional>
#include "BP_VirtualItemsModule_Admin.generated.h"

using namespace std;

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
        FVirtualItemsModuleAdminDeleteVirtualItemsByIdsAsyncResponse onSuccess,
        FVirtualItemsModule_AdminFailResponse onFail,
        const TArray<FString>& virtualItemIds) {
            vector<string> cpp_virtualItemIds;
            for (const auto& virtualItemIds_item : virtualItemIds) {
                string cpp_virtualItemIds_item;
                cpp_virtualItemIds_item = string(TCHAR_TO_UTF8(*virtualItemIds_item));
                cpp_virtualItemIds.push_back(cpp_virtualItemIds_item);
            }
            RGN::Modules::VirtualItems::VirtualItemsModule_Admin::DeleteVirtualItemsByIdsAsync(
                [onSuccess]() {
                    onSuccess.ExecuteIfBound();
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_virtualItemIds);
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | VirtualItems")
    static void DeleteVirtualItemsByNameAsync(
        FVirtualItemsModuleAdminDeleteVirtualItemsByNameAsyncResponse onSuccess,
        FVirtualItemsModule_AdminFailResponse onFail,
        const FString& itemName) {
            string cpp_itemName;
            cpp_itemName = string(TCHAR_TO_UTF8(*itemName));
            RGN::Modules::VirtualItems::VirtualItemsModule_Admin::DeleteVirtualItemsByNameAsync(
                [onSuccess]() {
                    onSuccess.ExecuteIfBound();
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_itemName);
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | VirtualItems")
    static void DeleteVirtualItemByAppIdAsync(
        FVirtualItemsModuleAdminDeleteVirtualItemByAppIdAsyncResponse onSuccess,
        FVirtualItemsModule_AdminFailResponse onFail,
        const FString& appId) {
            string cpp_appId;
            cpp_appId = string(TCHAR_TO_UTF8(*appId));
            RGN::Modules::VirtualItems::VirtualItemsModule_Admin::DeleteVirtualItemByAppIdAsync(
                [onSuccess]() {
                    onSuccess.ExecuteIfBound();
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_appId);
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | VirtualItems")
    static void AddFromCSVWithBlockchainStubAsync(
        FVirtualItemsModuleAdminAddFromCSVWithBlockchainStubAsyncResponse onSuccess,
        FVirtualItemsModule_AdminFailResponse onFail,
        const FString& virtualItemName,
        const FString& csvContent,
        const FString& csvDelimiter,
        const FBP_CancellationToken& cancellationToken) {
            string cpp_virtualItemName;
            string cpp_csvContent;
            string cpp_csvDelimiter;
            CancellationToken cpp_cancellationToken;
            cpp_virtualItemName = string(TCHAR_TO_UTF8(*virtualItemName));
            cpp_csvContent = string(TCHAR_TO_UTF8(*csvContent));
            cpp_csvDelimiter = string(TCHAR_TO_UTF8(*csvDelimiter));
            FBP_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::VirtualItems::VirtualItemsModule_Admin::AddFromCSVWithBlockchainStubAsync(
                [onSuccess](vector<string> response) {
                    TArray<FString> bpResponse;
                    for (const auto& response_item : response) {
                        FString b_response_item;
                        b_response_item = FString(response_item.c_str());
                        bpResponse.Add(b_response_item);
                    }
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_virtualItemName,
                cpp_csvContent,
                cpp_csvDelimiter,
                cpp_cancellationToken);
    }
};
