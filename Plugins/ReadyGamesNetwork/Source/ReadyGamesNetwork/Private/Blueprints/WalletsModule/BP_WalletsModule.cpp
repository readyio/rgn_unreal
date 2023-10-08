#include "Blueprints/WalletsModule/BP_WalletsModule.h"
#include "Core/WalletsModule/WalletsModule.h"
#include "Http/Http.h"

void UBP_WalletsModule::CreateWallet(const FString& password,
    FCreateWalletSuccessResponse successEvent, FWalletsFailResponse failEvent) {
        WalletsModule::CreateWallet(std::string(TCHAR_TO_UTF8(*password)),
            [successEvent](CreateWalletResponse response) {
                FBP_CreateWalletResponse bpResponse;
                bpResponse.address = FString(response.address.c_str());
                bpResponse.walletCreated = response.wallet_created;
                bpResponse.success = response.success;
                bpResponse.error = FString(response.error.c_str());
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
            [successEvent](GetUserWalletsResponse response) {
                FBP_GetUserWalletsResponse bpResponse;
                for (Wallet& wallet : response.wallets) {
                    FBP_Wallet bWallet;
                    bWallet.address = FString(wallet.address.c_str());
                    bpResponse.wallets.Add(bWallet);
                }
                successEvent.ExecuteIfBound(bpResponse);
            },
            [failEvent](int code, std::string message) {
                failEvent.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
            }
        );
    }