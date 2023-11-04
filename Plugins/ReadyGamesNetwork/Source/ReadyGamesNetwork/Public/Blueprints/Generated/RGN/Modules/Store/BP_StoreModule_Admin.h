#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "../../../../../Generated/RGN/Modules/Store/StoreModule_Admin.h"
#include "../../../../../Generated/RGN/Modules/VirtualItems/PriceInfo.h"
#include "../VirtualItems/BP_PriceInfo.h"
#include <vector>
#include <unordered_map>
#include <string>
#include <functional>
#include "BP_StoreModule_Admin.generated.h"

using namespace std;

DECLARE_DYNAMIC_DELEGATE_TwoParams(FStoreModule_AdminFailResponse, int32, code, const FString&, message);

DECLARE_DYNAMIC_DELEGATE_OneParam(FStoreModuleAdminCreateLootBoxAsyncResponse, const FString&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FStoreModuleAdminDeleteLootBoxAsyncResponse, const FString&, response);
DECLARE_DYNAMIC_DELEGATE(FStoreModuleAdminDeleteStoreOfferAsyncResponse);

UCLASS()
class READYGAMESNETWORK_API UBP_StoreModule_Admin : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store", meta=(AutoCreateRefTerm="prices"))
    static void CreateLootBoxAsync(
        FStoreModuleAdminCreateLootBoxAsyncResponse onSuccess,
        FStoreModule_AdminFailResponse onFail,
        const FString& lootBoxName,
        const TArray<FString>& virtualItemTags,
        const TArray<FBP_PriceInfo>& prices) {
            string cpp_lootBoxName;
            vector<string> cpp_virtualItemTags;
            vector<RGN::Modules::VirtualItems::PriceInfo> cpp_prices;
            cpp_lootBoxName = string(TCHAR_TO_UTF8(*lootBoxName));
            for (const auto& virtualItemTags_item : virtualItemTags) {
                string cpp_virtualItemTags_item;
                cpp_virtualItemTags_item = string(TCHAR_TO_UTF8(*virtualItemTags_item));
                cpp_virtualItemTags.push_back(cpp_virtualItemTags_item);
            }
            for (const auto& prices_item : prices) {
                RGN::Modules::VirtualItems::PriceInfo cpp_prices_item;
                FBP_PriceInfo::ConvertToCoreModel(prices_item, cpp_prices_item);
                cpp_prices.push_back(cpp_prices_item);
            }
            RGN::Modules::Store::StoreModule_Admin::CreateLootBoxAsync(
                [onSuccess](string response) {
                    FString bpResponse;
                    bpResponse = FString(response.c_str());
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_lootBoxName,
                cpp_virtualItemTags,
                cpp_prices);
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void DeleteLootBoxAsync(
        FStoreModuleAdminDeleteLootBoxAsyncResponse onSuccess,
        FStoreModule_AdminFailResponse onFail,
        const FString& lootBoxId) {
            string cpp_lootBoxId;
            cpp_lootBoxId = string(TCHAR_TO_UTF8(*lootBoxId));
            RGN::Modules::Store::StoreModule_Admin::DeleteLootBoxAsync(
                [onSuccess](string response) {
                    FString bpResponse;
                    bpResponse = FString(response.c_str());
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_lootBoxId);
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void DeleteStoreOfferAsync(
        FStoreModuleAdminDeleteStoreOfferAsyncResponse onSuccess,
        FStoreModule_AdminFailResponse onFail,
        const FString& offerId) {
            string cpp_offerId;
            cpp_offerId = string(TCHAR_TO_UTF8(*offerId));
            RGN::Modules::Store::StoreModule_Admin::DeleteStoreOfferAsync(
                [onSuccess]() {
                    onSuccess.ExecuteIfBound();
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_offerId);
    }
};
