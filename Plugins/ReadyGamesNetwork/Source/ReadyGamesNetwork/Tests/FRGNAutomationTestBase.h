#pragma once
#include "Misc/AutomationTest.h"
#include "FCheckTestCompletionCommand.h"
#include "UTestHelper.h"

class FRGNAutomationTestBase : public FAutomationTestBase
{
public:
    FRGNAutomationTestBase(const FString& InName, const bool bInComplexTask)
        : FAutomationTestBase(InName, bInComplexTask),
            bIsTestComplete(false),
            CheckCompletionFunc([this]() { return bIsTestComplete; })
    {
    }
    virtual ~FRGNAutomationTestBase()
    {
    }

    bool virtual RunTest(const FString& Parameters)
    {
        UBP_RGNCore::Initialize();
        TestHelper = NewObject<UTestHelper>();
        bIsTestComplete = false;
        TestHelper->OnSuccess = [this](const FString& Response)
            {
                if (!Response.IsEmpty()) {
                    TestTrue("Received non-empty response", true);
                }
                else {
                    TestFalse("Received empty response", false);
                }
                bIsTestComplete = true; // Mark the test as complete
            };

        TestHelper->OnFailure = [this](int32 Code, const FString& Message)
            {
                TestFalse(FString::Printf(TEXT("Received failure callback with code: %d, message: %s"), Code, *Message), true);
                bIsTestComplete = true; // Mark the test as complete
            };
        ADD_LATENT_AUTOMATION_COMMAND(FCheckTestCompletionCommand(CheckCompletionFunc))
        return true;
    }

protected:
    UTestHelper* TestHelper;
    bool bIsTestComplete;
    std::function<bool()> CheckCompletionFunc;
};