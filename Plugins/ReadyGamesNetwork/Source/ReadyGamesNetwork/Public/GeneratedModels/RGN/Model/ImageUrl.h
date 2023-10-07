// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../json.hpp"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Model {
struct ImageUrl {
    string source;
    string large;
    string medium;
    string small;
    NLOHMANN_DEFINE_TYPE_INTRUSIVE(ImageUrl, source, large, medium, small)
};
}}