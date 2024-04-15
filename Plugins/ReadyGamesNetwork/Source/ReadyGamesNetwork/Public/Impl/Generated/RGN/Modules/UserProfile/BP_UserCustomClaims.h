#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/UserProfile/UserCustomClaims.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_UserCustomClaims.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_UserCustomClaims {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | UserProfile")
    TMap<FString, FString> claims;

	static void ConvertToUnrealModel(const RGN::Modules::UserProfile::UserCustomClaims& source, FBP_UserCustomClaims& target) {
        for (const auto& [source_claims_key, source_claims_value] : source.claims) {
            FString b_source_claims_key;
            b_source_claims_key = FString(UTF8_TO_TCHAR(source_claims_key.c_str()));
            FString b_source_claims_value;
            b_source_claims_value = FString(UTF8_TO_TCHAR(source_claims_value.c_str()));
            target.claims.Add(b_source_claims_key, b_source_claims_value);
        }
	}

	static void ConvertToCoreModel(const FBP_UserCustomClaims& source, RGN::Modules::UserProfile::UserCustomClaims& target) {
        for (const auto& [source_claims_key, source_claims_value] : source.claims) {
            string cpp_source_claims_key;
            cpp_source_claims_key = string(TCHAR_TO_UTF8(*source_claims_key));
            string cpp_source_claims_value;
            cpp_source_claims_value = string(TCHAR_TO_UTF8(*source_claims_value));
            target.claims.insert({cpp_source_claims_key, cpp_source_claims_value});
        }
	}
};
