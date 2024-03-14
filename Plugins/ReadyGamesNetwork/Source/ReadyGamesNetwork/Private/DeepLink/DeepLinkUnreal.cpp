#ifdef READY_GAMES_SDK_UNREAL

#include "DeepLink/DeepLink.h"
#include "Misc/CoreDelegates.h"

#if PLATFORM_ANDROID
#include "Android/AndroidJNI.h"
#include "Android/AndroidApplication.h"
#endif

#if PLATFORM_IOS
#include "IOS/IOSAppDelegate.h"
#import <UIKit/UIKit.h>
#endif

std::vector<std::function<void(bool, std::string)>> DeepLink::_callbacks;

static FDelegateHandle _onEnterForegroundHandle;

static void OnEnterForeground() {
    FSimpleDelegateGraphTask::CreateAndDispatchWhenReady(FSimpleDelegateGraphTask::FDelegate::CreateLambda([=](){
        FPlatformProcess::Sleep(0.5f);
        DeepLink::OnDeepLink(true, "");
    }), TStatId(), nullptr, ENamedThreads::AnyThread);
}

#if PLATFORM_IOS
static FDelegateHandle _onOpenURLHandle;

static void OnOpenIOSUrl(UIApplication* Application, NSURL* Url, NSString* SourceApplication, id Annotation) {
    NSString* absoluteUrlNString = Url.absoluteString;
    const char* absoluteUrlChars = [absoluteUrlNString UTF8String];
    std::string absoluteUrlString = std::string(absoluteUrlChars);
    DeepLink::OnDeepLink(false, absoluteUrlString);
}
#endif

void DeepLink::Initialize() {
#if PLATFORM_ANDROID
    JNIEnv* JEnv = FAndroidApplication::GetJavaEnv();
    jclass android_deeplink_class = FAndroidApplication::FindJavaClass("io/getready/deeplink/RGNDeepLink");
    jmethodID initialize_method = JEnv->GetStaticMethodID(android_deeplink_class, "Initialize", "()V");
    JEnv->CallStaticVoidMethod(android_deeplink_class, initialize_method);
#endif
}

void DeepLink::Start() {
#if PLATFORM_ANDROID
    JNIEnv* JEnv = FAndroidApplication::GetJavaEnv();
    jclass android_deeplink_class = FAndroidApplication::FindJavaClass("io/getready/deeplink/RGNDeepLink");
    jmethodID initialize_method = JEnv->GetStaticMethodID(android_deeplink_class, "Start", "()V");
    JEnv->CallStaticVoidMethod(android_deeplink_class, initialize_method);
#endif
#if PLATFORM_IOS
    _onOpenURLHandle = FIOSCoreDelegates::OnOpenURL.AddStatic(&OnOpenIOSUrl);
#endif
    _onEnterForegroundHandle = FCoreDelegates::ApplicationHasEnteredForegroundDelegate.AddStatic(&OnEnterForeground);
}

void DeepLink::Stop() {
#if PLATFORM_ANDROID
    JNIEnv* JEnv = FAndroidApplication::GetJavaEnv();
    jclass android_deeplink_class = FAndroidApplication::FindJavaClass("io/getready/deeplink/RGNDeepLink");
    jmethodID initialize_method = JEnv->GetStaticMethodID(android_deeplink_class, "Stop", "()V");
    JEnv->CallStaticVoidMethod(android_deeplink_class, initialize_method);
#endif
#if PLATFORM_IOS
    FIOSCoreDelegates::OnOpenURL.Remove(_onOpenURLHandle);
#endif
    FCoreDelegates::ApplicationHasEnteredForegroundDelegate.Remove(_onEnterForegroundHandle);
}

void DeepLink::Listen(std::function<void(bool, std::string)> callback) {
    _callbacks.push_back(callback);
}

void DeepLink::OnDeepLink(bool canceled, std::string payload) {
    AsyncTask(ENamedThreads::GameThread, [canceled, payload]() {
        for (auto callback : _callbacks) {
            callback(canceled, payload);
        }
        _callbacks.clear();
    });
}

#if PLATFORM_ANDROID
JNI_METHOD void Java_io_getready_deeplink_RGNDeepLink_OnDeepLinkInvocationJNI(
    JNIEnv* Env,
    jobject Thiz,
    jstring Payload)
{
    UE_LOG(LogTemp, Warning, TEXT("Java_io_getready_deeplink_RGNDeepLink_OnDeepLinkInvocationJNI"));
    const char* payloadChars = Env->GetStringUTFChars(Payload, nullptr);
    std::string payloadString = std::string(payloadChars);
    DeepLink::OnDeepLink(false, payloadString);
}
#endif

#endif