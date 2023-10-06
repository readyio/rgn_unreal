#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "BP_RGNCoreModuleFunctions.generated.h"

UCLASS()
class READYGAMESNETWORK_API UBP_RGNCoreModuleFunctions : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Core")
    static void Configure(const FString& appId);
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Core")
    static void SignIn();
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Core")
    static void SignOut();
};
