#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "OpenSeaAttribute.h"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Model { namespace OpenSea {
    /**
     * Please review the official OpenSea documentation:
     * https://docs.opensea.io/docs/metadata-standards
     */
    struct OpenSeaMetadata {
        /**
         * Name of the item.
         */
        string name;
        /**
         * A human readable description of the item. Markdown is supported.
         */
        string description;
        /**
         * This is the URL that will appear below the asset's image
         * on OpenSea and will allow users to leave OpenSea and view
         * the item on your site.
         */
        string external_url;
        /**
         * Background color of the item on OpenSea.
         * Must be a six-character hexadecimal without a pre-pended #.
         */
        string background_color;
        /**
         * URL to a multi-media attachment for the item. The file extensions
         * GLTF, GLB, WEBM, MP4, M4V, OGV, and OGG are supported, along with
         * the audio-only extensions MP3, WAV, and OGA.
         * Animation_url also supports HTML pages, allowing you to build rich
         * experiences and interactive NFTs using JavaScript canvas, WebGL, and more.
         * Scripts and relative paths within the HTML page are now supported.
         * However, access to browser extensions is not supported.
         */
        string animation_url;
        /**
         * A URL to a YouTube video.
         */
        string youtube_url;
        /**
         * This is the URL to the image of the item. Can be just about any type
         * of image (including SVGs, which will be cached into PNGs by OpenSea),
         * and can be IPFS URLs or paths. We recommend using a 350 x 350 image.
         */
        string image;
        /**
         * Raw SVG image data, if you want to generate images on the fly (not recommended).
         * Only use this if you're not including the image parameter.
         */
        string image_data;
        /**
         * These are the attributes for the item, which will show up on the OpenSea page for the item.
         */
        vector<RGN::Model::OpenSea::OpenSeaAttribute> attributes;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(OpenSeaMetadata, name, description, external_url, background_color, animation_url, youtube_url, image, image_data, attributes)
    };
}}}