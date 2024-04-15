#include "Utility/Logger.h"
#include "CoreMinimal.h"

namespace RGN { namespace Utility {
    void Logger::Debug(std::string message) {
        UE_LOG(LogTemp, Display, TEXT("%s"), UTF8_TO_TCHAR(message.c_str()));
    }
}}