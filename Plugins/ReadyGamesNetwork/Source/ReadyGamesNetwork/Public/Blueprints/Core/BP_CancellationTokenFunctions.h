#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BP_CancellationToken.h"
#include "BP_CancellationTokenFunctions.generated.h"

UCLASS()
class READYGAMESNETWORK_API UBP_CancellationTokenFunctions : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Core")
    static bool IsCancellationRequested(FBP_CancellationToken cancellationToken) {
        return cancellationToken.IsCancellationRequested();
    }
};
