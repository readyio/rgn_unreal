#pragma once

#include "CoreMinimal.h"
#include "BP_CancellationToken.h"
#include "BP_CancellationTokenSource.generated.h"

UCLASS(BlueprintType)
class READYGAMESNETWORK_API UBP_CancellationTokenSource : public UObject
{
	GENERATED_BODY()

private:
	bool _isCancellationRequested;

public:
	UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Core")
	FBP_CancellationToken GetToken() {
		FBP_CancellationToken cancellationToken;
		cancellationToken.SetHandlePtr(&_isCancellationRequested);
		return cancellationToken;
	}
	UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Core")
	void Cancel() {
		_isCancellationRequested = true;

	}
	UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Core")
	bool IsCancellationRequested() {
		return _isCancellationRequested;
	}
};