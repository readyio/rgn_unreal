#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../json.hpp"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Model {
    /**
     * Represents the time information.
     * This information can be used for time-limited entities.
     */
    struct TimeInfo {
        /**
         * Indicates whether a start time is specified.
         */
        bool hasStart = false;
        /**
         * The start time. This field is relevant only if F:RGN.Model.TimeInfo.hasStart is true.
         */
        int64_t start = 0;
        /**
         * Indicates whether an end time is specified.
         */
        bool hasEnd = false;
        /**
         * The end time. This field is relevant only if F:RGN.Model.TimeInfo.hasEnd is true.
         */
        int64_t end = 0;
        /**
         * Indicates whether an interval is specified.
         */
        bool hasInterval = false;
        /**
         * The interval duration. This field is relevant only if F:RGN.Model.TimeInfo.hasInterval is true.
         */
        int64_t intervalDuration = 0;
        /**
         * The interval delay. This field is relevant only if F:RGN.Model.TimeInfo.hasInterval is true.
         */
        int64_t intervalDelay = 0;
        /**
         * Indicates whether a promo is specified.
         */
        bool hasPromo = false;
        /**
         * The promo duration in milliseconds before the start time.
         * This field is relevant only if F:RGN.Model.TimeInfo.hasPromo and F:RGN.Model.TimeInfo.hasStart are true.
         */
        int64_t promo = 0;
        /**
         * Indicates whether a grace is specified.
         */
        bool hasGrace = false;
        /**
         * The grace duration in milliseconds after the end time.
         * This field is relevant only if F:RGN.Model.TimeInfo.hasGrace and F:RGN.Model.TimeInfo.hasEnd are true.
         */
        int64_t grace = 0;

        friend void to_json(nlohmann::json& nlohmann_json_j, const TimeInfo& nlohmann_json_t) {
            nlohmann_json_j["hasStart"] = nlohmann_json_t.hasStart;
            nlohmann_json_j["start"] = nlohmann_json_t.start;
            nlohmann_json_j["hasEnd"] = nlohmann_json_t.hasEnd;
            nlohmann_json_j["end"] = nlohmann_json_t.end;
            nlohmann_json_j["hasInterval"] = nlohmann_json_t.hasInterval;
            nlohmann_json_j["intervalDuration"] = nlohmann_json_t.intervalDuration;
            nlohmann_json_j["intervalDelay"] = nlohmann_json_t.intervalDelay;
            nlohmann_json_j["hasPromo"] = nlohmann_json_t.hasPromo;
            nlohmann_json_j["promo"] = nlohmann_json_t.promo;
            nlohmann_json_j["hasGrace"] = nlohmann_json_t.hasGrace;
            nlohmann_json_j["grace"] = nlohmann_json_t.grace;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, TimeInfo& nlohmann_json_t) {
            if (nlohmann_json_j.contains("hasStart")) {
                auto json_hasStart = nlohmann_json_j.at("hasStart");
                if (!json_hasStart.is_null() && json_hasStart.is_boolean()) {
                    json_hasStart.get_to(nlohmann_json_t.hasStart);
                }
            }
            if (nlohmann_json_j.contains("start")) {
                auto json_start = nlohmann_json_j.at("start");
                if (!json_start.is_null() && json_start.is_number()) {
                    json_start.get_to(nlohmann_json_t.start);
                }
            }
            if (nlohmann_json_j.contains("hasEnd")) {
                auto json_hasEnd = nlohmann_json_j.at("hasEnd");
                if (!json_hasEnd.is_null() && json_hasEnd.is_boolean()) {
                    json_hasEnd.get_to(nlohmann_json_t.hasEnd);
                }
            }
            if (nlohmann_json_j.contains("end")) {
                auto json_end = nlohmann_json_j.at("end");
                if (!json_end.is_null() && json_end.is_number()) {
                    json_end.get_to(nlohmann_json_t.end);
                }
            }
            if (nlohmann_json_j.contains("hasInterval")) {
                auto json_hasInterval = nlohmann_json_j.at("hasInterval");
                if (!json_hasInterval.is_null() && json_hasInterval.is_boolean()) {
                    json_hasInterval.get_to(nlohmann_json_t.hasInterval);
                }
            }
            if (nlohmann_json_j.contains("intervalDuration")) {
                auto json_intervalDuration = nlohmann_json_j.at("intervalDuration");
                if (!json_intervalDuration.is_null() && json_intervalDuration.is_number()) {
                    json_intervalDuration.get_to(nlohmann_json_t.intervalDuration);
                }
            }
            if (nlohmann_json_j.contains("intervalDelay")) {
                auto json_intervalDelay = nlohmann_json_j.at("intervalDelay");
                if (!json_intervalDelay.is_null() && json_intervalDelay.is_number()) {
                    json_intervalDelay.get_to(nlohmann_json_t.intervalDelay);
                }
            }
            if (nlohmann_json_j.contains("hasPromo")) {
                auto json_hasPromo = nlohmann_json_j.at("hasPromo");
                if (!json_hasPromo.is_null() && json_hasPromo.is_boolean()) {
                    json_hasPromo.get_to(nlohmann_json_t.hasPromo);
                }
            }
            if (nlohmann_json_j.contains("promo")) {
                auto json_promo = nlohmann_json_j.at("promo");
                if (!json_promo.is_null() && json_promo.is_number()) {
                    json_promo.get_to(nlohmann_json_t.promo);
                }
            }
            if (nlohmann_json_j.contains("hasGrace")) {
                auto json_hasGrace = nlohmann_json_j.at("hasGrace");
                if (!json_hasGrace.is_null() && json_hasGrace.is_boolean()) {
                    json_hasGrace.get_to(nlohmann_json_t.hasGrace);
                }
            }
            if (nlohmann_json_j.contains("grace")) {
                auto json_grace = nlohmann_json_j.at("grace");
                if (!json_grace.is_null() && json_grace.is_number()) {
                    json_grace.get_to(nlohmann_json_t.grace);
                }
            }
        }
    };
}}