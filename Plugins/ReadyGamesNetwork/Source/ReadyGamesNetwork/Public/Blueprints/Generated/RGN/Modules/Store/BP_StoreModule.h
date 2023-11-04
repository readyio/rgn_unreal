#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "../../../../Core/BP_CancellationToken.h"
#include "../../../../../Core/CancellationToken.h"
#include "../../../../../Generated/RGN/Modules/Store/StoreModule.h"
#include "../../../../../Generated/RGN/Modules/Store/BuyVirtualItemsResponse.h"
#include "BP_BuyVirtualItemsResponse.h"
#include "../../../../../Generated/RGN/Modules/Store/PurchaseResult.h"
#include "BP_PurchaseResult.h"
#include "../../../../../Generated/RGN/Modules/Store/BuyStoreOfferResponse.h"
#include "BP_BuyStoreOfferResponse.h"
#include "../../../../../Generated/RGN/Modules/Store/GetLootBoxesResponse.h"
#include "BP_GetLootBoxesResponse.h"
#include "../../../../../Generated/RGN/Modules/Store/LootBox.h"
#include "BP_LootBox.h"
#include "../../../../../Generated/RGN/Modules/Store/LootboxIsAvailableResponse.h"
#include "BP_LootboxIsAvailableResponse.h"
#include "../../../../../Generated/RGN/Modules/Store/PurchaseItem.h"
#include "BP_PurchaseItem.h"
#include "../../../../../Generated/RGN/Modules/Inventory/InventoryItemData.h"
#include "../Inventory/BP_InventoryItemData.h"
#include "../../../../../Generated/RGN/Modules/Store/StoreOffer.h"
#include "BP_StoreOffer.h"
#include "../../../../../Generated/RGN/Modules/Store/ImportStoreOffersFromCSVResponse.h"
#include "BP_ImportStoreOffersFromCSVResponse.h"
#include "../../../../../Generated/RGN/Modules/Store/GetStoreOffersResponse.h"
#include "BP_GetStoreOffersResponse.h"
#include "../../../../../Generated/RGN/Modules/Store/GetStoreOffersWithVirtualItemsDataResponse.h"
#include "BP_GetStoreOffersWithVirtualItemsDataResponse.h"
#include "../../../../../Generated/RGN/Modules/Store/GetStoreOfferTagsResponse.h"
#include "BP_GetStoreOfferTagsResponse.h"
#include "../../../../../Generated/RGN/Modules/VirtualItems/PriceInfo.h"
#include "../VirtualItems/BP_PriceInfo.h"
#include "../../../../../Generated/RGN/Modules/Store/SetPricesRequestData.h"
#include "BP_SetPricesRequestData.h"
#include "../../../../../Generated/RGN/Modules/Store/TimeInfo.h"
#include "BP_TimeInfo.h"
#include "../../../../../Generated/RGN/Modules/Store/SetTimeRequestData.h"
#include "BP_SetTimeRequestData.h"
#include <vector>
#include <unordered_map>
#include <string>
#include <functional>
#include "BP_StoreModule.generated.h"

