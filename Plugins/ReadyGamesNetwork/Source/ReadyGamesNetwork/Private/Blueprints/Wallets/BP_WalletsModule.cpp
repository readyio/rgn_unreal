#include "Blueprints/Wallets/BP_WalletsModule.h"
#include "Generated/RGN/Modules/Wallets/WalletsModule.h"
#include "Http/Http.h"
#include "Runtime/JsonUtilities/Public/JsonObjectConverter.h"
#include "json.hpp"

void UBP_WalletsModule::IsUserHavePrimaryWalletAsync(
    FIsUserHavePrimaryWalletResponse successEvent, FWalletsFailResponse failEvent) {
        RGN::Modules::Wallets::WalletsModule::IsUserHavePrimaryWalletAsync(
            [successEvent](RGN::Modules::Wallets::IsUserHavePrimaryWalletResponseData response) {
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
        RGN::Modules::Wallets::WalletsModule::CreateWalletAsync(std::string(TCHAR_TO_UTF8(*password)),
            [successEvent](RGN::Modules::Wallets::CreateWalletResponseData response) {
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
        RGN::Modules::Wallets::WalletsModule::GetUserWalletsAsync(
            [successEvent](RGN::Modules::Wallets::GetUserWalletsResponseData response) {
                FBP_GetUserWalletsResponseData bpResponse;
                FBP_GetUserWalletsResponseData::ConvertToUnrealModel(response, bpResponse);
                successEvent.ExecuteIfBound(bpResponse);
            },
            [failEvent](int code, std::string message) {
                failEvent.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
            }
        );
    }