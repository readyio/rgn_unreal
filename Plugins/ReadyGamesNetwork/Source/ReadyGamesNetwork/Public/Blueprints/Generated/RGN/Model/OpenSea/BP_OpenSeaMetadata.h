#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Model/OpenSea/OpenSeaMetadata.h"
#include "../../../../../Generated/RGN/Model/OpenSea/OpenSeaAttribute.h"
#include "BP_OpenSeaAttribute.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_OpenSeaMetadata.generated.h"

/**
 * Please review the official OpenSea documentation:
 * https://docs.opensea.io/docs/metadata-standards
 */
USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_OpenSeaMetadata {
    GENERATED_BODY()

    /**
     * Name of the item.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | OpenSea")
    FString name;
    /**
     * A human readable description of the item. Markdown is supported.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | OpenSea")
    FString description;
    /**
     * This is the URL that will appear below the asset's image
     * on OpenSea and will allow users to leave OpenSea and view
     * the item on your site.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | OpenSea")
    FString external_url;
    /**
     * Background color of the item on OpenSea.
     * Must be a six-character hexadecimal without a pre-pended #.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | OpenSea")
    FString background_color;
    /**
     * URL to a multi-media attachment for the item. The file extensions
     * GLTF, GLB, WEBM, MP4, M4V, OGV, and OGG are supported, along with
     * the audio-only extensions MP3, WAV, and OGA.
     * Animation_url also supports HTML pages, allowing you to build rich
     * experiences and interactive NFTs using JavaScript canvas, WebGL, and more.
     * Scripts and relative paths within the HTML page are now supported.
     * However, access to browser extensions is not supported.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | OpenSea")
    FString animation_url;
    /**
     * A URL to a YouTube video.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | OpenSea")
    FString youtube_url;
    /**
     * This is the URL to the image of the item. Can be just about any type
     * of image (including SVGs, which will be cached into PNGs by OpenSea),
     * and can be IPFS URLs or paths. We recommend using a 350 x 350 image.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | OpenSea")
    FString image;
    /**
     * Raw SVG image data, if you want to generate images on the fly (not recommended).
     * Only use this if you're not including the image parameter.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | OpenSea")
    FString image_data;
    /**
     * These are the attributes for the item, which will show up on the OpenSea page for the item.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | OpenSea")
    TArray<FBP_OpenSeaAttribute> attributes;

	static void ConvertToUnrealModel(const RGN::Model::OpenSea::OpenSeaMetadata& source, FBP_OpenSeaMetadata& target) {
        target.name = FString(UTF8_TO_TCHAR(source.name.c_str()));
        target.description = FString(UTF8_TO_TCHAR(source.description.c_str()));
        target.external_url = FString(UTF8_TO_TCHAR(source.external_url.c_str()));
        target.background_color = FString(UTF8_TO_TCHAR(source.background_color.c_str()));
        target.animation_url = FString(UTF8_TO_TCHAR(source.animation_url.c_str()));
        target.youtube_url = FString(UTF8_TO_TCHAR(source.youtube_url.c_str()));
        target.image = FString(UTF8_TO_TCHAR(source.image.c_str()));
        target.image_data = FString(UTF8_TO_TCHAR(source.image_data.c_str()));
        for (const auto& source_attributes_item : source.attributes) {
            FBP_OpenSeaAttribute b_source_attributes_item;
            FBP_OpenSeaAttribute::ConvertToUnrealModel(source_attributes_item, b_source_attributes_item);
            target.attributes.Add(b_source_attributes_item);
        }
	}

	static void ConvertToCoreModel(const FBP_OpenSeaMetadata& source, RGN::Model::OpenSea::OpenSeaMetadata& target) {
        target.name = string(TCHAR_TO_UTF8(*source.name));
        target.description = string(TCHAR_TO_UTF8(*source.description));
        target.external_url = string(TCHAR_TO_UTF8(*source.external_url));
        target.background_color = string(TCHAR_TO_UTF8(*source.background_color));
        target.animation_url = string(TCHAR_TO_UTF8(*source.animation_url));
        target.youtube_url = string(TCHAR_TO_UTF8(*source.youtube_url));
        target.image = string(TCHAR_TO_UTF8(*source.image));
        target.image_data = string(TCHAR_TO_UTF8(*source.image_data));
        for (const auto& source_attributes_item : source.attributes) {
            RGN::Model::OpenSea::OpenSeaAttribute cpp_source_attributes_item;
            FBP_OpenSeaAttribute::ConvertToCoreModel(source_attributes_item, cpp_source_attributes_item);
            target.attributes.push_back(cpp_source_attributes_item);
        }
	}
};
