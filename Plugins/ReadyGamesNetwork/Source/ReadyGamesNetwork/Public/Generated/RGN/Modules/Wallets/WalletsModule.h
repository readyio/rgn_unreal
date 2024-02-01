#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../../../Core/RGNCore.h"
#include "IsUserHasBlockchainRequirementResponseData.h"
#include <vector>
#include <unordered_map>
#include <string>
#include <functional>
using namespace std;

namespace RGN { namespace Modules { namespace Wallets {
    class WalletsModule {
    public:
        static void IsUserHasBlockchainRequirementAsync(
            const function<void(const bool result)>& success,
            const function<void(const int httpCode, const string& error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Wallets::IsUserHasBlockchainRequirementResponseData>(
                    "wallets-isUserHasBlockchainRequirement",
                    requestData,
                    [success] (const RGN::Modules::Wallets::IsUserHasBlockchainRequirementResponseData& result) {
                        success(result.hasBlockchainRequirement);
                    },
                    fail,
                    false);
            };
    };
}}}