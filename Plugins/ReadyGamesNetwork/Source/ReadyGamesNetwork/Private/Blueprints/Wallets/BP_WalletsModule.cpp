#include "Blueprints/Wallets/BP_WalletsModule.h"
#include "Core/Wallets/WalletsModule.h"
#include "Http/Http.h"
#include "Runtime/JsonUtilities/Public/JsonObjectConverter.h"
#include "json.hpp"

using json = nlohmann::json;

void UBP_WalletsModule::IsUserHavePrimaryWalletAsync(
    FIsUserHavePrimaryWalletResponse successEvent, FWalletsFailResponse failEvent) {
        WalletsModule::IsUserHavePrimaryWalletAsync(
            [successEvent](IsUserHavePrimaryWalletResponseData response) {
                FBP_IsUserHavePrimaryWalletResponseData bpResponse;
                FBP_IsUserHavePrimaryWalletResponseData::ConvertToUnrealModel(response, bpResponse);
                successEvent.ExecuteIfBound(bpResponse);
            },
            [failEvent](int code, std::string message) {
                failEvent.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
            }
        );
    }

void UBP_WalletsModule::CreateWallet(const FString& password,
    FCreateWalletSuccessResponse successEvent, FWalletsFailResponse failEvent) {
        WalletsModule::CreateWallet(std::string(TCHAR_TO_UTF8(*password)),
            [successEvent](CreateWalletResponseData response) {
                FBP_CreateWalletResponseData bpResponse;
                FBP_CreateWalletResponseData::ConvertToUnrealModel(response, bpResponse);
                successEvent.ExecuteIfBound(bpResponse);
            },
            [failEvent](int code, std::string message) {
                failEvent.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
            }
        );
    }

void UBP_WalletsModule::GetUserWallets(
    FGetUserWalletsSuccessResponse successEvent, FWalletsFailResponse failEvent) {
        WalletsModule::GetUserWallets(
            [successEvent](GetUserWalletsResponseData response) {
                FBP_GetUserWalletsResponseData bpResponse;
                FBP_GetUserWalletsResponseData::ConvertToUnrealModel(response, bpResponse);
                successEvent.ExecuteIfBound(bpResponse);
            },
            [failEvent](int code, std::string message) {
                failEvent.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
            }
        );
    }