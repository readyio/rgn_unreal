#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Store {
    /**
     * Represents the time information related to an offer in the store.
     * This information can be used for time-limited offers.
     */
    struct TimeInfo {
        /**
         * Indicates whether a start time is specified.
         */
        bool hasStart = false;
        /**
         * The start time. This field is relevant only if F:RGN.Modules.Store.TimeInfo.hasStart is true.
         */
        int64_t start = 0;
        /**
         * Indicates whether an end time is specified.
         */
        bool hasEnd = false;
        /**
         * The end time. This field is relevant only if F:RGN.Modules.Store.TimeInfo.hasEnd is true.
         */
        int64_t end = 0;
        /**
         * Indicates whether an interval is specified.
         */
        bool hasInterval = false;
        /**
         * The interval duration. This field is relevant only if F:RGN.Modules.Store.TimeInfo.hasInterval is true.
         */
        int64_t intervalDuration = 0;
        /**
         * The interval delay. This field is relevant only if F:RGN.Modules.Store.TimeInfo.hasInterval is true.
         */
        int64_t intervalDelay = 0;

        friend void to_json(nlohmann::json& nlohmann_json_j, const TimeInfo& nlohmann_json_t) {
            nlohmann_json_j["hasStart"] = nlohmann_json_t.hasStart;
            nlohmann_json_j["start"] = nlohmann_json_t.start;
            nlohmann_json_j["hasEnd"] = nlohmann_json_t.hasEnd;
            nlohmann_json_j["end"] = nlohmann_json_t.end;
            nlohmann_json_j["hasInterval"] = nlohmann_json_t.hasInterval;
            nlohmann_json_j["intervalDuration"] = nlohmann_json_t.intervalDuration;
            nlohmann_json_j["intervalDelay"] = nlohmann_json_t.intervalDelay;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, TimeInfo& nlohmann_json_t) {
            if (nlohmann_json_j.contains("hasStart")) {
                nlohmann_json_j.at("hasStart").get_to(nlohmann_json_t.hasStart);
            }
            if (nlohmann_json_j.contains("start")) {
                nlohmann_json_j.at("start").get_to(nlohmann_json_t.start);
            }
            if (nlohmann_json_j.contains("hasEnd")) {
                nlohmann_json_j.at("hasEnd").get_to(nlohmann_json_t.hasEnd);
            }
            if (nlohmann_json_j.contains("end")) {
                nlohmann_json_j.at("end").get_to(nlohmann_json_t.end);
            }
            if (nlohmann_json_j.contains("hasInterval")) {
                nlohmann_json_j.at("hasInterval").get_to(nlohmann_json_t.hasInterval);
            }
            if (nlohmann_json_j.contains("intervalDuration")) {
                nlohmann_json_j.at("intervalDuration").get_to(nlohmann_json_t.intervalDuration);
            }
            if (nlohmann_json_j.contains("intervalDelay")) {
                nlohmann_json_j.at("intervalDelay").get_to(nlohmann_json_t.intervalDelay);
            }
        }
    };
}}}