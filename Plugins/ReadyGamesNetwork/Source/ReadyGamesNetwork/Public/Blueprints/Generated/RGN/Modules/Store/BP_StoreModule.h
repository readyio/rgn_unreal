#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "../../../../Core/BP_CancellationToken.h"
#include "../../../../../Core/CancellationToken.h"
#include "../../../../../Generated/RGN/Modules/Store/StoreModule.h"
#include "../../../../../Generated/RGN/Modules/Store/BuyVirtualItemsResponse.h"
#include "BP_BuyVirtualItemsResponse.h"
#include "../../../../../Generated/RGN/Modules/Store/BuyStoreOfferResponse.h"
#include "BP_BuyStoreOfferResponse.h"
#include "../../../../../Generated/RGN/Modules/Store/GetLootBoxesResponse.h"
#include "BP_GetLootBoxesResponse.h"
#include "../../../../../Generated/RGN/Modules/Store/LootboxIsAvailableResponse.h"
#include "BP_LootboxIsAvailableResponse.h"
#include "../../../../../Generated/RGN/Modules/Store/PurchaseItem.h"
#include "BP_PurchaseItem.h"
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
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void BuyVirtualItemsAsync(
        const TArray<FString>& itemIds,
        const TArray<FString>& currencies,
        const FString& offerId,
        FStoreModuleBuyVirtualItemsAsyncResponse onSuccess, FStoreModuleFailResponse onFail) {
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
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void BuyStoreOfferAsync(
        const FString& offerId,
        const TArray<FString>& currencies,
        FStoreModuleBuyStoreOfferAsyncResponse onSuccess, FStoreModuleFailResponse onFail) {
            string cpp_offerId;
            vector<string> cpp_currencies;
			cpp_offerId = string(TCHAR_TO_UTF8(*offerId));
			for (const auto& currencies_item : currencies) {
				string cpp_currencies_item;
				cpp_currencies_item = string(TCHAR_TO_UTF8(*currencies_item));
				cpp_currencies.push_back(cpp_currencies_item);
			}
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void GetLootBoxesByIdsAsync(
        const TArray<FString>& ids,
        FStoreModuleGetLootBoxesByIdsAsyncResponse onSuccess, FStoreModuleFailResponse onFail) {
            vector<string> cpp_ids;
			for (const auto& ids_item : ids) {
				string cpp_ids_item;
				cpp_ids_item = string(TCHAR_TO_UTF8(*ids_item));
				cpp_ids.push_back(cpp_ids_item);
			}
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void GetLootBoxesByAppIdAsync(
        const FString& appId,
        int32 limit,
        const FString& startAfter,
        FStoreModuleGetLootBoxesByAppIdAsyncResponse onSuccess, FStoreModuleFailResponse onFail) {
            string cpp_appId;
            int32_t cpp_limit;
            string cpp_startAfter;
			cpp_appId = string(TCHAR_TO_UTF8(*appId));
			cpp_limit = limit;
			cpp_startAfter = string(TCHAR_TO_UTF8(*startAfter));
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void GetLootBoxesForCurrentAppAsync(
        int32 limit,
        const FString& startAfter,
        FStoreModuleGetLootBoxesForCurrentAppAsyncResponse onSuccess, FStoreModuleFailResponse onFail) {
            int32_t cpp_limit;
            string cpp_startAfter;
			cpp_limit = limit;
			cpp_startAfter = string(TCHAR_TO_UTF8(*startAfter));
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void LootboxIsAvailableAsync(
        const FString& name,
        FStoreModuleLootboxIsAvailableAsyncResponse onSuccess, FStoreModuleFailResponse onFail) {
            string cpp_name;
			cpp_name = string(TCHAR_TO_UTF8(*name));
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void GetAvailableLootBoxItemsCountAsync(
        const FString& name,
        FStoreModuleGetAvailableLootBoxItemsCountAsyncResponse onSuccess, FStoreModuleFailResponse onFail) {
            string cpp_name;
			cpp_name = string(TCHAR_TO_UTF8(*name));
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void OpenLootboxAsync(
        const FString& name,
        FStoreModuleOpenLootboxAsyncResponse onSuccess, FStoreModuleFailResponse onFail) {
            string cpp_name;
			cpp_name = string(TCHAR_TO_UTF8(*name));
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
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void ImportStoreOffersFromCSVAsync(
        const FString& content,
        const FString& delimiter,
        const FBP_CancellationToken& cancellationToken,
        FStoreModuleImportStoreOffersFromCSVAsyncResponse onSuccess, FStoreModuleFailResponse onFail) {
            string cpp_content;
            string cpp_delimiter;
            CancellationToken cpp_cancellationToken;
			cpp_content = string(TCHAR_TO_UTF8(*content));
			cpp_delimiter = string(TCHAR_TO_UTF8(*delimiter));
			FBP_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void GetByTagsAsync(
        const TArray<FString>& tags,
        const FString& appId,
        bool ignoreTimestamp,
        FStoreModuleGetByTagsAsyncResponse onSuccess, FStoreModuleFailResponse onFail) {
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
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void GetByTimestampAsync(
        const FString& appId,
        int64 timestamp,
        FStoreModuleGetByTimestampAsyncResponse onSuccess, FStoreModuleFailResponse onFail) {
            string cpp_appId;
            int64_t cpp_timestamp;
			cpp_appId = string(TCHAR_TO_UTF8(*appId));
			cpp_timestamp = timestamp;
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void GetByAppIdsAsync(
        const TArray<FString>& appIds,
        int32 limit,
        const FString& startAfter,
        bool ignoreTimestamp,
        FStoreModuleGetByAppIdsAsyncResponse onSuccess, FStoreModuleFailResponse onFail) {
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
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void GetForCurrentAppAsync(
        int32 limit,
        const FString& startAfter,
        bool ignoreTimestamp,
        FStoreModuleGetForCurrentAppAsyncResponse onSuccess, FStoreModuleFailResponse onFail) {
            int32_t cpp_limit;
            string cpp_startAfter;
            bool cpp_ignoreTimestamp;
			cpp_limit = limit;
			cpp_startAfter = string(TCHAR_TO_UTF8(*startAfter));
			cpp_ignoreTimestamp = ignoreTimestamp;
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void GetWithVirtualItemsDataForCurrentAppAsync(
        int32 limit,
        const FString& startAfter,
        bool ignoreTimestamp,
        FStoreModuleGetWithVirtualItemsDataForCurrentAppAsyncResponse onSuccess, FStoreModuleFailResponse onFail) {
            int32_t cpp_limit;
            string cpp_startAfter;
            bool cpp_ignoreTimestamp;
			cpp_limit = limit;
			cpp_startAfter = string(TCHAR_TO_UTF8(*startAfter));
			cpp_ignoreTimestamp = ignoreTimestamp;
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void GetWithVirtualItemsDataByAppIdsAsync(
        const TArray<FString>& appIds,
        int32 limit,
        const FString& startAfter,
        bool ignoreTimestamp,
        FStoreModuleGetWithVirtualItemsDataByAppIdsAsyncResponse onSuccess, FStoreModuleFailResponse onFail) {
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
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void GetByIdsAsync(
        const TArray<FString>& ids,
        FStoreModuleGetByIdsAsyncResponse onSuccess, FStoreModuleFailResponse onFail) {
            vector<string> cpp_ids;
			for (const auto& ids_item : ids) {
				string cpp_ids_item;
				cpp_ids_item = string(TCHAR_TO_UTF8(*ids_item));
				cpp_ids.push_back(cpp_ids_item);
			}
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void GetTagsAsync(
        const FString& offerId,
        FStoreModuleGetTagsAsyncResponse onSuccess, FStoreModuleFailResponse onFail) {
            string cpp_offerId;
			cpp_offerId = string(TCHAR_TO_UTF8(*offerId));
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void SetTagsAsync(
        const FString& offerId,
        const TArray<FString>& tags,
        const FString& appId,
        FStoreModuleSetTagsAsyncResponse onSuccess, FStoreModuleFailResponse onFail) {
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
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void SetNameAsync(
        const FString& offerId,
        const FString& name,
        FStoreModuleSetNameAsyncResponse onSuccess, FStoreModuleFailResponse onFail) {
            string cpp_offerId;
            string cpp_name;
			cpp_offerId = string(TCHAR_TO_UTF8(*offerId));
			cpp_name = string(TCHAR_TO_UTF8(*name));
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void SetDescriptionAsync(
        const FString& offerId,
        const FString& description,
        FStoreModuleSetDescriptionAsyncResponse onSuccess, FStoreModuleFailResponse onFail) {
            string cpp_offerId;
            string cpp_description;
			cpp_offerId = string(TCHAR_TO_UTF8(*offerId));
			cpp_description = string(TCHAR_TO_UTF8(*description));
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void SetPricesAsync(
        const FString& offerId,
        const TArray<FBP_PriceInfo>& prices,
        FStoreModuleSetPricesAsyncResponse onSuccess, FStoreModuleFailResponse onFail) {
            string cpp_offerId;
            vector<RGN::Modules::VirtualItems::PriceInfo> cpp_prices;
			cpp_offerId = string(TCHAR_TO_UTF8(*offerId));
			for (const auto& prices_item : prices) {
				RGN::Modules::VirtualItems::PriceInfo cpp_prices_item;
				FBP_PriceInfo::ConvertToCoreModel(prices_item, cpp_prices_item);
				cpp_prices.push_back(cpp_prices_item);
			}
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void SetTimeAsync(
        const FString& offerId,
        const FBP_TimeInfo& time,
        FStoreModuleSetTimeAsyncResponse onSuccess, FStoreModuleFailResponse onFail) {
            string cpp_offerId;
            RGN::Modules::Store::TimeInfo cpp_time;
			cpp_offerId = string(TCHAR_TO_UTF8(*offerId));
			FBP_TimeInfo::ConvertToCoreModel(time, cpp_time);
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void SetImageUrlAsync(
        const FString& offerId,
        const FString& imageUrl,
        FStoreModuleSetImageUrlAsyncResponse onSuccess, FStoreModuleFailResponse onFail) {
            string cpp_offerId;
            string cpp_imageUrl;
			cpp_offerId = string(TCHAR_TO_UTF8(*offerId));
			cpp_imageUrl = string(TCHAR_TO_UTF8(*imageUrl));
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void GetPropertiesAsync(
        const FString& storeOfferId,
        FStoreModuleGetPropertiesAsyncResponse onSuccess, FStoreModuleFailResponse onFail) {
            string cpp_storeOfferId;
			cpp_storeOfferId = string(TCHAR_TO_UTF8(*storeOfferId));
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Store")
    static void SetPropertiesAsync(
        const FString& storeOfferId,
        const FString& json,
        FStoreModuleSetPropertiesAsyncResponse onSuccess, FStoreModuleFailResponse onFail) {
            string cpp_storeOfferId;
            string cpp_json;
			cpp_storeOfferId = string(TCHAR_TO_UTF8(*storeOfferId));
			cpp_json = string(TCHAR_TO_UTF8(*json));
            // TODO
    }
};
