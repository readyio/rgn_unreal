#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../Generated/RGN/Model/ImageUrl.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_ImageUrl.generated.h"

/**
 * Represents a mapping of image URLs to their respective size identifiers.
 * Inherits from a dictionary with string keys and string values.
 */
USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_ImageUrl {
    GENERATED_BODY()

    /**
     * Gets the source size image URL if available; otherwise, gets a placeholder URL.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | ImageUrl")
    FString source;
    /**
     * Gets the large size image URL if available; otherwise, gets a placeholder URL.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | ImageUrl")
    FString large;
    /**
     * Gets the medium size image URL if available; otherwise, gets a placeholder URL.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | ImageUrl")
    FString medium;
    /**
     * Gets the small size image URL if available; otherwise, gets a placeholder URL.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | ImageUrl")
    FString small;

	static void ConvertToUnrealModel(const RGN::Model::ImageUrl& source, FBP_ImageUrl& target) {
        target.source = FString(source.source.c_str());
        target.large = FString(source.large.c_str());
        target.medium = FString(source.medium.c_str());
        target.small = FString(source.small.c_str());
	}

	static void ConvertToCoreModel(const FBP_ImageUrl& source, RGN::Model::ImageUrl& target) {
        target.source = string(TCHAR_TO_UTF8(*source.source));
        target.large = string(TCHAR_TO_UTF8(*source.large));
        target.medium = string(TCHAR_TO_UTF8(*source.medium));
        target.small = string(TCHAR_TO_UTF8(*source.small));
	}
};
