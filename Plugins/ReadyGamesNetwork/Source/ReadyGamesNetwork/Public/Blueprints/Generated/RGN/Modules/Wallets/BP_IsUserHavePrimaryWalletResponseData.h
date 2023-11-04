#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Wallets/IsUserHavePrimaryWalletResponseData.h"
#include "../../../../../Generated/RGN/Model/Response/BaseResponseData.h"
#include "../../Model/Response/BP_BaseResponseData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_IsUserHavePrimaryWalletResponseData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_IsUserHavePrimaryWalletResponseData : public FBP_BaseResponseData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Wallets")
    bool isUserHavePrimaryWallet;
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Wallets")
    FString address;

	static void ConvertToUnrealModel(const RGN::Modules::Wallets::IsUserHavePrimaryWalletResponseData& source, FBP_IsUserHavePrimaryWalletResponseData& target) {
        target.isUserHavePrimaryWallet = source.isUserHavePrimaryWallet;
        target.address = FString(source.address.c_str());
		FBP_BaseResponseData::ConvertToUnrealModel(source, target);
	}

	static void ConvertToCoreModel(const FBP_IsUserHavePrimaryWalletResponseData& source, RGN::Modules::Wallets::IsUserHavePrimaryWalletResponseData& target) {
        target.isUserHavePrimaryWallet = source.isUserHavePrimaryWallet;
        target.address = string(TCHAR_TO_UTF8(*source.address));
		FBP_BaseResponseData::ConvertToCoreModel(source, target);
	}
};
