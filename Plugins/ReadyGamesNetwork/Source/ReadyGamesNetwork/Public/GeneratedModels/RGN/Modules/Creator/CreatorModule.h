#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CreatorSignupResponseData.h"
#include "../VirtualItems/VirtualItem.h"
#include "CreatorSubmitItemResponseData.h"
#include "CreatorData.h"
#include "../Currency/ClaimCurrencyResponseData.h"
#include <string>
#include <functional>
using namespace std;

namespace RGN { namespace Modules { namespace Creator {
    class CreatorModule {
    public:
        static void BecomeACreatorAsync(
            string& brandName,
            const function<void(RGN::Modules::Creator::CreatorSignupResponseData& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void SubmitItemAsync(
            RGN::Modules::VirtualItems::VirtualItem& customizedItem,
            const function<void(RGN::Modules::Creator::CreatorSubmitItemResponseData& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void GetCreatorDataAsync(
            const function<void(RGN::Modules::Creator::CreatorData& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void ClaimCurrenciesAsync(
            const function<void(RGN::Modules::Currency::ClaimCurrencyResponseData& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
    };
}}}