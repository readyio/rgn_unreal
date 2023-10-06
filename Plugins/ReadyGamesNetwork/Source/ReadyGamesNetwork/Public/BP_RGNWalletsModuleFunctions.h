#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "BP_RGNCreateWalletResponse.h"
#include "BP_RGNGetUserWalletsResponse.h"
#include "BP_RGNWalletsModuleFunctions.generated.h"

UCLASS()
class READYGAMESNETWORK_API UBP_RGNWalletsModuleFunctions : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Wallets")
    static UBP_RGNCreateWalletResponse* CreateWallet(const FString& password);
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Wallets")
    static UBP_RGNGetUserWalletsResponse* GetUserWallets();
};
