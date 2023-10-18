#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Wallets/CreateWalletResponseData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_CreateWalletResponseData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_CreateWalletResponseData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Wallets")
    FString address;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Wallets")
    bool wallet_created;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Wallets")
    bool success;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Wallets")
    FString error;

	static void ConvertToUnrealModel(const RGN::Modules::Wallets::CreateWalletResponseData& source, FBP_CreateWalletResponseData& target) {
		target.address = FString(source.address.c_str());
		target.wallet_created = source.wallet_created;
		target.success = source.success;
		target.error = FString(source.error.c_str());
	}

	static void ConvertToCoreModel(const FBP_CreateWalletResponseData& source, RGN::Modules::Wallets::CreateWalletResponseData& target) {
		target.address = string(TCHAR_TO_UTF8(*source.address));
		target.wallet_created = source.wallet_created;
		target.success = source.success;
		target.error = string(TCHAR_TO_UTF8(*source.error));
	}
};
