#pragma once
#include "CoreMinimal.h"
#include "UTestHelper.generated.h"

UCLASS()
class UTestHelper : public UObject
{
    GENERATED_BODY()

public:
    TFunction<void(const FString&)> OnSuccess;
    TFunction<void(int32, const FString&)> OnFailure;

    UFUNCTION()
    void HandleSuccess(const FString& Response)
    {
        OnSuccess(Response);
    }

    UFUNCTION()
    void HandleFailure(int32 Code, const FString& Message)
    {
        OnFailure(Code, Message);
    }
};