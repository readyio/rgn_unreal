#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "../../Generated/RGN/Modules/Wallets/WalletsModule.h"
#include "../../Generated/RGN/Modules/Wallets/IsUserHavePrimaryWalletResponseData.h"
#include "../../Generated/RGN/Modules/Wallets/CreateWalletResponseData.h"
#include "../../Generated/RGN/Modules/Wallets/GetUserWalletsResponseData.h"
#include "../Generated/RGN/Modules/Wallets/BP_IsUserHavePrimaryWalletResponseData.h"
#include "../Generated/RGN/Modules/Wallets/BP_CreateWalletResponseData.h"
#include "../Generated/RGN/Modules/Wallets/BP_GetUserWalletsResponseData.h"
#include "BP_WalletsModule.generated.h"

// Declare delegate for fail response (maybe in future should be moved outside)
DECLARE_DYNAMIC_DELEGATE_TwoParams(FWalletsFailResponse, int32, code, const FString&, message);

// Declare delegates for success response for every API method
DECLARE_DYNAMIC_DELEGATE_OneParam(FIsUserHavePrimaryWalletResponse, const FBP_IsUserHavePrimaryWalletResponseData&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FCreateWalletSuccessResponse, const FBP_CreateWalletResponseData&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetUserWalletsSuccessResponse, const FBP_GetUserWalletsResponseData&, response);

UCLASS()
class READYGAMESNETWORK_API UBP_WalletsModule : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Wallets")
    static void IsUserHavePrimaryWalletAsync(FIsUserHavePrimaryWalletResponse successEvent, FWalletsFailResponse failEvent) {
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
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Wallets")
    static void CreateWallet(const FString& password, FCreateWalletSuccessResponse successEvent, FWalletsFailResponse failEvent) {
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
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Wallets")
    static void GetUserWallets(FGetUserWalletsSuccessResponse successEvent, FWalletsFailResponse failEvent) {
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
};
