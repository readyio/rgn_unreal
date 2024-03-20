#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Model/OpenSea/OpenSeaAttribute.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_OpenSeaAttribute.generated.h"

/**
 * Represents an attribute for an item on OpenSea, typically a trait associated with a collectible or NFT.
 */
USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_OpenSeaAttribute {
    GENERATED_BODY()

    /**
     * The name of the trait that this attribute represents.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | OpenSea")
    FString trait_type;
    /**
     * The value of the trait. This can be a string, number, or any other type of object.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | OpenSea")
    FString value;
    /**
     * A string specifying how the trait should be displayed. 
     * Could be used to indicate whether the trait is a date, a percentage, etc.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | OpenSea")
    FString display_type;

	static void ConvertToUnrealModel(const RGN::Model::OpenSea::OpenSeaAttribute& source, FBP_OpenSeaAttribute& target) {
        target.trait_type = FString(UTF8_TO_TCHAR(source.trait_type.c_str()));
        target.value = FString(UTF8_TO_TCHAR(source.value.c_str()));
        target.display_type = FString(UTF8_TO_TCHAR(source.display_type.c_str()));
	}

	static void ConvertToCoreModel(const FBP_OpenSeaAttribute& source, RGN::Model::OpenSea::OpenSeaAttribute& target) {
        target.trait_type = string(TCHAR_TO_UTF8(*source.trait_type));
        target.value = string(TCHAR_TO_UTF8(*source.value));
        target.display_type = string(TCHAR_TO_UTF8(*source.display_type));
	}
};
