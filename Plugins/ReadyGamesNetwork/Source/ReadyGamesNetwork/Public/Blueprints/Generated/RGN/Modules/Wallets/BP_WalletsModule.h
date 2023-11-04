#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "../../../../../Generated/RGN/Modules/Wallets/WalletsModule.h"
#include "../../../../../Generated/RGN/Modules/Wallets/IsUserHavePrimaryWalletResponseData.h"
#include "BP_IsUserHavePrimaryWalletResponseData.h"
#include "../../../../../Generated/RGN/Model/Request/BaseMigrationRequestData.h"
#include "../../Model/Request/BP_BaseMigrationRequestData.h"
#include "../../../../../Generated/RGN/Modules/Wallets/GetUserWalletsResponseData.h"
#include "BP_GetUserWalletsResponseData.h"
#include "../../../../../Generated/RGN/Modules/Wallets/CreateWalletResponseData.h"
#include "BP_CreateWalletResponseData.h"
#include "../../../../../Generated/RGN/Modules/Wallets/CreateWalletRequestData.h"
#include "BP_CreateWalletRequestData.h"
#include <vector>
#include <unordered_map>
#include <string>
#include <functional>
#include "BP_WalletsModule.generated.h"

using namespace std;

DECLARE_DYNAMIC_DELEGATE_TwoParams(FWalletsModuleFailResponse, int32, code, const FString&, message);

DECLARE_DYNAMIC_DELEGATE_OneParam(FWalletsModuleIsUserHavePrimaryWalletAsyncResponse, const FBP_IsUserHavePrimaryWalletResponseData&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FWalletsModuleGetUserWalletsAsyncResponse, const FBP_GetUserWalletsResponseData&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FWalletsModuleCreateWalletAsyncResponse, const FBP_CreateWalletResponseData&, response);

UCLASS()
class READYGAMESNETWORK_API UBP_WalletsModule : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Wallets")
    static void IsUserHavePrimaryWalletAsync(
        FWalletsModuleIsUserHavePrimaryWalletAsyncResponse onSuccess,
        FWalletsModuleFailResponse onFail) {
            RGN::Modules::Wallets::WalletsModule::IsUserHavePrimaryWalletAsync(
                [onSuccess](RGN::Modules::Wallets::IsUserHavePrimaryWalletResponseData response) {
                    FBP_IsUserHavePrimaryWalletResponseData bpResponse;
                    FBP_IsUserHavePrimaryWalletResponseData::ConvertToUnrealModel(response, bpResponse);
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                });
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Wallets")
    static void GetUserWalletsAsync(
        FWalletsModuleGetUserWalletsAsyncResponse onSuccess,
        FWalletsModuleFailResponse onFail) {
            RGN::Modules::Wallets::WalletsModule::GetUserWalletsAsync(
                [onSuccess](RGN::Modules::Wallets::GetUserWalletsResponseData response) {
                    FBP_GetUserWalletsResponseData bpResponse;
                    FBP_GetUserWalletsResponseData::ConvertToUnrealModel(response, bpResponse);
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                });
    }
    /**
     * Creates user wallet. Right now it is possible to create just one wallet per user
     * @param password - Password for the wallet
     * @return Information of the create operation was successful.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Wallets")
    static void CreateWalletAsync(
        FWalletsModuleCreateWalletAsyncResponse onSuccess,
        FWalletsModuleFailResponse onFail,
        const FString& password) {
            string cpp_password;
            cpp_password = string(TCHAR_TO_UTF8(*password));
            RGN::Modules::Wallets::WalletsModule::CreateWalletAsync(
                [onSuccess](RGN::Modules::Wallets::CreateWalletResponseData response) {
                    FBP_CreateWalletResponseData bpResponse;
                    FBP_CreateWalletResponseData::ConvertToUnrealModel(response, bpResponse);
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_password);
    }
};
