#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../Model/Request/BaseRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Currency {
    struct PurchaseRGNCoinRequestData : public RGN::Model::Request::BaseRequestData {
        string iapUUID;
        string requestId;
        string iapTransactionId;
        string iapReceipt;

        friend void to_json(nlohmann::json& nlohmann_json_j, const PurchaseRGNCoinRequestData& nlohmann_json_t) {
            nlohmann_json_j["appPackageName"] = nlohmann_json_t.appPackageName;
            nlohmann_json_j["iapUUID"] = nlohmann_json_t.iapUUID;
            nlohmann_json_j["requestId"] = nlohmann_json_t.requestId;
            nlohmann_json_j["iapTransactionId"] = nlohmann_json_t.iapTransactionId;
            nlohmann_json_j["iapReceipt"] = nlohmann_json_t.iapReceipt;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, PurchaseRGNCoinRequestData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("appPackageName")) {
                auto json_appPackageName = nlohmann_json_j.at("appPackageName");
                if (!json_appPackageName.is_null() && json_appPackageName.is_string()) {
                    json_appPackageName.get_to(nlohmann_json_t.appPackageName);
                }
            }
            if (nlohmann_json_j.contains("iapUUID")) {
                auto json_iapUUID = nlohmann_json_j.at("iapUUID");
                if (!json_iapUUID.is_null() && json_iapUUID.is_string()) {
                    json_iapUUID.get_to(nlohmann_json_t.iapUUID);
                }
            }
            if (nlohmann_json_j.contains("requestId")) {
                auto json_requestId = nlohmann_json_j.at("requestId");
                if (!json_requestId.is_null() && json_requestId.is_string()) {
                    json_requestId.get_to(nlohmann_json_t.requestId);
                }
            }
            if (nlohmann_json_j.contains("iapTransactionId")) {
                auto json_iapTransactionId = nlohmann_json_j.at("iapTransactionId");
                if (!json_iapTransactionId.is_null() && json_iapTransactionId.is_string()) {
                    json_iapTransactionId.get_to(nlohmann_json_t.iapTransactionId);
                }
            }
            if (nlohmann_json_j.contains("iapReceipt")) {
                auto json_iapReceipt = nlohmann_json_j.at("iapReceipt");
                if (!json_iapReceipt.is_null() && json_iapReceipt.is_string()) {
                    json_iapReceipt.get_to(nlohmann_json_t.iapReceipt);
                }
            }
        }
    };
}}}