#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "../../../../../Generated/RGN/Modules/Inventory/InventoryModule.h"
#include "../../../../../Generated/RGN/Modules/VirtualItems/Properties.h"
#include "../VirtualItems/BP_Properties.h"
#include "../../../../../Generated/RGN/Modules/Inventory/AddToInventoryResponseData.h"
#include "BP_AddToInventoryResponseData.h"
#include "../../../../../Generated/RGN/Modules/Inventory/InventoryItemData.h"
#include "BP_InventoryItemData.h"
#include "../../../../../Generated/RGN/Modules/Inventory/AddVirtualItemToUserInventoryRequestData.h"
#include "BP_AddVirtualItemToUserInventoryRequestData.h"
#include "../../../../../Generated/RGN/Modules/Inventory/RemoveByVirtualItemIdResponseData.h"
#include "BP_RemoveByVirtualItemIdResponseData.h"
#include "../../../../../Generated/RGN/Modules/Inventory/RemoveByOwnedIdResponseData.h"
#include "BP_RemoveByOwnedIdResponseData.h"
#include "../../../../../Generated/RGN/Modules/Inventory/UpgradesResponseData.h"
#include "BP_UpgradesResponseData.h"
#include "../../../../../Generated/RGN/Modules/Currency/Currency.h"
#include "../Currency/BP_Currency.h"
#include "../../../../../Generated/RGN/Modules/Inventory/VirtualItemUpgrade.h"
#include "BP_VirtualItemUpgrade.h"
#include "../../../../../Generated/RGN/Modules/Inventory/InventoryItemsWithVirtualItemsData.h"
#include "BP_InventoryItemsWithVirtualItemsData.h"
#include <vector>
#include <unordered_map>
#include <string>
#include <functional>
#include "BP_InventoryModule.generated.h"

