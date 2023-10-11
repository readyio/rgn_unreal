#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "../GeneratedModels/RGN/Modules/Wallets/BP_IsUserHavePrimaryWalletResponseData.h"
#include "../GeneratedModels/RGN/Modules/Wallets/BP_CreateWalletResponseData.h"
#include "../GeneratedModels/RGN/Modules/Wallets/BP_GetUserWalletsResponseData.h"
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
    static void IsUserHavePrimaryWalletAsync(FIsUserHavePrimaryWalletResponse successEvent, FWalletsFailResponse failEvent);
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Wallets")
    static void CreateWallet(const FString& password, FCreateWalletSuccessResponse successEvent, FWalletsFailResponse failEvent);
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Wallets")
    static void GetUserWallets(FGetUserWalletsSuccessResponse successEvent, FWalletsFailResponse failEvent);
};
