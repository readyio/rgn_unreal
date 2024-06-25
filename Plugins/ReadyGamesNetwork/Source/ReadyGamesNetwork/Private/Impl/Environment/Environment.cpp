#include "Environment/Environment.h"
#include "HAL/PlatformProcess.h"
#if PLATFORM_ANDROID
#include "Android/AndroidApplication.h"
#include "Android/AndroidJNI.h"
#include "Runtime/Launch/Resources/Version.h"
#endif
#if PLATFORM_IOS
#include "IOS/IOSAppDelegate.h"
#include "iOS/RGNAppInfoPlugin.h"
#endif

namespace RGN {
	void Environment::OpenURL(std::string url) {
		FString urlFString(UTF8_TO_TCHAR(url.c_str()));
		FPlatformProcess::LaunchURL(*urlFString, nullptr, nullptr);
	}

	std::string Environment::GetProcessorType() {
		return std::string(TCHAR_TO_UTF8(*FPlatformMisc::GetCPUBrand()));
	}

	int32_t Environment::GetProcessorCount() {
		return FPlatformMisc::NumberOfCores();
	}

	int32_t Environment::GetSystemMemorySize() {
		return 0;
	}

	std::string Environment::GetGraphicsDeviceName() {
		return std::string(TCHAR_TO_UTF8(*FPlatformMisc::GetPrimaryGPUBrand()));
	}

	int32_t Environment::GetGraphicsMemorySize() {
		return 0;
	}

	std::string Environment::GetOperatingSystem() {
		return std::string(TCHAR_TO_UTF8(*FPlatformMisc::GetOSVersion()));
	}

	std::string Environment::GetOperatingSystemFamily() {
#if PLATFORM_WINDOWS
		return "Windows";
#elif PLATFORM_LINUX
		return "Linux";
#elif PLATFORM_ANDROID
		return "Android";
#elif PLATFORM_IOS
		return "iOS";
#elif PLATFORM_MAC
		return "MacOs";
#endif
		return "";
	}

	std::string Environment::GetEngineName() {
		return "UnrealEngine";
	}

	std::string Environment::GetEngineVersion() {
		FString BuildVersion = FApp::GetBuildVersion();
		return std::string(TCHAR_TO_UTF8(*BuildVersion));
	}

	std::string Environment::GetAppIdentifier() {
#if PLATFORM_ANDROID
		JNIEnv* JEnv = FAndroidApplication::GetJavaEnv();
		jclass game_activity_class = nullptr;
		if (ENGINE_MAJOR_VERSION == 5)
		{
			game_activity_class = FAndroidApplication::FindJavaClass("com/epicgames/unreal/GameActivity");
		}
		else if (ENGINE_MAJOR_VERSION == 4)
		{
			game_activity_class = FAndroidApplication::FindJavaClass("com/epicgames/ue4/GameActivity");
		}
		if (game_activity_class == nullptr)
		{
			return "";
		}
		jmethodID get_package_name_method = JEnv->GetMethodID(game_activity_class, "getPackageName", "()Ljava/lang/String;");
		jstring package_name = (jstring)JEnv->CallObjectMethod(FJavaWrapper::GameActivityThis, get_package_name_method);
		const char* packageNameChars = JEnv->GetStringUTFChars(package_name, nullptr);
		std::string packageName = std::string(packageNameChars);
		JEnv->ReleaseStringUTFChars(package_name, packageNameChars);
		JEnv->DeleteLocalRef(package_name);
		JEnv->DeleteLocalRef(game_activity_class);
		return packageName;
#endif
#if PLATFORM_IOS
		return std::string(getApplicationIdentifier());
#endif
		return "";
	}

	std::string Environment::GetAppInstallerName() {
#if PLATFORM_ANDROID
		JNIEnv* JEnv = FAndroidApplication::GetJavaEnv();
		jobject activity = FAndroidApplication::GetGameActivityThis();
		jclass app_info_class = FAndroidApplication::FindJavaClass("io/getready/appinfo/RGNAppInfo");
		jmethodID get_installer_name_method = JEnv->GetStaticMethodID(app_info_class, "getInstallerName", "(Landroid/content/Context;)Ljava/lang/String;");
		jstring installer_name = (jstring)JEnv->CallStaticObjectMethod(app_info_class, get_installer_name_method, activity);
		const char* resultChars = JEnv->GetStringUTFChars(installer_name, nullptr);
		std::string installerName(resultChars);
		JEnv->ReleaseStringUTFChars(installer_name, resultChars);
		JEnv->DeleteLocalRef(installer_name);
		JEnv->DeleteLocalRef(app_info_class);
		return installerName;
#endif
#if PLATFORM_IOS
		return std::string(getApplicationInstallerName());
#endif
		return "";
	}
}