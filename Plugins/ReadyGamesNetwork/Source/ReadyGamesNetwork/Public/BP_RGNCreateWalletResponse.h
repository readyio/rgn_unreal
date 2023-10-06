#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RGNCreateWalletResponse.h"
#include "BP_RGNCreateWalletResponse.generated.h"

DECLARE_DYNAMIC_DELEGATE_OneParam(FRGNCreateWalletResponse, const FBP_RGNCreateWalletResponseData&, data);

UCLASS(BlueprintType)
class READYGAMESNETWORK_API UBP_RGNCreateWalletResponse : public UObject
{
	GENERATED_BODY()

public:
	void Raise(RGNCreateWalletResponse response);

	UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Core | Wallets | Responses")
	void OnResponse(FRGNCreateWalletResponse Event);

private:
	FRGNCreateWalletResponse ResponseEvent;
};