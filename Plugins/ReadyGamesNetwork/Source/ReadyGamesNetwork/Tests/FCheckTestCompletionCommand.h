#pragma once
#include "CoreMinimal.h"

class FCheckTestCompletionCommand : public IAutomationLatentCommand
{
private:
    TFunction<bool()> CheckFunction;

public:
    FCheckTestCompletionCommand(TFunction<bool()> InCheckFunction)
        : CheckFunction(InCheckFunction)
    {
    }

    virtual bool Update() override
    {
        return CheckFunction();
    }
};