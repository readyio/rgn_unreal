#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_RGNWallet.h"
#include "../../Model/Response/BP_BaseResponseData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "../../../../../Generated/RGN/Modules/Wallets/GetUserWalletsResponseData.h"
#include "BP_GetUserWalletsResponseData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_GetUserWalletsResponseData : public FBP_BaseResponseData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Wallets")
    TArray<FBP_RGNWallet> wallets;

	static void ConvertToUnrealModel(const RGN::Modules::Wallets::GetUserWalletsResponseData& source, FBP_GetUserWalletsResponseData& target) {
		for (const auto& source_wallets_item : source.wallets) {
			FBP_RGNWallet b_source_wallets_item;
			FBP_RGNWallet::ConvertToUnrealModel(source_wallets_item, b_source_wallets_item);
			target.wallets.Add(b_source_wallets_item);
		}
		FBP_BaseResponseData::ConvertToUnrealModel(source, target);
	}

	static void ConvertToCoreModel(const FBP_GetUserWalletsResponseData& source, RGN::Modules::Wallets::GetUserWalletsResponseData& target) {
		for (const auto& source_wallets_item : source.wallets) {
			RGN::Modules::Wallets::RGNWallet cpp_source_wallets_item;
			FBP_RGNWallet::ConvertToCoreModel(source_wallets_item, cpp_source_wallets_item);
			target.wallets.push_back(cpp_source_wallets_item);
		}
		FBP_BaseResponseData::ConvertToCoreModel(source, target);
	}
};
