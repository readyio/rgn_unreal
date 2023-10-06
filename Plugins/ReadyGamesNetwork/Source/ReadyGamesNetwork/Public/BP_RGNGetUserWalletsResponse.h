#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RGNGetUserWalletsResponse.h"
#include "BP_RGNGetUserWalletsResponse.generated.h"

DECLARE_DYNAMIC_DELEGATE_OneParam(FRGNGetUserWalletsResponse, const FBP_RGNGetUserWalletsResponseData&, data);

UCLASS(BlueprintType)
class READYGAMESNETWORK_API UBP_RGNGetUserWalletsResponse : public UObject
{
	GENERATED_BODY()

public:
	void Raise(RGNGetUserWalletsResponse response);

	UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Core | Wallets | Responses")
	void OnResponse(FRGNGetUserWalletsResponse Event);

private:
	FRGNGetUserWalletsResponse ResponseEvent;
};