using namespace std;

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
    /**
     * Asynchronously adds a specified quantity of a virtual item to the current logged in user's inventory.
     * @param virtualItemId - The unique identifier of the virtual item to be added to the inventory.
     * @param quantity - The quantity of the virtual item to be added. The default value is 1.
     * @param properties - Optional additional properties associated with the item. The default is null.
     * @return A Task that represents the asynchronous operation.
     * The task result contains an T:RGN.Modules.Inventory.AddToInventoryResponseData object which holds the response data of the operation.
     * @throw: Thrown when the user is not logged in.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Inventory")
    static void AddToInventoryAsync1(
        const FString& virtualItemId,
        int32 quantity,
        const FBP_Properties& properties,
        FInventoryModuleAddToInventoryAsyncResponse onSuccess, FInventoryModuleFailResponse onFail) {
            string cpp_virtualItemId;
            int32_t cpp_quantity;
            RGN::Modules::VirtualItems::Properties cpp_properties;
			cpp_virtualItemId = string(TCHAR_TO_UTF8(*virtualItemId));
			cpp_quantity = quantity;
			FBP_Properties::ConvertToCoreModel(properties, cpp_properties);
            RGN::Modules::Inventory::InventoryModule::AddToInventoryAsync(
                cpp_virtualItemId,
                cpp_quantity,
                cpp_properties,
                [onSuccess](RGN::Modules::Inventory::AddToInventoryResponseData response) {
                    FBP_AddToInventoryResponseData bpResponse;
					FBP_AddToInventoryResponseData::ConvertToUnrealModel(response, bpResponse);
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                }
            );
    }
    /**
     * Asynchronously adds a specified quantity of a virtual item to the inventory for a specified user.
     * @param userId - The unique identifier of the user whose inventory will be updated.
     * @param virtualItemId - The unique identifier of the virtual item to be added to the user's inventory.
     * @param quantity - The quantity of the virtual item to be added. The default value is 1.
     * @param properties - Optional additional properties associated with the item. The default is null.
     * @return A Task that represents the asynchronous operation.
     * The task result contains an T:RGN.Modules.Inventory.AddToInventoryResponseData object which holds the response data of the operation.
     * @throw: Thrown when the ownedItemId is null or empty.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Inventory")
    static void AddToInventoryAsync2(
        const FString& userId,
        const FString& virtualItemId,
        int32 quantity,
        const FBP_Properties& properties,
        FInventoryModuleAddToInventoryAsyncResponse onSuccess, FInventoryModuleFailResponse onFail) {
            string cpp_userId;
            string cpp_virtualItemId;
            int32_t cpp_quantity;
            RGN::Modules::VirtualItems::Properties cpp_properties;
			cpp_userId = string(TCHAR_TO_UTF8(*userId));
			cpp_virtualItemId = string(TCHAR_TO_UTF8(*virtualItemId));
			cpp_quantity = quantity;
			FBP_Properties::ConvertToCoreModel(properties, cpp_properties);
            RGN::Modules::Inventory::InventoryModule::AddToInventoryAsync(
                cpp_userId,
                cpp_virtualItemId,
                cpp_quantity,
                cpp_properties,
                [onSuccess](RGN::Modules::Inventory::AddToInventoryResponseData response) {
                    FBP_AddToInventoryResponseData bpResponse;
					FBP_AddToInventoryResponseData::ConvertToUnrealModel(response, bpResponse);
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                }
            );
    }
    /**
     * Asynchronously adds a specified inventory item to the inventory for a specified user.
     * @param userId - The unique identifier of the user whose inventory will be updated.
     * @param inventoryData - The data of the inventory item to be added to the user's inventory. Includes item's unique identifier, quantity and optional additional properties.
     * @return A Task that represents the asynchronous operation.
     * The task result contains an T:RGN.Modules.Inventory.AddToInventoryResponseData object which holds the response data of the operation.
     * @throw: Thrown when the userId or inventoryData.ownedItemId is null or empty.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Inventory")
    static void AddToInventoryAsync3(
        const FString& userId,
        const FBP_InventoryItemData& inventoryData,
        FInventoryModuleAddToInventoryAsyncResponse onSuccess, FInventoryModuleFailResponse onFail) {
            string cpp_userId;
            RGN::Modules::Inventory::InventoryItemData cpp_inventoryData;
			cpp_userId = string(TCHAR_TO_UTF8(*userId));
			FBP_InventoryItemData::ConvertToCoreModel(inventoryData, cpp_inventoryData);
            RGN::Modules::Inventory::InventoryModule::AddToInventoryAsync(
                cpp_userId,
                cpp_inventoryData,
                [onSuccess](RGN::Modules::Inventory::AddToInventoryResponseData response) {
                    FBP_AddToInventoryResponseData bpResponse;
					FBP_AddToInventoryResponseData::ConvertToUnrealModel(response, bpResponse);
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                }
            );
    }
    /**
     * Asynchronously removes a specified quantity of a virtual item from a user's inventory by its unique identifier.
     * @param userId - The unique identifier of the user whose inventory to modify.
     * @param virtualItemId - The unique identifier of the virtual item to remove.
     * @param quantity - The quantity of the virtual item to remove. Must be a positive number.
     * @return A task that represents the asynchronous operation.
     * The task result contains a T:RGN.Modules.Inventory.RemoveByVirtualItemIdResponseData object which holds the server's response data.
     * @throw: Thrown when virtualItemId is null or empty.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Inventory")
    static void RemoveByVirtualItemIdAsync(
        const FString& userId,
        const FString& virtualItemId,
        int32 quantity,
        FInventoryModuleRemoveByVirtualItemIdAsyncResponse onSuccess, FInventoryModuleFailResponse onFail) {
            string cpp_userId;
            string cpp_virtualItemId;
            int32_t cpp_quantity;
			cpp_userId = string(TCHAR_TO_UTF8(*userId));
			cpp_virtualItemId = string(TCHAR_TO_UTF8(*virtualItemId));
			cpp_quantity = quantity;
            RGN::Modules::Inventory::InventoryModule::RemoveByVirtualItemIdAsync(
                cpp_userId,
                cpp_virtualItemId,
                cpp_quantity,
                [onSuccess](RGN::Modules::Inventory::RemoveByVirtualItemIdResponseData response) {
                    FBP_RemoveByVirtualItemIdResponseData bpResponse;
					FBP_RemoveByVirtualItemIdResponseData::ConvertToUnrealModel(response, bpResponse);
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                }
            );
    }
    /**
     * Asynchronously removes a specified quantity of a virtual item from a user's inventory by its owned item identifier.
     * @param userId - The unique identifier of the user whose inventory to modify.
     * @param ownedItemId - The unique identifier of the owned item to remove.
     * @param quantity - The quantity of the owned item to remove. Must be a positive number. Default is 1.
     * @return A task that represents the asynchronous operation.
     * The task result contains a T:RGN.Modules.Inventory.RemoveByOwnedIdResponseData object which holds the server's response data.
     * @throw: Thrown when ownedItemId is null or empty.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Inventory")
    static void RemoveByInventoryItemIdAsync(
        const FString& userId,
        const FString& ownedItemId,
        int32 quantity,
        FInventoryModuleRemoveByInventoryItemIdAsyncResponse onSuccess, FInventoryModuleFailResponse onFail) {
            string cpp_userId;
            string cpp_ownedItemId;
            int32_t cpp_quantity;
			cpp_userId = string(TCHAR_TO_UTF8(*userId));
			cpp_ownedItemId = string(TCHAR_TO_UTF8(*ownedItemId));
			cpp_quantity = quantity;
            RGN::Modules::Inventory::InventoryModule::RemoveByInventoryItemIdAsync(
                cpp_userId,
                cpp_ownedItemId,
                cpp_quantity,
                [onSuccess](RGN::Modules::Inventory::RemoveByOwnedIdResponseData response) {
                    FBP_RemoveByOwnedIdResponseData bpResponse;
					FBP_RemoveByOwnedIdResponseData::ConvertToUnrealModel(response, bpResponse);
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                }
            );
    }
    /**
     * Returns json string or throws an exception if there are no json for virtual item
     * @return Returns json as string
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Inventory")
    static void GetPropertiesAsync(
        const FString& ownedItemId,
        FInventoryModuleGetPropertiesAsyncResponse onSuccess, FInventoryModuleFailResponse onFail) {
            string cpp_ownedItemId;
			cpp_ownedItemId = string(TCHAR_TO_UTF8(*ownedItemId));
            RGN::Modules::Inventory::InventoryModule::GetPropertiesAsync(
                cpp_ownedItemId,
                [onSuccess](string response) {
                    FString bpResponse;
					bpResponse = FString(response.c_str());
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                }
            );
    }
    /**
     * Set json on a given ownedItemId.
     * @return Returns json as string
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Inventory")
    static void SetPropertiesAsync(
        const FString& ownedItemId,
        const FString& json,
        FInventoryModuleSetPropertiesAsyncResponse onSuccess, FInventoryModuleFailResponse onFail) {
            string cpp_ownedItemId;
            string cpp_json;
			cpp_ownedItemId = string(TCHAR_TO_UTF8(*ownedItemId));
			cpp_json = string(TCHAR_TO_UTF8(*json));
            RGN::Modules::Inventory::InventoryModule::SetPropertiesAsync(
                cpp_ownedItemId,
                cpp_json,
                [onSuccess](string response) {
                    FString bpResponse;
					bpResponse = FString(response.c_str());
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                }
            );
    }
    /**
     * Get user owned item upgrades, returns all upgrades for all owned items for virtual item ownedItemId
     * @param ownedItemId - The ownedItemId of the virtual item to search in inventory for
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Inventory")
    static void GetUpgradesAsync(
        const FString& ownedItemId,
        FInventoryModuleGetUpgradesAsyncResponse onSuccess, FInventoryModuleFailResponse onFail) {
            string cpp_ownedItemId;
			cpp_ownedItemId = string(TCHAR_TO_UTF8(*ownedItemId));
            RGN::Modules::Inventory::InventoryModule::GetUpgradesAsync(
                cpp_ownedItemId,
                [onSuccess](vector<RGN::Modules::Inventory::UpgradesResponseData> response) {
                    TArray<FBP_UpgradesResponseData> bpResponse;
					for (const auto& response_item : response) {
						FBP_UpgradesResponseData b_response_item;
						FBP_UpgradesResponseData::ConvertToUnrealModel(response_item, b_response_item);
						bpResponse.Add(b_response_item);
					}
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                }
            );
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Inventory")
    static void UpgradeAsync(
        const FString& ownedItemId,
        int32 newUpgradeLevel,
        const FString& upgradeId,
        const TArray<FBP_Currency>& upgradePrice,
        FInventoryModuleUpgradeAsyncResponse onSuccess, FInventoryModuleFailResponse onFail) {
            string cpp_ownedItemId;
            int32_t cpp_newUpgradeLevel;
            string cpp_upgradeId;
            vector<RGN::Modules::Currency::Currency> cpp_upgradePrice;
			cpp_ownedItemId = string(TCHAR_TO_UTF8(*ownedItemId));
			cpp_newUpgradeLevel = newUpgradeLevel;
			cpp_upgradeId = string(TCHAR_TO_UTF8(*upgradeId));
			for (const auto& upgradePrice_item : upgradePrice) {
				RGN::Modules::Currency::Currency cpp_upgradePrice_item;
				FBP_Currency::ConvertToCoreModel(upgradePrice_item, cpp_upgradePrice_item);
				cpp_upgradePrice.push_back(cpp_upgradePrice_item);
			}
            RGN::Modules::Inventory::InventoryModule::UpgradeAsync(
                cpp_ownedItemId,
                cpp_newUpgradeLevel,
                cpp_upgradeId,
                cpp_upgradePrice,
                [onSuccess](vector<RGN::Modules::Inventory::VirtualItemUpgrade> response) {
                    TArray<FBP_VirtualItemUpgrade> bpResponse;
					for (const auto& response_item : response) {
						FBP_VirtualItemUpgrade b_response_item;
						FBP_VirtualItemUpgrade::ConvertToUnrealModel(response_item, b_response_item);
						bpResponse.Add(b_response_item);
					}
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                }
            );
    }
    /**
     * Get single owned virtual item inventory data by ownedItemId
     * @param ownedItemId - The id of the owned item in users inventory
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Inventory")
    static void GetByIdAsync(
        const FString& ownedItemId,
        FInventoryModuleGetByIdAsyncResponse onSuccess, FInventoryModuleFailResponse onFail) {
            string cpp_ownedItemId;
			cpp_ownedItemId = string(TCHAR_TO_UTF8(*ownedItemId));
            RGN::Modules::Inventory::InventoryModule::GetByIdAsync(
                cpp_ownedItemId,
                [onSuccess](RGN::Modules::Inventory::InventoryItemData response) {
                    FBP_InventoryItemData bpResponse;
					FBP_InventoryItemData::ConvertToUnrealModel(response, bpResponse);
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                }
            );
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Inventory")
    static void GetByIdsAsync(
        const TArray<FString>& ownedItemIds,
        FInventoryModuleGetByIdsAsyncResponse onSuccess, FInventoryModuleFailResponse onFail) {
            vector<string> cpp_ownedItemIds;
			for (const auto& ownedItemIds_item : ownedItemIds) {
				string cpp_ownedItemIds_item;
				cpp_ownedItemIds_item = string(TCHAR_TO_UTF8(*ownedItemIds_item));
				cpp_ownedItemIds.push_back(cpp_ownedItemIds_item);
			}
            RGN::Modules::Inventory::InventoryModule::GetByIdsAsync(
                cpp_ownedItemIds,
                [onSuccess](vector<RGN::Modules::Inventory::InventoryItemData> response) {
                    TArray<FBP_InventoryItemData> bpResponse;
					for (const auto& response_item : response) {
						FBP_InventoryItemData b_response_item;
						FBP_InventoryItemData::ConvertToUnrealModel(response_item, b_response_item);
						bpResponse.Add(b_response_item);
					}
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                }
            );
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Inventory")
    static void GetByVirtualItemIdsAsync(
        const TArray<FString>& virtualItemIds,
        FInventoryModuleGetByVirtualItemIdsAsyncResponse onSuccess, FInventoryModuleFailResponse onFail) {
            vector<string> cpp_virtualItemIds;
			for (const auto& virtualItemIds_item : virtualItemIds) {
				string cpp_virtualItemIds_item;
				cpp_virtualItemIds_item = string(TCHAR_TO_UTF8(*virtualItemIds_item));
				cpp_virtualItemIds.push_back(cpp_virtualItemIds_item);
			}
            RGN::Modules::Inventory::InventoryModule::GetByVirtualItemIdsAsync(
                cpp_virtualItemIds,
                [onSuccess](vector<RGN::Modules::Inventory::InventoryItemData> response) {
                    TArray<FBP_InventoryItemData> bpResponse;
					for (const auto& response_item : response) {
						FBP_InventoryItemData b_response_item;
						FBP_InventoryItemData::ConvertToUnrealModel(response_item, b_response_item);
						bpResponse.Add(b_response_item);
					}
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                }
            );
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Inventory")
    static void GetAllForCurrentAppAsync(
        FInventoryModuleGetAllForCurrentAppAsyncResponse onSuccess, FInventoryModuleFailResponse onFail) {
            RGN::Modules::Inventory::InventoryModule::GetAllForCurrentAppAsync(
                [onSuccess](vector<RGN::Modules::Inventory::InventoryItemData> response) {
                    TArray<FBP_InventoryItemData> bpResponse;
					for (const auto& response_item : response) {
						FBP_InventoryItemData b_response_item;
						FBP_InventoryItemData::ConvertToUnrealModel(response_item, b_response_item);
						bpResponse.Add(b_response_item);
					}
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                }
            );
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Inventory")
    static void GetByAppIdsAsync(
        const TArray<FString>& appIds,
        FInventoryModuleGetByAppIdsAsyncResponse onSuccess, FInventoryModuleFailResponse onFail) {
            vector<string> cpp_appIds;
			for (const auto& appIds_item : appIds) {
				string cpp_appIds_item;
				cpp_appIds_item = string(TCHAR_TO_UTF8(*appIds_item));
				cpp_appIds.push_back(cpp_appIds_item);
			}
            RGN::Modules::Inventory::InventoryModule::GetByAppIdsAsync(
                cpp_appIds,
                [onSuccess](vector<RGN::Modules::Inventory::InventoryItemData> response) {
                    TArray<FBP_InventoryItemData> bpResponse;
					for (const auto& response_item : response) {
						FBP_InventoryItemData b_response_item;
						FBP_InventoryItemData::ConvertToUnrealModel(response_item, b_response_item);
						bpResponse.Add(b_response_item);
					}
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                }
            );
    }
    /**
     * Get multiple owned virtual items inventory data for current app with the Virtual Item data included
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Inventory")
    static void GetWithVirtualItemsDataForCurrentAppAsync(
        const FString& startAfter,
        int32 limit,
        FInventoryModuleGetWithVirtualItemsDataForCurrentAppAsyncResponse onSuccess, FInventoryModuleFailResponse onFail) {
            string cpp_startAfter;
            int32_t cpp_limit;
			cpp_startAfter = string(TCHAR_TO_UTF8(*startAfter));
			cpp_limit = limit;
            RGN::Modules::Inventory::InventoryModule::GetWithVirtualItemsDataForCurrentAppAsync(
                cpp_startAfter,
                cpp_limit,
                [onSuccess](vector<RGN::Modules::Inventory::InventoryItemData> response) {
                    TArray<FBP_InventoryItemData> bpResponse;
					for (const auto& response_item : response) {
						FBP_InventoryItemData b_response_item;
						FBP_InventoryItemData::ConvertToUnrealModel(response_item, b_response_item);
						bpResponse.Add(b_response_item);
					}
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                }
            );
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Inventory")
    static void GetWithVirtualItemsDataByAppIdsAsync(
        const TArray<FString>& appIds,
        const FString& startAfter,
        int32 limit,
        FInventoryModuleGetWithVirtualItemsDataByAppIdsAsyncResponse onSuccess, FInventoryModuleFailResponse onFail) {
            vector<string> cpp_appIds;
            string cpp_startAfter;
            int32_t cpp_limit;
			for (const auto& appIds_item : appIds) {
				string cpp_appIds_item;
				cpp_appIds_item = string(TCHAR_TO_UTF8(*appIds_item));
				cpp_appIds.push_back(cpp_appIds_item);
			}
			cpp_startAfter = string(TCHAR_TO_UTF8(*startAfter));
			cpp_limit = limit;
            RGN::Modules::Inventory::InventoryModule::GetWithVirtualItemsDataByAppIdsAsync(
                cpp_appIds,
                cpp_startAfter,
                cpp_limit,
                [onSuccess](vector<RGN::Modules::Inventory::InventoryItemData> response) {
                    TArray<FBP_InventoryItemData> bpResponse;
					for (const auto& response_item : response) {
						FBP_InventoryItemData b_response_item;
						FBP_InventoryItemData::ConvertToUnrealModel(response_item, b_response_item);
						bpResponse.Add(b_response_item);
					}
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                }
            );
    }
    /**
     * Parses a JSON string representation of an T:RGN.Modules.Inventory.InventoryItemData object.
     * @param json - The JSON string representation of an T:RGN.Modules.Inventory.InventoryItemData object.
     * @return An T:RGN.Modules.Inventory.InventoryItemData object represented by the JSON string. 
     * Returns null if the JSON string does not represent a valid T:RGN.Modules.Inventory.InventoryItemData object.
     * @throw: Thrown when json is null or empty.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Inventory")
    static void ParseInventoryItemData(
        const FString& json,
        FInventoryModuleParseInventoryItemDataResponse onSuccess, FInventoryModuleFailResponse onFail) {
            string cpp_json;
			cpp_json = string(TCHAR_TO_UTF8(*json));
            RGN::Modules::Inventory::InventoryModule::ParseInventoryItemData(
                cpp_json
            );
    }
    /**
     * Parses a JSON string representation of a list of T:RGN.Modules.Inventory.InventoryItemData objects.
     * @param json - The JSON string representation of a list of T:RGN.Modules.Inventory.InventoryItemData objects.
     * @return A list of T:RGN.Modules.Inventory.InventoryItemData objects represented by the JSON string.
     * Returns null if the JSON string does not represent a valid list of T:RGN.Modules.Inventory.InventoryItemData objects.
     * @throw: Thrown when json is null or empty.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Inventory")
    static void ParseInventoryItemsData(
        const FString& json,
        FInventoryModuleParseInventoryItemsDataResponse onSuccess, FInventoryModuleFailResponse onFail) {
            string cpp_json;
			cpp_json = string(TCHAR_TO_UTF8(*json));
            RGN::Modules::Inventory::InventoryModule::ParseInventoryItemsData(
                cpp_json
            );
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Inventory")
    static void GetByTagsAsync(
        const TArray<FString>& tags,
        const FString& appId,
        FInventoryModuleGetByTagsAsyncResponse onSuccess, FInventoryModuleFailResponse onFail) {
            vector<string> cpp_tags;
            string cpp_appId;
			for (const auto& tags_item : tags) {
				string cpp_tags_item;
				cpp_tags_item = string(TCHAR_TO_UTF8(*tags_item));
				cpp_tags.push_back(cpp_tags_item);
			}
			cpp_appId = string(TCHAR_TO_UTF8(*appId));
            RGN::Modules::Inventory::InventoryModule::GetByTagsAsync(
                cpp_tags,
                cpp_appId,
                [onSuccess](vector<RGN::Modules::Inventory::InventoryItemData> response) {
                    TArray<FBP_InventoryItemData> bpResponse;
					for (const auto& response_item : response) {
						FBP_InventoryItemData b_response_item;
						FBP_InventoryItemData::ConvertToUnrealModel(response_item, b_response_item);
						bpResponse.Add(b_response_item);
					}
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                }
            );
    }
    /**
     * Asynchronously retrieves the tags of an owned item in the inventory by its identifier for current logged in user
     * @param ownedItemId - The unique identifier of the owned item for which to retrieve tags.
     * @return A task that represents the asynchronous operation.
     * The task result contains a list of tags associated with the owned item.
     * @throw: Thrown when ownedItemId is null or empty.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Inventory")
    static void GetTagsAsync(
        const FString& ownedItemId,
        FInventoryModuleGetTagsAsyncResponse onSuccess, FInventoryModuleFailResponse onFail) {
            string cpp_ownedItemId;
			cpp_ownedItemId = string(TCHAR_TO_UTF8(*ownedItemId));
            RGN::Modules::Inventory::InventoryModule::GetTagsAsync(
                cpp_ownedItemId,
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
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Inventory")
    static void SetTagsAsync(
        const FString& ownedItemId,
        const TArray<FString>& tags,
        const FString& appId,
        FInventoryModuleSetTagsAsyncResponse onSuccess, FInventoryModuleFailResponse onFail) {
            string cpp_ownedItemId;
            vector<string> cpp_tags;
            string cpp_appId;
			cpp_ownedItemId = string(TCHAR_TO_UTF8(*ownedItemId));
			for (const auto& tags_item : tags) {
				string cpp_tags_item;
				cpp_tags_item = string(TCHAR_TO_UTF8(*tags_item));
				cpp_tags.push_back(cpp_tags_item);
			}
			cpp_appId = string(TCHAR_TO_UTF8(*appId));
            RGN::Modules::Inventory::InventoryModule::SetTagsAsync(
                cpp_ownedItemId,
                cpp_tags,
                cpp_appId,
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
