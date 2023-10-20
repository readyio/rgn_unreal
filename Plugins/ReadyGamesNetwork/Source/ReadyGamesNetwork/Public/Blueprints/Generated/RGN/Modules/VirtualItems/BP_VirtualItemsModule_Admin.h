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
        const TArray<FString>& virtualItemIds,
        FVirtualItemsModuleAdminDeleteVirtualItemsByIdsAsyncResponse onSuccess, FVirtualItemsModule_AdminFailResponse onFail) {
            vector<string> cpp_virtualItemIds;
			for (const auto& virtualItemIds_item : virtualItemIds) {
				string cpp_virtualItemIds_item;
				cpp_virtualItemIds_item = string(TCHAR_TO_UTF8(*virtualItemIds_item));
				cpp_virtualItemIds.push_back(cpp_virtualItemIds_item);
			}
            RGN::Modules::VirtualItems::VirtualItemsModule_Admin::DeleteVirtualItemsByIdsAsync(
                cpp_virtualItemIds,
                [onSuccess]() {
                    onSuccess.ExecuteIfBound();
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                }
            );
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | VirtualItems")
    static void DeleteVirtualItemsByNameAsync(
        const FString& itemName,
        FVirtualItemsModuleAdminDeleteVirtualItemsByNameAsyncResponse onSuccess, FVirtualItemsModule_AdminFailResponse onFail) {
            string cpp_itemName;
			cpp_itemName = string(TCHAR_TO_UTF8(*itemName));
            RGN::Modules::VirtualItems::VirtualItemsModule_Admin::DeleteVirtualItemsByNameAsync(
                cpp_itemName,
                [onSuccess]() {
                    onSuccess.ExecuteIfBound();
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                }
            );
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | VirtualItems")
    static void DeleteVirtualItemByAppIdAsync(
        const FString& appId,
        FVirtualItemsModuleAdminDeleteVirtualItemByAppIdAsyncResponse onSuccess, FVirtualItemsModule_AdminFailResponse onFail) {
            string cpp_appId;
			cpp_appId = string(TCHAR_TO_UTF8(*appId));
            RGN::Modules::VirtualItems::VirtualItemsModule_Admin::DeleteVirtualItemByAppIdAsync(
                cpp_appId,
                [onSuccess]() {
                    onSuccess.ExecuteIfBound();
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                }
            );
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | VirtualItems")
    static void AddFromCSVWithBlockchainStubAsync(
        const FString& virtualItemName,
        const FString& csvContent,
        const FString& csvDelimiter,
        const FBP_CancellationToken& cancellationToken,
        FVirtualItemsModuleAdminAddFromCSVWithBlockchainStubAsyncResponse onSuccess, FVirtualItemsModule_AdminFailResponse onFail) {
            string cpp_virtualItemName;
            string cpp_csvContent;
            string cpp_csvDelimiter;
            CancellationToken cpp_cancellationToken;
			cpp_virtualItemName = string(TCHAR_TO_UTF8(*virtualItemName));
			cpp_csvContent = string(TCHAR_TO_UTF8(*csvContent));
			cpp_csvDelimiter = string(TCHAR_TO_UTF8(*csvDelimiter));
			FBP_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::VirtualItems::VirtualItemsModule_Admin::AddFromCSVWithBlockchainStubAsync(
                cpp_virtualItemName,
                cpp_csvContent,
                cpp_csvDelimiter,
                cpp_cancellationToken,
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
                }
            );
    }
};
