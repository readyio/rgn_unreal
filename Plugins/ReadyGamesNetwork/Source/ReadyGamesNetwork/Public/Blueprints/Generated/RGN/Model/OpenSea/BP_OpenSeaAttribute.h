#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Model/OpenSea/OpenSeaAttribute.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_OpenSeaAttribute.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_OpenSeaAttribute {
    GENERATED_BODY()

    /**
     * Name of the trait
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | OpenSea")
    FString trait_type;
    /**
     * Value of the trait
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | OpenSea")
    FString value;
    /**
     * Indicating how you would like it to be displayed
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | OpenSea")
    FString display_type;

	static void ConvertToUnrealModel(const RGN::Model::OpenSea::OpenSeaAttribute& source, FBP_OpenSeaAttribute& target) {
		target.trait_type = FString(source.trait_type.c_str());
		target.value = FString(source.value.c_str());
		target.display_type = FString(source.display_type.c_str());
	}

	static void ConvertToCoreModel(const FBP_OpenSeaAttribute& source, RGN::Model::OpenSea::OpenSeaAttribute& target) {
		target.trait_type = string(TCHAR_TO_UTF8(*source.trait_type));
		target.value = string(TCHAR_TO_UTF8(*source.value));
		target.display_type = string(TCHAR_TO_UTF8(*source.display_type));
	}
};
