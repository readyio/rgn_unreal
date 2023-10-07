// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "OpenSeaAttribute.h"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Model { namespace OpenSea {
struct OpenSeaMetadata {
    string name;
    string description;
    string external_url;
    string background_color;
    string animation_url;
    string youtube_url;
    string image;
    string image_data;
    vector<RGN::Model::OpenSea::OpenSeaAttribute> attributes;
    NLOHMANN_DEFINE_TYPE_INTRUSIVE(OpenSeaMetadata, name, description, external_url, background_color, animation_url, youtube_url, image, image_data, attributes)
};
}}}