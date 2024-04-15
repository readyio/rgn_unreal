#include "SharedPrefs/SharedPrefs.h"

namespace RGN {
    bool SharedPrefs::Load(std::string name, std::string& target) {
        FString LoadDirectory = FPaths::Combine(FPaths::ProjectSavedDir(), TEXT("SharedPrefs"));
        FString LoadFile = FString(UTF8_TO_TCHAR(name.c_str()));
        FString AbsoluteFilePath = FPaths::Combine(LoadDirectory, LoadFile);
        FString LoadString;
        if (FFileHelper::LoadFileToString(LoadString, *AbsoluteFilePath)) {
            target = std::string(TCHAR_TO_UTF8(*LoadString));
            return true;
        }
        return false;
    }

    void SharedPrefs::Save(std::string name, std::string content) {
        FString SaveDirectory = FPaths::Combine(FPaths::ProjectSavedDir(), TEXT("SharedPrefs"));
        FString SaveFile = FString(UTF8_TO_TCHAR(name.c_str()));
        FString AbsoluteFilePath = FPaths::Combine(SaveDirectory, SaveFile);
        FString JsonString = FString(UTF8_TO_TCHAR(content.c_str()));
        FFileHelper::SaveStringToFile(JsonString, *AbsoluteFilePath);
    }
}