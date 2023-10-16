#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "../../../../../Generated/RGN/Modules/Currency/Currency.h"
#include "BP_Currency.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_Currency {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Currency")
    TArray<FString> appIds;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Currency")
    FString name;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Currency")
    int32 quantity;

	static void ConvertToUnrealModel(const RGN::Modules::Currency::Currency& source, FBP_Currency& target) {
		for (const auto& source_appIds_item : source.appIds) {
			FString b_source_appIds_item;
			b_source_appIds_item = FString(source_appIds_item.c_str());
			target.appIds.Add(b_source_appIds_item);
		}
		target.name = FString(source.name.c_str());
		target.quantity = source.quantity;
	}

	static void ConvertToCoreModel(const FBP_Currency& source, RGN::Modules::Currency::Currency& target) {
		for (const auto& source_appIds_item : source.appIds) {
			string cpp_source_appIds_item;
			cpp_source_appIds_item = string(TCHAR_TO_UTF8(*source_appIds_item));
			target.appIds.push_back(cpp_source_appIds_item);
		}
		target.name = string(TCHAR_TO_UTF8(*source.name));
		target.quantity = source.quantity;
	}
};
