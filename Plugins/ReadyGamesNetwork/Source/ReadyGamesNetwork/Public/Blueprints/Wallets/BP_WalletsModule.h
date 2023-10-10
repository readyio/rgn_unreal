#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BP_CreateWalletResponse.h"
#include "BP_GetUserWalletsResponse.h"
#include "BP_WalletsModule.generated.h"

// Declare delegate for fail response (maybe in future should be moved outside)
DECLARE_DYNAMIC_DELEGATE_TwoParams(FWalletsFailResponse, int32, code, const FString&, message);

// Declare delegates for success response for every API method
DECLARE_DYNAMIC_DELEGATE_OneParam(FCreateWalletSuccessResponse, const FBP_CreateWalletResponse&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetUserWalletsSuccessResponse, const FBP_GetUserWalletsResponse&, response);

UCLASS()
class READYGAMESNETWORK_API UBP_WalletsModule : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Wallets")
    static void CreateWallet(const FString& password, FCreateWalletSuccessResponse successEvent, FWalletsFailResponse failEvent);
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Wallets")
    static void GetUserWallets(FGetUserWalletsSuccessResponse successEvent, FWalletsFailResponse failEvent);
};
