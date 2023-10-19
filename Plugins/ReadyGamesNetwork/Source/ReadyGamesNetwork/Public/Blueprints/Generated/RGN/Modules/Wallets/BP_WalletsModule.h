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
        FWalletsModuleIsUserHavePrimaryWalletAsyncResponse onSuccess, FWalletsModuleFailResponse onFail) {
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Wallets")
    static void GetUserWalletsAsync(
        FWalletsModuleGetUserWalletsAsyncResponse onSuccess, FWalletsModuleFailResponse onFail) {
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Wallets")
    static void CreateWalletAsync(
        const FString& password,
        FWalletsModuleCreateWalletAsyncResponse onSuccess, FWalletsModuleFailResponse onFail) {
            string cpp_password;
			cpp_password = string(TCHAR_TO_UTF8(*password));
            // TODO
    }
};
