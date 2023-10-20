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
                nlohmann_json_j.at("appPackageName").get_to(nlohmann_json_t.appPackageName);
            }
            if (nlohmann_json_j.contains("iapUUID")) {
                nlohmann_json_j.at("iapUUID").get_to(nlohmann_json_t.iapUUID);
            }
            if (nlohmann_json_j.contains("requestId")) {
                nlohmann_json_j.at("requestId").get_to(nlohmann_json_t.requestId);
            }
            if (nlohmann_json_j.contains("iapTransactionId")) {
                nlohmann_json_j.at("iapTransactionId").get_to(nlohmann_json_t.iapTransactionId);
            }
            if (nlohmann_json_j.contains("iapReceipt")) {
                nlohmann_json_j.at("iapReceipt").get_to(nlohmann_json_t.iapReceipt);
            }
        }
    };
}}}