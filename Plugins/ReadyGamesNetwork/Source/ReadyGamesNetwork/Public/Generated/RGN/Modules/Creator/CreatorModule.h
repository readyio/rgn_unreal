#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "CreatorSignupResponseData.h"
#include "CreatorSignupRequestData.h"
#include "../VirtualItems/VirtualItem.h"
#include "CreatorSubmitItemResponseData.h"
#include "CreatorSubmitItemRequestData.h"
#include "CreatorData.h"
#include "../../Model/Request/BaseMigrationRequestData.h"
#include "../Currency/ClaimCurrencyResponseData.h"
#include <vector>
#include <unordered_map>
#include <string>
#include <functional>
using namespace std;

namespace RGN { namespace Modules { namespace Creator {
    class CreatorModule {
    public:
        /**
         * Sends an asynchronous request to the backend to become a creator
         * @return FirebaseCreatorSignupResponseData.message = "Success" OR "Brand name already exists" OR "User is already enrolled in Creator Program" OR "Invalid BrandName";
         */
        static void BecomeACreatorAsync(
            const function<void(const RGN::Modules::Creator::CreatorSignupResponseData& result)>& success,
            const function<void(const int httpCode, const string& error)>& fail,
            const string& brandName) {
                RGN::Modules::Creator::CreatorSignupRequestData requestData;
                requestData.brandName = brandName;
                RGNCore::CallAPI<RGN::Modules::Creator::CreatorSignupRequestData, RGN::Modules::Creator::CreatorSignupResponseData>(
                    "creator-signup",
                    requestData,
                    success,
                    fail);
            };
        static void SubmitItemAsync(
            const function<void(const RGN::Modules::Creator::CreatorSubmitItemResponseData& result)>& success,
            const function<void(const int httpCode, const string& error)>& fail,
            const RGN::Modules::VirtualItems::VirtualItem& customizedItem) {
                RGN::Modules::Creator::CreatorSubmitItemRequestData requestData;
                requestData.customizedItem = customizedItem;
                RGNCore::CallAPI<RGN::Modules::Creator::CreatorSubmitItemRequestData, RGN::Modules::Creator::CreatorSubmitItemResponseData>(
                    "creator-addItem",
                    requestData,
                    success,
                    fail);
            };
        static void GetCreatorDataAsync(
            const function<void(const RGN::Modules::Creator::CreatorData& result)>& success,
            const function<void(const int httpCode, const string& error)>& fail) {
                RGN::Model::Request::BaseMigrationRequestData requestData;
                RGNCore::CallAPI<RGN::Model::Request::BaseMigrationRequestData, RGN::Modules::Creator::CreatorData>(
                    "creator-getCreatorData",
                    requestData,
                    success,
                    fail);
            };
        static void ClaimCurrenciesAsync(
            const function<void(const RGN::Modules::Currency::ClaimCurrencyResponseData& result)>& success,
            const function<void(const int httpCode, const string& error)>& fail) {
                RGN::Model::Request::BaseMigrationRequestData requestData;
                RGNCore::CallAPI<RGN::Model::Request::BaseMigrationRequestData, RGN::Modules::Currency::ClaimCurrencyResponseData>(
                    "creator-claimCurrency",
                    requestData,
                    success,
                    fail);
            };
    };
}}}