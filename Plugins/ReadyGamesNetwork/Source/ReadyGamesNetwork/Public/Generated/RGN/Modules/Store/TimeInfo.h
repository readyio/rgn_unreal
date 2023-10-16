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
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(TimeInfo, hasStart, start, hasEnd, end, hasInterval, intervalDuration, intervalDelay)
    };
}}}