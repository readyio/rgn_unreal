#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Wallets/RGNWallet.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_RGNWallet.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_RGNWallet {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Wallets")
    FString address;

	static void ConvertToUnrealModel(const RGN::Modules::Wallets::RGNWallet& source, FBP_RGNWallet& target) {
		target.address = FString(source.address.c_str());
	}

	static void ConvertToCoreModel(const FBP_RGNWallet& source, RGN::Modules::Wallets::RGNWallet& target) {
		target.address = string(TCHAR_TO_UTF8(*source.address));
	}
};
