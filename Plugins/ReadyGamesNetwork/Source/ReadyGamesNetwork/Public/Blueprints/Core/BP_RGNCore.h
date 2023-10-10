#pragma once

#include <vector>
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BP_RGNConfigureData.h"
#include "BP_RGNCore.generated.h"

// Delegate for signIn event
DECLARE_DYNAMIC_DELEGATE_OneParam(FRGNAuthCallback, bool, isLoggedIn);

UCLASS()
class READYGAMESNETWORK_API UBP_RGNCore : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Core")
    static void Configure(FBP_RGNConfigureData configureData);
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Core")
    static void SubscribeToAuthCallback(FRGNAuthCallback callback);
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Core")
    static void UnsubscribeFromAuthCallback(FRGNAuthCallback callback);
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Core")
    static void DevSignIn(const FString& email, const FString& password);
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Core")
    static void SignIn();
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Core")
    static void SignOut();
    UFUNCTION(BlueprintPure, Category = "ReadyGamesNetwork | Core")
    static bool IsLoggedIn();
    UFUNCTION(BlueprintPure, Category = "ReadyGamesNetwork | Core")
    static FString GetUserToken();

private:
    static std::vector<FRGNAuthCallback> _authCallbacks;
};
