#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "OpenSeaAttribute.h"
#include <string>
#include <vector>
#include <unordered_map>
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

        friend void to_json(nlohmann::json& nlohmann_json_j, const OpenSeaMetadata& nlohmann_json_t) {
            nlohmann_json_j["name"] = nlohmann_json_t.name;
            nlohmann_json_j["description"] = nlohmann_json_t.description;
            nlohmann_json_j["external_url"] = nlohmann_json_t.external_url;
            nlohmann_json_j["background_color"] = nlohmann_json_t.background_color;
            nlohmann_json_j["animation_url"] = nlohmann_json_t.animation_url;
            nlohmann_json_j["youtube_url"] = nlohmann_json_t.youtube_url;
            nlohmann_json_j["image"] = nlohmann_json_t.image;
            nlohmann_json_j["image_data"] = nlohmann_json_t.image_data;
            nlohmann_json_j["attributes"] = nlohmann_json_t.attributes;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, OpenSeaMetadata& nlohmann_json_t) {
            if (nlohmann_json_j.contains("name")) {
                nlohmann_json_j.at("name").get_to(nlohmann_json_t.name);
            }
            if (nlohmann_json_j.contains("description")) {
                nlohmann_json_j.at("description").get_to(nlohmann_json_t.description);
            }
            if (nlohmann_json_j.contains("external_url")) {
                nlohmann_json_j.at("external_url").get_to(nlohmann_json_t.external_url);
            }
            if (nlohmann_json_j.contains("background_color")) {
                nlohmann_json_j.at("background_color").get_to(nlohmann_json_t.background_color);
            }
            if (nlohmann_json_j.contains("animation_url")) {
                nlohmann_json_j.at("animation_url").get_to(nlohmann_json_t.animation_url);
            }
            if (nlohmann_json_j.contains("youtube_url")) {
                nlohmann_json_j.at("youtube_url").get_to(nlohmann_json_t.youtube_url);
            }
            if (nlohmann_json_j.contains("image")) {
                nlohmann_json_j.at("image").get_to(nlohmann_json_t.image);
            }
            if (nlohmann_json_j.contains("image_data")) {
                nlohmann_json_j.at("image_data").get_to(nlohmann_json_t.image_data);
            }
            if (nlohmann_json_j.contains("attributes")) {
                nlohmann_json_j.at("attributes").get_to(nlohmann_json_t.attributes);
            }
        }
    };
}}}