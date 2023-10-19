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
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void CreateLootBoxAsync(
        const FString& lootBoxName,
        const TArray<FString>& virtualItemTags,
        const TArray<FBP_PriceInfo>& prices,
        FStoreModuleAdminCreateLootBoxAsyncResponse onSuccess, FStoreModule_AdminFailResponse onFail) {
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
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void DeleteLootBoxAsync(
        const FString& lootBoxId,
        FStoreModuleAdminDeleteLootBoxAsyncResponse onSuccess, FStoreModule_AdminFailResponse onFail) {
            string cpp_lootBoxId;
			cpp_lootBoxId = string(TCHAR_TO_UTF8(*lootBoxId));
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void DeleteStoreOfferAsync(
        const FString& offerId,
        FStoreModuleAdminDeleteStoreOfferAsyncResponse onSuccess, FStoreModule_AdminFailResponse onFail) {
            string cpp_offerId;
			cpp_offerId = string(TCHAR_TO_UTF8(*offerId));
            // TODO
    }
};
