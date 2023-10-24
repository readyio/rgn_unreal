#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Wallets/CreateWalletRequestData.h"
#include "../../../../../Generated/RGN/Model/Request/BaseMigrationRequestData.h"
#include "../../Model/Request/BP_BaseMigrationRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_CreateWalletRequestData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_CreateWalletRequestData : public FBP_BaseMigrationRequestData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Wallets")
    FString token;
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Wallets")
    FString password;

	static void ConvertToUnrealModel(const RGN::Modules::Wallets::CreateWalletRequestData& source, FBP_CreateWalletRequestData& target) {
		target.token = FString(source.token.c_str());
		target.password = FString(source.password.c_str());
		FBP_BaseMigrationRequestData::ConvertToUnrealModel(source, target);
	}

	static void ConvertToCoreModel(const FBP_CreateWalletRequestData& source, RGN::Modules::Wallets::CreateWalletRequestData& target) {
		target.token = string(TCHAR_TO_UTF8(*source.token));
		target.password = string(TCHAR_TO_UTF8(*source.password));
		FBP_BaseMigrationRequestData::ConvertToCoreModel(source, target);
	}
};