using namespace std;

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
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store", meta=(AutoCreateRefTerm="currencies, offerId"))
    static void BuyVirtualItemsAsync(
        FStoreModuleBuyVirtualItemsAsyncResponse onSuccess,
        FStoreModuleFailResponse onFail,
        const TArray<FString>& itemIds,
        const TArray<FString>& currencies,
        const FString& offerId) {
            vector<string> cpp_itemIds;
            vector<string> cpp_currencies;
            string cpp_offerId;
            for (const auto& itemIds_item : itemIds) {
                string cpp_itemIds_item;
                cpp_itemIds_item = string(TCHAR_TO_UTF8(*itemIds_item));
                cpp_itemIds.push_back(cpp_itemIds_item);
            }
            for (const auto& currencies_item : currencies) {
                string cpp_currencies_item;
                cpp_currencies_item = string(TCHAR_TO_UTF8(*currencies_item));
                cpp_currencies.push_back(cpp_currencies_item);
            }
            cpp_offerId = string(TCHAR_TO_UTF8(*offerId));
            RGN::Modules::Store::StoreModule::BuyVirtualItemsAsync(
                [onSuccess](RGN::Modules::Store::PurchaseResult response) {
                    FBP_PurchaseResult bpResponse;
                    FBP_PurchaseResult::ConvertToUnrealModel(response, bpResponse);
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_itemIds,
                cpp_currencies,
                cpp_offerId);
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store", meta=(AutoCreateRefTerm="currencies"))
    static void BuyStoreOfferAsync(
        FStoreModuleBuyStoreOfferAsyncResponse onSuccess,
        FStoreModuleFailResponse onFail,
        const FString& offerId,
        const TArray<FString>& currencies) {
            string cpp_offerId;
            vector<string> cpp_currencies;
            cpp_offerId = string(TCHAR_TO_UTF8(*offerId));
            for (const auto& currencies_item : currencies) {
                string cpp_currencies_item;
                cpp_currencies_item = string(TCHAR_TO_UTF8(*currencies_item));
                cpp_currencies.push_back(cpp_currencies_item);
            }
            RGN::Modules::Store::StoreModule::BuyStoreOfferAsync(
                [onSuccess](RGN::Modules::Store::PurchaseResult response) {
                    FBP_PurchaseResult bpResponse;
                    FBP_PurchaseResult::ConvertToUnrealModel(response, bpResponse);
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_offerId,
                cpp_currencies);
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void GetLootBoxesByIdsAsync(
        FStoreModuleGetLootBoxesByIdsAsyncResponse onSuccess,
        FStoreModuleFailResponse onFail,
        const TArray<FString>& ids) {
            vector<string> cpp_ids;
            for (const auto& ids_item : ids) {
                string cpp_ids_item;
                cpp_ids_item = string(TCHAR_TO_UTF8(*ids_item));
                cpp_ids.push_back(cpp_ids_item);
            }
            RGN::Modules::Store::StoreModule::GetLootBoxesByIdsAsync(
                [onSuccess](vector<RGN::Modules::Store::LootBox> response) {
                    TArray<FBP_LootBox> bpResponse;
                    for (const auto& response_item : response) {
                        FBP_LootBox b_response_item;
                        FBP_LootBox::ConvertToUnrealModel(response_item, b_response_item);
                        bpResponse.Add(b_response_item);
                    }
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_ids);
    }
    /**
     * Asynchronously retrieves a list of lootBoxes from the Ready Games Network (RGN) store based on
     * the provided application identifiers.
     * @param appId - Application identifier used to filter the lootBoxes.
     * @param limit - An integer indicating the maximum number of store offers to retrieve.
     * @param startAfter - An optional parameter representing an store offer id after which to
     * start retrieving the store offers. The default is an empty string.
     * @return A Task representing the asynchronous operation. The Result property of the Task returns a list of
     * T:RGN.Modules.Store.LootBox objects representing the lootBoxes that match the specified application identifiers,
     * limit and other optional parameters.
     * @throw: Thrown when the provided appId list is empty.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store", meta=(AutoCreateRefTerm="startAfter"))
    static void GetLootBoxesByAppIdAsync(
        FStoreModuleGetLootBoxesByAppIdAsyncResponse onSuccess,
        FStoreModuleFailResponse onFail,
        const FString& appId,
        int32 limit,
        const FString& startAfter) {
            string cpp_appId;
            int32_t cpp_limit;
            string cpp_startAfter;
            cpp_appId = string(TCHAR_TO_UTF8(*appId));
            cpp_limit = limit;
            cpp_startAfter = string(TCHAR_TO_UTF8(*startAfter));
            RGN::Modules::Store::StoreModule::GetLootBoxesByAppIdAsync(
                [onSuccess](vector<RGN::Modules::Store::LootBox> response) {
                    TArray<FBP_LootBox> bpResponse;
                    for (const auto& response_item : response) {
                        FBP_LootBox b_response_item;
                        FBP_LootBox::ConvertToUnrealModel(response_item, b_response_item);
                        bpResponse.Add(b_response_item);
                    }
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_appId,
                cpp_limit,
                cpp_startAfter);
    }
    /**
     * Asynchronously retrieves a list of lootBoxes for the current application from the Ready Games Network (RGN) store.
     * @param limit - An integer indicating the maximum number of lootBoxes to retrieve.
     * @param startAfter - An optional parameter representing an lootBox id after which to
     * start retrieving the lootBoxes. The default is an empty string.
     * @return A Task representing the asynchronous operation. The Result property of the Task returns a list
     * of T:RGN.Modules.Store.LootBox objects representing the lootBoxes that match the current application identifier,
     * limit and other optional parameters.
     * @throw: Thrown when the provided limit value is zero.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store", meta=(AutoCreateRefTerm="startAfter"))
    static void GetLootBoxesForCurrentAppAsync(
        FStoreModuleGetLootBoxesForCurrentAppAsyncResponse onSuccess,
        FStoreModuleFailResponse onFail,
        int32 limit,
        const FString& startAfter) {
            int32_t cpp_limit;
            string cpp_startAfter;
            cpp_limit = limit;
            cpp_startAfter = string(TCHAR_TO_UTF8(*startAfter));
            RGN::Modules::Store::StoreModule::GetLootBoxesForCurrentAppAsync(
                [onSuccess](vector<RGN::Modules::Store::LootBox> response) {
                    TArray<FBP_LootBox> bpResponse;
                    for (const auto& response_item : response) {
                        FBP_LootBox b_response_item;
                        FBP_LootBox::ConvertToUnrealModel(response_item, b_response_item);
                        bpResponse.Add(b_response_item);
                    }
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_limit,
                cpp_startAfter);
    }
    /**
     * Asynchronously checks if a lootbox associated with the specified name is
     * available in the Ready Games Network (RGN) store.
     * The name specifies the virtual items that are included into the lootbox.
     * @param name - The unique identifier name associated with the lootbox to be checked.
     * Specifies the virtual items that are included into the lootbox.
     * @return A Task representing the asynchronous operation. The Result property of the Task indicates whether
     * the lootbox is available (returns true) or not (returns false).
     * @throw: Thrown when the provided name is null or empty.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void LootboxIsAvailableAsync(
        FStoreModuleLootboxIsAvailableAsyncResponse onSuccess,
        FStoreModuleFailResponse onFail,
        const FString& name) {
            string cpp_name;
            cpp_name = string(TCHAR_TO_UTF8(*name));
            RGN::Modules::Store::StoreModule::LootboxIsAvailableAsync(
                [onSuccess](bool response) {
                    bool bpResponse;
                    bpResponse = response;
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_name);
    }
    /**
     * Asynchronously gets the number of virtual items available for a lootbox
     * The name specifies the virtual items that are included into the lootbox.
     * @param name - The unique identifier name associated with the lootbox to be checked.
     * Specifies the virtual items that are included into the lootbox.
     * @return A Task representing the asynchronous operation. The Result property of the Task returns
     * the amount of virtual items available in the loot box
     * @throw: Thrown when the provided name is null or empty.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void GetAvailableLootBoxItemsCountAsync(
        FStoreModuleGetAvailableLootBoxItemsCountAsyncResponse onSuccess,
        FStoreModuleFailResponse onFail,
        const FString& name) {
            string cpp_name;
            cpp_name = string(TCHAR_TO_UTF8(*name));
            RGN::Modules::Store::StoreModule::GetAvailableLootBoxItemsCountAsync(
                [onSuccess](int64_t response) {
                    int64 bpResponse;
                    bpResponse = response;
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_name);
    }
    /**
     * Asynchronously opens a lootbox associated with the specified name in the Ready Games Network (RGN) store.
     * The name specifies the virtual items that are included into the lootbox.
     * Randomly selects a virtual item to purchase. Goes with the selected virtual item through purchase process
     * M:RGN.Modules.Store.StoreModule.BuyVirtualItemsAsync(System.Collections.Generic.List{System.String},System.Collections.Generic.List{System.String},System.String)
     * if the virtual item does not have price specified, it is added to users inventory for free
     * @param name - The unique identifier name associated with the lootbox to be opened.
     * Specifies the virtual items that are included into the lootbox.
     * @return A Task representing the asynchronous operation. The Result property of the Task returns the
     * T:RGN.Modules.Inventory.InventoryItemData object representing the items obtained from the opened lootbox.
     * @throw: Thrown when the provided name is null or empty.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void OpenLootboxAsync(
        FStoreModuleOpenLootboxAsyncResponse onSuccess,
        FStoreModuleFailResponse onFail,
        const FString& name) {
            string cpp_name;
            cpp_name = string(TCHAR_TO_UTF8(*name));
            RGN::Modules::Store::StoreModule::OpenLootboxAsync(
                [onSuccess](RGN::Modules::Inventory::InventoryItemData response) {
                    FBP_InventoryItemData bpResponse;
                    FBP_InventoryItemData::ConvertToUnrealModel(response, bpResponse);
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_name);
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store", meta=(AutoCreateRefTerm="name, description, tags, quantity"))
    static void AddVirtualItemsStoreOfferAsync(
        FStoreModuleAddVirtualItemsStoreOfferAsyncResponse onSuccess,
        FStoreModuleFailResponse onFail,
        const TArray<FString>& appIds,
        const TArray<FString>& itemIds,
        const FString& name,
        const FString& description,
        const TArray<FString>& tags,
        int32 quantity) {
            vector<string> cpp_appIds;
            vector<string> cpp_itemIds;
            string cpp_name;
            string cpp_description;
            vector<string> cpp_tags;
            int32_t cpp_quantity;
            for (const auto& appIds_item : appIds) {
                string cpp_appIds_item;
                cpp_appIds_item = string(TCHAR_TO_UTF8(*appIds_item));
                cpp_appIds.push_back(cpp_appIds_item);
            }
            for (const auto& itemIds_item : itemIds) {
                string cpp_itemIds_item;
                cpp_itemIds_item = string(TCHAR_TO_UTF8(*itemIds_item));
                cpp_itemIds.push_back(cpp_itemIds_item);
            }
            cpp_name = string(TCHAR_TO_UTF8(*name));
            cpp_description = string(TCHAR_TO_UTF8(*description));
            for (const auto& tags_item : tags) {
                string cpp_tags_item;
                cpp_tags_item = string(TCHAR_TO_UTF8(*tags_item));
                cpp_tags.push_back(cpp_tags_item);
            }
            cpp_quantity = quantity;
            RGN::Modules::Store::StoreModule::AddVirtualItemsStoreOfferAsync(
                [onSuccess](RGN::Modules::Store::StoreOffer response) {
                    FBP_StoreOffer bpResponse;
                    FBP_StoreOffer::ConvertToUnrealModel(response, bpResponse);
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_appIds,
                cpp_itemIds,
                cpp_name,
                cpp_description,
                cpp_tags,
                cpp_quantity);
    }
    /**
     * Asynchronously imports a list of store offers from a CSV formatted string to the Ready Games Network (RGN) store.
     * @param content - A string representing the CSV content that contains the store offers to be imported.
     * @param delimiter - A string representing the character used as a delimiter in the CSV content.
     * @param cancellationToken - An optional parameter for the CancellationToken that propagates a notification
     * that operations should be cancelled. The default value is None.
     * @return A Task representing the asynchronous operation. The Result property of the Task returns
     * a list of T:RGN.Modules.Store.StoreOffer objects representing the successfully imported store offers.
     * @throw: Thrown when the provided content string is null or empty.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store", meta=(AutoCreateRefTerm="cancellationToken"))
    static void ImportStoreOffersFromCSVAsync(
        FStoreModuleImportStoreOffersFromCSVAsyncResponse onSuccess,
        FStoreModuleFailResponse onFail,
        const FString& content,
        const FString& delimiter,
        const FBP_CancellationToken& cancellationToken) {
            string cpp_content;
            string cpp_delimiter;
            CancellationToken cpp_cancellationToken;
            cpp_content = string(TCHAR_TO_UTF8(*content));
            cpp_delimiter = string(TCHAR_TO_UTF8(*delimiter));
            FBP_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Store::StoreModule::ImportStoreOffersFromCSVAsync(
                [onSuccess](vector<RGN::Modules::Store::StoreOffer> response) {
                    TArray<FBP_StoreOffer> bpResponse;
                    for (const auto& response_item : response) {
                        FBP_StoreOffer b_response_item;
                        FBP_StoreOffer::ConvertToUnrealModel(response_item, b_response_item);
                        bpResponse.Add(b_response_item);
                    }
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_content,
                cpp_delimiter,
                cpp_cancellationToken);
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store", meta=(AutoCreateRefTerm="appId, ignoreTimestamp"))
    static void GetByTagsAsync(
        FStoreModuleGetByTagsAsyncResponse onSuccess,
        FStoreModuleFailResponse onFail,
        const TArray<FString>& tags,
        const FString& appId,
        bool ignoreTimestamp) {
            vector<string> cpp_tags;
            string cpp_appId;
            bool cpp_ignoreTimestamp;
            for (const auto& tags_item : tags) {
                string cpp_tags_item;
                cpp_tags_item = string(TCHAR_TO_UTF8(*tags_item));
                cpp_tags.push_back(cpp_tags_item);
            }
            cpp_appId = string(TCHAR_TO_UTF8(*appId));
            cpp_ignoreTimestamp = ignoreTimestamp;
            RGN::Modules::Store::StoreModule::GetByTagsAsync(
                [onSuccess](vector<RGN::Modules::Store::StoreOffer> response) {
                    TArray<FBP_StoreOffer> bpResponse;
                    for (const auto& response_item : response) {
                        FBP_StoreOffer b_response_item;
                        FBP_StoreOffer::ConvertToUnrealModel(response_item, b_response_item);
                        bpResponse.Add(b_response_item);
                    }
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_tags,
                cpp_appId,
                cpp_ignoreTimestamp);
    }
    /**
     * Asynchronously retrieves a list of store offers from the Ready Games Network (RGN) store based on a provided timestamp.
     * @param appId - The application identifier used for filtering the store offers.
     * @param timestamp - A long type argument representing the timestamp for filtering the store offers.
     * @return A Task representing the asynchronous operation. The Result property of the Task returns a list
     * of T:RGN.Modules.Store.StoreOffer objects representing the store offers that match the specified appId and timestamp.
     * @throw: Thrown when the provided appId string is null or empty.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void GetByTimestampAsync(
        FStoreModuleGetByTimestampAsyncResponse onSuccess,
        FStoreModuleFailResponse onFail,
        const FString& appId,
        int64 timestamp) {
            string cpp_appId;
            int64_t cpp_timestamp;
            cpp_appId = string(TCHAR_TO_UTF8(*appId));
            cpp_timestamp = timestamp;
            RGN::Modules::Store::StoreModule::GetByTimestampAsync(
                [onSuccess](vector<RGN::Modules::Store::StoreOffer> response) {
                    TArray<FBP_StoreOffer> bpResponse;
                    for (const auto& response_item : response) {
                        FBP_StoreOffer b_response_item;
                        FBP_StoreOffer::ConvertToUnrealModel(response_item, b_response_item);
                        bpResponse.Add(b_response_item);
                    }
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_appId,
                cpp_timestamp);
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store", meta=(AutoCreateRefTerm="startAfter, ignoreTimestamp"))
    static void GetByAppIdsAsync(
        FStoreModuleGetByAppIdsAsyncResponse onSuccess,
        FStoreModuleFailResponse onFail,
        const TArray<FString>& appIds,
        int32 limit,
        const FString& startAfter,
        bool ignoreTimestamp) {
            vector<string> cpp_appIds;
            int32_t cpp_limit;
            string cpp_startAfter;
            bool cpp_ignoreTimestamp;
            for (const auto& appIds_item : appIds) {
                string cpp_appIds_item;
                cpp_appIds_item = string(TCHAR_TO_UTF8(*appIds_item));
                cpp_appIds.push_back(cpp_appIds_item);
            }
            cpp_limit = limit;
            cpp_startAfter = string(TCHAR_TO_UTF8(*startAfter));
            cpp_ignoreTimestamp = ignoreTimestamp;
            RGN::Modules::Store::StoreModule::GetByAppIdsAsync(
                [onSuccess](vector<RGN::Modules::Store::StoreOffer> response) {
                    TArray<FBP_StoreOffer> bpResponse;
                    for (const auto& response_item : response) {
                        FBP_StoreOffer b_response_item;
                        FBP_StoreOffer::ConvertToUnrealModel(response_item, b_response_item);
                        bpResponse.Add(b_response_item);
                    }
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_appIds,
                cpp_limit,
                cpp_startAfter,
                cpp_ignoreTimestamp);
    }
    /**
     * Asynchronously retrieves a list of store offers for the current application from the Ready Games Network (RGN) store.
     * @param limit - An integer indicating the maximum number of store offers to retrieve.
     * @param startAfter - An optional parameter representing an store offer id after which to
     * start retrieving the store offers. The default is an empty string.
     * @param ignoreTimestamp - An optional parameter that indicates whether to ignore the timestamp in the store offers
     * retrieval process. The default is false.
     * @return A Task representing the asynchronous operation. The Result property of the Task returns a list
     * of T:RGN.Modules.Store.StoreOffer objects representing the store offers that match the current application identifier,
     * limit and other optional parameters.
     * @throw: Thrown when the provided limit value is zero.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store", meta=(AutoCreateRefTerm="startAfter, ignoreTimestamp"))
    static void GetForCurrentAppAsync(
        FStoreModuleGetForCurrentAppAsyncResponse onSuccess,
        FStoreModuleFailResponse onFail,
        int32 limit,
        const FString& startAfter,
        bool ignoreTimestamp) {
            int32_t cpp_limit;
            string cpp_startAfter;
            bool cpp_ignoreTimestamp;
            cpp_limit = limit;
            cpp_startAfter = string(TCHAR_TO_UTF8(*startAfter));
            cpp_ignoreTimestamp = ignoreTimestamp;
            RGN::Modules::Store::StoreModule::GetForCurrentAppAsync(
                [onSuccess](vector<RGN::Modules::Store::StoreOffer> response) {
                    TArray<FBP_StoreOffer> bpResponse;
                    for (const auto& response_item : response) {
                        FBP_StoreOffer b_response_item;
                        FBP_StoreOffer::ConvertToUnrealModel(response_item, b_response_item);
                        bpResponse.Add(b_response_item);
                    }
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_limit,
                cpp_startAfter,
                cpp_ignoreTimestamp);
    }
    /**
     * Asynchronously retrieves a list of store offers with their associated virtual items data for the current application
     * from the Ready Games Network (RGN) store.
     * @param limit - An integer indicating the maximum number of store offers to retrieve.
     * @param startAfter - An optional parameter representing an stor offer id after which to start retrieving the store offers.
     * The default is an empty string.
     * @param ignoreTimestamp - An optional parameter that indicates whether to ignore the timestamp in the store
     * offers retrieval process. The default is false.
     * @return A Task representing the asynchronous operation. The Result property of the Task returns a list of
     * T:RGN.Modules.Store.StoreOffer objects with their associated store offer items data that match the current application identifier,
     * limit and other optional parameters.
     * @throw: Thrown when the provided limit value is zero.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store", meta=(AutoCreateRefTerm="startAfter, ignoreTimestamp"))
    static void GetWithVirtualItemsDataForCurrentAppAsync(
        FStoreModuleGetWithVirtualItemsDataForCurrentAppAsyncResponse onSuccess,
        FStoreModuleFailResponse onFail,
        int32 limit,
        const FString& startAfter,
        bool ignoreTimestamp) {
            int32_t cpp_limit;
            string cpp_startAfter;
            bool cpp_ignoreTimestamp;
            cpp_limit = limit;
            cpp_startAfter = string(TCHAR_TO_UTF8(*startAfter));
            cpp_ignoreTimestamp = ignoreTimestamp;
            RGN::Modules::Store::StoreModule::GetWithVirtualItemsDataForCurrentAppAsync(
                [onSuccess](vector<RGN::Modules::Store::StoreOffer> response) {
                    TArray<FBP_StoreOffer> bpResponse;
                    for (const auto& response_item : response) {
                        FBP_StoreOffer b_response_item;
                        FBP_StoreOffer::ConvertToUnrealModel(response_item, b_response_item);
                        bpResponse.Add(b_response_item);
                    }
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_limit,
                cpp_startAfter,
                cpp_ignoreTimestamp);
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store", meta=(AutoCreateRefTerm="startAfter, ignoreTimestamp"))
    static void GetWithVirtualItemsDataByAppIdsAsync(
        FStoreModuleGetWithVirtualItemsDataByAppIdsAsyncResponse onSuccess,
        FStoreModuleFailResponse onFail,
        const TArray<FString>& appIds,
        int32 limit,
        const FString& startAfter,
        bool ignoreTimestamp) {
            vector<string> cpp_appIds;
            int32_t cpp_limit;
            string cpp_startAfter;
            bool cpp_ignoreTimestamp;
            for (const auto& appIds_item : appIds) {
                string cpp_appIds_item;
                cpp_appIds_item = string(TCHAR_TO_UTF8(*appIds_item));
                cpp_appIds.push_back(cpp_appIds_item);
            }
            cpp_limit = limit;
            cpp_startAfter = string(TCHAR_TO_UTF8(*startAfter));
            cpp_ignoreTimestamp = ignoreTimestamp;
            RGN::Modules::Store::StoreModule::GetWithVirtualItemsDataByAppIdsAsync(
                [onSuccess](vector<RGN::Modules::Store::StoreOffer> response) {
                    TArray<FBP_StoreOffer> bpResponse;
                    for (const auto& response_item : response) {
                        FBP_StoreOffer b_response_item;
                        FBP_StoreOffer::ConvertToUnrealModel(response_item, b_response_item);
                        bpResponse.Add(b_response_item);
                    }
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_appIds,
                cpp_limit,
                cpp_startAfter,
                cpp_ignoreTimestamp);
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void GetByIdsAsync(
        FStoreModuleGetByIdsAsyncResponse onSuccess,
        FStoreModuleFailResponse onFail,
        const TArray<FString>& ids) {
            vector<string> cpp_ids;
            for (const auto& ids_item : ids) {
                string cpp_ids_item;
                cpp_ids_item = string(TCHAR_TO_UTF8(*ids_item));
                cpp_ids.push_back(cpp_ids_item);
            }
            RGN::Modules::Store::StoreModule::GetByIdsAsync(
                [onSuccess](vector<RGN::Modules::Store::StoreOffer> response) {
                    TArray<FBP_StoreOffer> bpResponse;
                    for (const auto& response_item : response) {
                        FBP_StoreOffer b_response_item;
                        FBP_StoreOffer::ConvertToUnrealModel(response_item, b_response_item);
                        bpResponse.Add(b_response_item);
                    }
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_ids);
    }
    /**
     * Asynchronously retrieves a list of tags associated with a specific store offer from the Ready Games Network (RGN) store.
     * @param offerId - The identifier of the store offer for which to retrieve tags.
     * @return A Task representing the asynchronous operation. The Result property of the Task returns a list of tags
     * associated with the specified store offer.
     * @throw: Thrown when the provided offerId is null or empty.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void GetTagsAsync(
        FStoreModuleGetTagsAsyncResponse onSuccess,
        FStoreModuleFailResponse onFail,
        const FString& offerId) {
            string cpp_offerId;
            cpp_offerId = string(TCHAR_TO_UTF8(*offerId));
            RGN::Modules::Store::StoreModule::GetTagsAsync(
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
                cpp_offerId);
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store", meta=(AutoCreateRefTerm="appId"))
    static void SetTagsAsync(
        FStoreModuleSetTagsAsyncResponse onSuccess,
        FStoreModuleFailResponse onFail,
        const FString& offerId,
        const TArray<FString>& tags,
        const FString& appId) {
            string cpp_offerId;
            vector<string> cpp_tags;
            string cpp_appId;
            cpp_offerId = string(TCHAR_TO_UTF8(*offerId));
            for (const auto& tags_item : tags) {
                string cpp_tags_item;
                cpp_tags_item = string(TCHAR_TO_UTF8(*tags_item));
                cpp_tags.push_back(cpp_tags_item);
            }
            cpp_appId = string(TCHAR_TO_UTF8(*appId));
            RGN::Modules::Store::StoreModule::SetTagsAsync(
                [onSuccess]() {
                    onSuccess.ExecuteIfBound();
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_offerId,
                cpp_tags,
                cpp_appId);
    }
    /**
     * Asynchronously sets the name for a specific store offer in the Ready Games Network (RGN) store.
     * @param offerId - The identifier of the store offer for which to set the name.
     * @param name - The new name to be set for the specified store offer.
     * @return A Task representing the asynchronous operation. The task result does not return a value.
     * @throw: Thrown when the provided offerId or name is null or empty.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void SetNameAsync(
        FStoreModuleSetNameAsyncResponse onSuccess,
        FStoreModuleFailResponse onFail,
        const FString& offerId,
        const FString& name) {
            string cpp_offerId;
            string cpp_name;
            cpp_offerId = string(TCHAR_TO_UTF8(*offerId));
            cpp_name = string(TCHAR_TO_UTF8(*name));
            RGN::Modules::Store::StoreModule::SetNameAsync(
                [onSuccess]() {
                    onSuccess.ExecuteIfBound();
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_offerId,
                cpp_name);
    }
    /**
     * Asynchronously sets the description for a specific store offer in the Ready Games Network (RGN) store.
     * @param offerId - The identifier of the store offer for which to set the description.
     * @param description - The new description to be set for the specified store offer.
     * @return A Task representing the asynchronous operation. The task result does not return a value.
     * @throw: Thrown when the provided offerId or description is null or empty.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void SetDescriptionAsync(
        FStoreModuleSetDescriptionAsyncResponse onSuccess,
        FStoreModuleFailResponse onFail,
        const FString& offerId,
        const FString& description) {
            string cpp_offerId;
            string cpp_description;
            cpp_offerId = string(TCHAR_TO_UTF8(*offerId));
            cpp_description = string(TCHAR_TO_UTF8(*description));
            RGN::Modules::Store::StoreModule::SetDescriptionAsync(
                [onSuccess]() {
                    onSuccess.ExecuteIfBound();
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_offerId,
                cpp_description);
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void SetPricesAsync(
        FStoreModuleSetPricesAsyncResponse onSuccess,
        FStoreModuleFailResponse onFail,
        const FString& offerId,
        const TArray<FBP_PriceInfo>& prices) {
            string cpp_offerId;
            vector<RGN::Modules::VirtualItems::PriceInfo> cpp_prices;
            cpp_offerId = string(TCHAR_TO_UTF8(*offerId));
            for (const auto& prices_item : prices) {
                RGN::Modules::VirtualItems::PriceInfo cpp_prices_item;
                FBP_PriceInfo::ConvertToCoreModel(prices_item, cpp_prices_item);
                cpp_prices.push_back(cpp_prices_item);
            }
            RGN::Modules::Store::StoreModule::SetPricesAsync(
                [onSuccess]() {
                    onSuccess.ExecuteIfBound();
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_offerId,
                cpp_prices);
    }
    /**
     * Asynchronously sets the time information for a specific store offer in the Ready Games Network (RGN) store.
     * @param offerId - The identifier of the store offer for which to set the time information.
     * @param time - A TimeInfo object containing the time information to be set for the specified store offer.
     * @return A Task representing the asynchronous operation. The task result does not return a value.
     * @throw: Thrown when the provided offerId is null or empty or when the
     * provided TimeInfo object is null.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void SetTimeAsync(
        FStoreModuleSetTimeAsyncResponse onSuccess,
        FStoreModuleFailResponse onFail,
        const FString& offerId,
        const FBP_TimeInfo& time) {
            string cpp_offerId;
            RGN::Modules::Store::TimeInfo cpp_time;
            cpp_offerId = string(TCHAR_TO_UTF8(*offerId));
            FBP_TimeInfo::ConvertToCoreModel(time, cpp_time);
            RGN::Modules::Store::StoreModule::SetTimeAsync(
                [onSuccess]() {
                    onSuccess.ExecuteIfBound();
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_offerId,
                cpp_time);
    }
    /**
     * Asynchronously sets the image URL for a specific store offer in the Ready Games Network (RGN) store.
     * @param offerId - The identifier of the store offer for which to set the image URL.
     * @param imageUrl - The URL of the image to be set for the specified store offer.
     * @return A Task representing the asynchronous operation. The task result does not return a value.
     * @throw: Thrown when the provided offerId or imageUrl is null or empty.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void SetImageUrlAsync(
        FStoreModuleSetImageUrlAsyncResponse onSuccess,
        FStoreModuleFailResponse onFail,
        const FString& offerId,
        const FString& imageUrl) {
            string cpp_offerId;
            string cpp_imageUrl;
            cpp_offerId = string(TCHAR_TO_UTF8(*offerId));
            cpp_imageUrl = string(TCHAR_TO_UTF8(*imageUrl));
            RGN::Modules::Store::StoreModule::SetImageUrlAsync(
                [onSuccess]() {
                    onSuccess.ExecuteIfBound();
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_offerId,
                cpp_imageUrl);
    }
    /**
     * Asynchronously retrieves the properties of a specific store offer in the Ready Games Network (RGN) store.
     * @param storeOfferId - The identifier of the store offer whose properties are to be retrieved.
     * @return A Task representing the asynchronous operation. The Task result contains a string that represents the JSON-formatted properties of the store offer.
     * @throw: Thrown when the provided storeOfferId is null or empty.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void GetPropertiesAsync(
        FStoreModuleGetPropertiesAsyncResponse onSuccess,
        FStoreModuleFailResponse onFail,
        const FString& storeOfferId) {
            string cpp_storeOfferId;
            cpp_storeOfferId = string(TCHAR_TO_UTF8(*storeOfferId));
            RGN::Modules::Store::StoreModule::GetPropertiesAsync(
                [onSuccess](string response) {
                    FString bpResponse;
                    bpResponse = FString(response.c_str());
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_storeOfferId);
    }
    /**
     * Asynchronously sets the properties of a specific store offer in the Ready Games Network (RGN) store.
     * @param storeOfferId - The identifier of the store offer whose properties are to be set.
     * @param json - A string containing the JSON representation of the properties to be set.
     * @return A Task representing the asynchronous operation. The Task result contains a string confirmation of the properties' update.
     * @throw: Thrown when the provided storeOfferId or json is null or empty.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void SetPropertiesAsync(
        FStoreModuleSetPropertiesAsyncResponse onSuccess,
        FStoreModuleFailResponse onFail,
        const FString& storeOfferId,
        const FString& json) {
            string cpp_storeOfferId;
            string cpp_json;
            cpp_storeOfferId = string(TCHAR_TO_UTF8(*storeOfferId));
            cpp_json = string(TCHAR_TO_UTF8(*json));
            RGN::Modules::Store::StoreModule::SetPropertiesAsync(
                [onSuccess](string response) {
                    FString bpResponse;
                    bpResponse = FString(response.c_str());
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_storeOfferId,
                cpp_json);
    }
};
