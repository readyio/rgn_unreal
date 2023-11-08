#pragma once
#include "CoreMinimal.h"

DEFINE_LATENT_AUTOMATION_COMMAND_ONE_PARAMETER(FEngineWaitLatentCommand, float, TimeToWait);

bool FEngineWaitLatentCommand::Update() {
    double CurrentTime = FPlatformTime::Seconds();
    if (CurrentTime - StartTime >= TimeToWait) {
        return true;
    }
    return false;
}