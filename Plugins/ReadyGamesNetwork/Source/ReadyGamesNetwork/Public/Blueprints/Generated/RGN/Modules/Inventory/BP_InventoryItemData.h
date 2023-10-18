#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_VirtualItemUpgrade.h"
#include "../VirtualItems/BP_Properties.h"
#include "../VirtualItems/BP_VirtualItem.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "../../../../../Generated/RGN/Modules/Inventory/InventoryItemData.h"
#include "BP_InventoryItemData.generated.h"

/**
 * Represents the data structure of an inventory item within the Ready Games Network (RGN).
 */
USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_InventoryItemData {
    GENERATED_BODY()

    /**
     * Unique id of the inventory item
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Inventory")
    FString id;
    /**
     * The Virtual Item id for this inventory item
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Inventory")
    FString virtualItemId;
    /**
     * List of application ids where this item is used
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Inventory")
    TArray<FString> appIds;
    /**
     * List of tags to filter the offers
     * You can place multiple inventory items into one category tag
     * For example in a shooter game: "guns", "rifles"
     * Later in the UI you can get only inventory items for specific tag
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Inventory")
    TArray<FString> tags;
    /**
     * How many items the user have in inventory
     * If the Virtual Item is non stackable, then this value should be
     * always one
     * For stackable Virtual Items it represents the count of Virtual Items
     * in user inventory.
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Inventory")
    int32 quantity;
    /**
     * Current status of inventory item
     * Always confirmed for nonNFT items
     * NFT items after purchase have pending status
     * After blockchain confirmation the item
     * will have confirmed status
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Inventory")
    FString status;
    /**
     * Date and time when the inventory item was created
     * in milliseconds since midnight, January 1, 1970 UTC.
     * Refer to T:RGN.Utility.DateTimeUtility for helper methods.
     * This field is automatically populated by the backend
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Inventory")
    int64 createdAt;
    /**
     * Date and time when the inventory item data was last time updated
     * in milliseconds since midnight, January 1, 1970 UTC.
     * Refer to T:RGN.Utility.DateTimeUtility for helper methods.
     * This field is automatically populated by the backend
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Inventory")
    int64 updatedAt;
    /**
     * The upgrades for non stackable virtual item
     * The user can upgrade the Virtual Items he owns
     * The upgrades can change some of the json of Virtual Items
     * It is possible to have multiple upgrades with different names and values
     * for one item.
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Inventory")
    TArray<FBP_VirtualItemUpgrade> itemUpgrades;
    /**
     * List of inventory item custom json. It is used to store
     * game specific json in json format.
     * For example: you can attach some json like
     * "additiona_description", "in_app_products", "display_animation" for this
     * inventory item
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Inventory")
    TArray<FBP_Properties> properties;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Inventory")
    FBP_VirtualItem virtualItem;

	static void ConvertToUnrealModel(const RGN::Modules::Inventory::InventoryItemData& source, FBP_InventoryItemData& target) {
		target.id = FString(source.id.c_str());
		target.virtualItemId = FString(source.virtualItemId.c_str());
		for (const auto& source_appIds_item : source.appIds) {
			FString b_source_appIds_item;
			b_source_appIds_item = FString(source_appIds_item.c_str());
			target.appIds.Add(b_source_appIds_item);
		}
		for (const auto& source_tags_item : source.tags) {
			FString b_source_tags_item;
			b_source_tags_item = FString(source_tags_item.c_str());
			target.tags.Add(b_source_tags_item);
		}
		target.quantity = source.quantity;
		target.status = FString(source.status.c_str());
		target.createdAt = source.createdAt;
		target.updatedAt = source.updatedAt;
		for (const auto& source_itemUpgrades_item : source.itemUpgrades) {
			FBP_VirtualItemUpgrade b_source_itemUpgrades_item;
			FBP_VirtualItemUpgrade::ConvertToUnrealModel(source_itemUpgrades_item, b_source_itemUpgrades_item);
			target.itemUpgrades.Add(b_source_itemUpgrades_item);
		}
		for (const auto& source_properties_item : source.properties) {
			FBP_Properties b_source_properties_item;
			FBP_Properties::ConvertToUnrealModel(source_properties_item, b_source_properties_item);
			target.properties.Add(b_source_properties_item);
		}
		FBP_VirtualItem::ConvertToUnrealModel(source.virtualItem, target.virtualItem);
	}

	static void ConvertToCoreModel(const FBP_InventoryItemData& source, RGN::Modules::Inventory::InventoryItemData& target) {
		target.id = string(TCHAR_TO_UTF8(*source.id));
		target.virtualItemId = string(TCHAR_TO_UTF8(*source.virtualItemId));
		for (const auto& source_appIds_item : source.appIds) {
			string cpp_source_appIds_item;
			cpp_source_appIds_item = string(TCHAR_TO_UTF8(*source_appIds_item));
			target.appIds.push_back(cpp_source_appIds_item);
		}
		for (const auto& source_tags_item : source.tags) {
			string cpp_source_tags_item;
			cpp_source_tags_item = string(TCHAR_TO_UTF8(*source_tags_item));
			target.tags.push_back(cpp_source_tags_item);
		}
		target.quantity = source.quantity;
		target.status = string(TCHAR_TO_UTF8(*source.status));
		target.createdAt = source.createdAt;
		target.updatedAt = source.updatedAt;
		for (const auto& source_itemUpgrades_item : source.itemUpgrades) {
			RGN::Modules::Inventory::VirtualItemUpgrade cpp_source_itemUpgrades_item;
			FBP_VirtualItemUpgrade::ConvertToCoreModel(source_itemUpgrades_item, cpp_source_itemUpgrades_item);
			target.itemUpgrades.push_back(cpp_source_itemUpgrades_item);
		}
		for (const auto& source_properties_item : source.properties) {
			RGN::Modules::VirtualItems::Properties cpp_source_properties_item;
			FBP_Properties::ConvertToCoreModel(source_properties_item, cpp_source_properties_item);
			target.properties.push_back(cpp_source_properties_item);
		}
		FBP_VirtualItem::ConvertToCoreModel(source.virtualItem, target.virtualItem);
	}
};
