#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "LeaderboardReward.h"
#include "../../Model/TimeInfo.h"
#include "../../Model/RequirementData.h"
#include "../../Model/ParticipationFee.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Leaderboard {
    /**
     * A class that represents a leaderboard on Ready Games Network.
     */
    struct LeaderboardData {
        /**
         * Unique id of the leaderboard
         */
        string id;
        /**
         * List of application ids where this leaderboard is used
         */
        vector<string> appIds;
        /**
         * Leaderboard request name. This value can be used to query leaderboards
         */
        string requestName;
        /**
         * Leaderboard tags list. It is used to filter the leaderboards.
         */
        vector<string> tags;
        /**
         * Leaderboard name
         * Is used also to store localization key for the name
         */
        string name;
        /**
         * Leaderboard description
         * Is used also to store localization key for the description
         */
        string description;
        /**
         * Define who can set/add score to the leaderboard. 'server' or 'client'
         */
        string setBy;
        /**
         * Sorting direction:
         * false - places are sorted in descending order;
         * true - places are sorted in ascending order.
         */
        bool invertSortOrder = false;
        /**
         * This parameter determines how many digits of the score integer are displayed
         * after the decimal point.
         * The size of the decimal part
         * e.g., with decimalOffset: 2, the number 1234 will be displayed as 12.34.
         */
        int32_t decimalOffset = 0;
        /**
         * The leaderboard type that determines the results unit.Possible values:
         * numeric — Number.
         * time — Time in milliseconds.
         * Default value is numeric
         */
        string type;
        /**
         * Rewards which will be earned at reset period
         */
        vector<RGN::Modules::Leaderboard::LeaderboardReward> rewardsAtReset;
        /**
         * The leaderboard rewards draw type that determines how the leaderboard should draw rewards. Possible values:
         * placeBased — Rewards will be drawn accordingly users places.
         * scoreBased — Rewards will be drawn randomly, but users with higher score will have more chance to win.
         * scoreBasedOnePerUser - Same as the scoreBased, but with limitation for one reward at whole leaderboard per one user
         * scoreBasedOnePerUserAndReward - Same as the scoreBased, but with limitation for one unique reward per one user
         * but different rewards could be added to same user
         * Default value is placeBased
         */
        string rewardsDrawType;
        /**
         * Date and time when the leaderboard was created
         * in milliseconds since midnight, January 1, 1970 UTC.
         * Refer to T:RGN.Utility.DateTimeUtility for helper methods.
         * This field is automatically populated by the backend
         */
        int64_t createdAt = 0;
        /**
         * Date and time when the leaderboard was last time updated
         * in milliseconds since midnight, January 1, 1970 UTC.
         * Refer to T:RGN.Utility.DateTimeUtility for helper methods.
         * This field is automatically populated by the backend
         */
        int64_t updatedAt = 0;
        /**
         * User Id who created the leaderboard
         * This field is automatically populated by the backend
         */
        string createdBy;
        /**
         * User Id who last time updated the leaderboard
         * This field is automatically populated by the backend
         */
        string updatedBy;
        /**
         * The time when the leaderboard is available
         */
        RGN::Model::TimeInfo time;
        /**
         * Specifies if the user need to have a gamepass or virtual item to join the leaderboard
         * Join the leaderboard means to submit scores to the leaderboard
         * In case the user does not have the required item, the score change is ignored
         */
        RGN::Model::RequirementData requiredToJoin;
        /**
         * Indicates whether the leaderboard rewards are automatically claimed by the user. If false, the rewards must
         * be claimed manually.The time.end is required and optionally time.grace to be set if autoClaim is true.
         */
        bool autoClaim = false;
        /**
         * List of participation fees for the leaderboard.
         * The fees are deducted when the user sets or adds a score to the leaderboard for the first time.
         */
        vector<RGN::Model::ParticipationFee> participationFees;

        friend void to_json(nlohmann::json& nlohmann_json_j, const LeaderboardData& nlohmann_json_t) {
            nlohmann_json_j["id"] = nlohmann_json_t.id;
            nlohmann_json_j["appIds"] = nlohmann_json_t.appIds;
            nlohmann_json_j["requestName"] = nlohmann_json_t.requestName;
            nlohmann_json_j["tags"] = nlohmann_json_t.tags;
            nlohmann_json_j["name"] = nlohmann_json_t.name;
            nlohmann_json_j["description"] = nlohmann_json_t.description;
            nlohmann_json_j["setBy"] = nlohmann_json_t.setBy;
            nlohmann_json_j["invertSortOrder"] = nlohmann_json_t.invertSortOrder;
            nlohmann_json_j["decimalOffset"] = nlohmann_json_t.decimalOffset;
            nlohmann_json_j["type"] = nlohmann_json_t.type;
            nlohmann_json_j["rewardsAtReset"] = nlohmann_json_t.rewardsAtReset;
            nlohmann_json_j["rewardsDrawType"] = nlohmann_json_t.rewardsDrawType;
            nlohmann_json_j["createdAt"] = nlohmann_json_t.createdAt;
            nlohmann_json_j["updatedAt"] = nlohmann_json_t.updatedAt;
            nlohmann_json_j["createdBy"] = nlohmann_json_t.createdBy;
            nlohmann_json_j["updatedBy"] = nlohmann_json_t.updatedBy;
            nlohmann_json_j["time"] = nlohmann_json_t.time;
            nlohmann_json_j["requiredToJoin"] = nlohmann_json_t.requiredToJoin;
            nlohmann_json_j["autoClaim"] = nlohmann_json_t.autoClaim;
            nlohmann_json_j["participationFees"] = nlohmann_json_t.participationFees;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, LeaderboardData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("id")) {
                auto json_id = nlohmann_json_j.at("id");
                if (!json_id.is_null() && json_id.is_string()) {
                    json_id.get_to(nlohmann_json_t.id);
                }
            }
            if (nlohmann_json_j.contains("appIds")) {
                auto json_appIds = nlohmann_json_j.at("appIds");
                if (!json_appIds.is_null() && json_appIds.is_array()) {
                    json_appIds.get_to(nlohmann_json_t.appIds);
                }
            }
            if (nlohmann_json_j.contains("requestName")) {
                auto json_requestName = nlohmann_json_j.at("requestName");
                if (!json_requestName.is_null() && json_requestName.is_string()) {
                    json_requestName.get_to(nlohmann_json_t.requestName);
                }
            }
            if (nlohmann_json_j.contains("tags")) {
                auto json_tags = nlohmann_json_j.at("tags");
                if (!json_tags.is_null() && json_tags.is_array()) {
                    json_tags.get_to(nlohmann_json_t.tags);
                }
            }
            if (nlohmann_json_j.contains("name")) {
                auto json_name = nlohmann_json_j.at("name");
                if (!json_name.is_null() && json_name.is_string()) {
                    json_name.get_to(nlohmann_json_t.name);
                }
            }
            if (nlohmann_json_j.contains("description")) {
                auto json_description = nlohmann_json_j.at("description");
                if (!json_description.is_null() && json_description.is_string()) {
                    json_description.get_to(nlohmann_json_t.description);
                }
            }
            if (nlohmann_json_j.contains("setBy")) {
                auto json_setBy = nlohmann_json_j.at("setBy");
                if (!json_setBy.is_null() && json_setBy.is_string()) {
                    json_setBy.get_to(nlohmann_json_t.setBy);
                }
            }
            if (nlohmann_json_j.contains("invertSortOrder")) {
                auto json_invertSortOrder = nlohmann_json_j.at("invertSortOrder");
                if (!json_invertSortOrder.is_null() && json_invertSortOrder.is_boolean()) {
                    json_invertSortOrder.get_to(nlohmann_json_t.invertSortOrder);
                }
            }
            if (nlohmann_json_j.contains("decimalOffset")) {
                auto json_decimalOffset = nlohmann_json_j.at("decimalOffset");
                if (!json_decimalOffset.is_null() && json_decimalOffset.is_number()) {
                    json_decimalOffset.get_to(nlohmann_json_t.decimalOffset);
                }
            }
            if (nlohmann_json_j.contains("type")) {
                auto json_type = nlohmann_json_j.at("type");
                if (!json_type.is_null() && json_type.is_string()) {
                    json_type.get_to(nlohmann_json_t.type);
                }
            }
            if (nlohmann_json_j.contains("rewardsAtReset")) {
                auto json_rewardsAtReset = nlohmann_json_j.at("rewardsAtReset");
                if (!json_rewardsAtReset.is_null() && json_rewardsAtReset.is_array()) {
                    json_rewardsAtReset.get_to(nlohmann_json_t.rewardsAtReset);
                }
            }
            if (nlohmann_json_j.contains("rewardsDrawType")) {
                auto json_rewardsDrawType = nlohmann_json_j.at("rewardsDrawType");
                if (!json_rewardsDrawType.is_null() && json_rewardsDrawType.is_string()) {
                    json_rewardsDrawType.get_to(nlohmann_json_t.rewardsDrawType);
                }
            }
            if (nlohmann_json_j.contains("createdAt")) {
                auto json_createdAt = nlohmann_json_j.at("createdAt");
                if (!json_createdAt.is_null() && json_createdAt.is_number()) {
                    json_createdAt.get_to(nlohmann_json_t.createdAt);
                }
            }
            if (nlohmann_json_j.contains("updatedAt")) {
                auto json_updatedAt = nlohmann_json_j.at("updatedAt");
                if (!json_updatedAt.is_null() && json_updatedAt.is_number()) {
                    json_updatedAt.get_to(nlohmann_json_t.updatedAt);
                }
            }
            if (nlohmann_json_j.contains("createdBy")) {
                auto json_createdBy = nlohmann_json_j.at("createdBy");
                if (!json_createdBy.is_null() && json_createdBy.is_string()) {
                    json_createdBy.get_to(nlohmann_json_t.createdBy);
                }
            }
            if (nlohmann_json_j.contains("updatedBy")) {
                auto json_updatedBy = nlohmann_json_j.at("updatedBy");
                if (!json_updatedBy.is_null() && json_updatedBy.is_string()) {
                    json_updatedBy.get_to(nlohmann_json_t.updatedBy);
                }
            }
            if (nlohmann_json_j.contains("time")) {
                auto json_time = nlohmann_json_j.at("time");
                if (!json_time.is_null()) {
                    json_time.get_to(nlohmann_json_t.time);
                }
            }
            if (nlohmann_json_j.contains("requiredToJoin")) {
                auto json_requiredToJoin = nlohmann_json_j.at("requiredToJoin");
                if (!json_requiredToJoin.is_null()) {
                    json_requiredToJoin.get_to(nlohmann_json_t.requiredToJoin);
                }
            }
            if (nlohmann_json_j.contains("autoClaim")) {
                auto json_autoClaim = nlohmann_json_j.at("autoClaim");
                if (!json_autoClaim.is_null() && json_autoClaim.is_boolean()) {
                    json_autoClaim.get_to(nlohmann_json_t.autoClaim);
                }
            }
            if (nlohmann_json_j.contains("participationFees")) {
                auto json_participationFees = nlohmann_json_j.at("participationFees");
                if (!json_participationFees.is_null() && json_participationFees.is_array()) {
                    json_participationFees.get_to(nlohmann_json_t.participationFees);
                }
            }
        }
    };
}}}