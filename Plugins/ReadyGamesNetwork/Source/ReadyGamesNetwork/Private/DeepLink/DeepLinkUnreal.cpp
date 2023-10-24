#ifdef READY_GAMES_SDK_UNREAL

#include "DeepLink/DeepLink.h"

#if PLATFORM_ANDROID
#include "Android/AndroidJNI.h"
#include "Android/AndroidApplication.h"
#endif

#if PLATFORM_IOS
#include "IOS/IOSAppDelegate.h"
#import <UIKit/UIKit.h>
#endif

std::vector<std::function<void(std::string)>> DeepLink::_callbacks;

#if PLATFORM_IOS
static FDelegateHandle _onOpenURLHandle;

static void OnOpenIOSUrl(UIApplication* Application, NSURL* Url, NSString* SourceApplication, id Annotation) {
    NSString* absoluteUrlNString = Url.absoluteString;
    const char* absoluteUrlChars = [absoluteUrlNString UTF8String];
    std::string absoluteUrlString = std::string(absoluteUrlChars);
    DeepLink::OnDeepLink(absoluteUrlString);
}
#endif

void DeepLink::Initialize() {
#if PLATFORM_ANDROID
    JNIEnv* JEnv = FAndroidApplication::GetJavaEnv();
    jclass android_deeplink_class = FAndroidApplication::FindJavaClass("io/getready/deeplink/DeepLink");
    jmethodID initialize_method = JEnv->GetStaticMethodID(android_deeplink_class, "Initialize", "()V");
    JEnv->CallStaticVoidMethod(android_deeplink_class, initialize_method);
#endif
}

void DeepLink::Start() {
#if PLATFORM_ANDROID
    JNIEnv* JEnv = FAndroidApplication::GetJavaEnv();
    jclass android_deeplink_class = FAndroidApplication::FindJavaClass("io/getready/deeplink/DeepLink");
    jmethodID initialize_method = JEnv->GetStaticMethodID(android_deeplink_class, "Start", "()V");
    JEnv->CallStaticVoidMethod(android_deeplink_class, initialize_method);
#endif
#if PLATFORM_IOS
    _onOpenURLHandle = FIOSCoreDelegates::OnOpenURL.AddStatic(&OnOpenIOSUrl);
#endif
}

void DeepLink::Stop() {
#if PLATFORM_ANDROID
    JNIEnv* JEnv = FAndroidApplication::GetJavaEnv();
    jclass android_deeplink_class = FAndroidApplication::FindJavaClass("io/getready/deeplink/DeepLink");
    jmethodID initialize_method = JEnv->GetStaticMethodID(android_deeplink_class, "Stop", "()V");
    JEnv->CallStaticVoidMethod(android_deeplink_class, initialize_method);
#endif
#if PLATFORM_IOS
    FIOSCoreDelegates::OnOpenURL.Remove(_onOpenURLHandle);
#endif
}

void DeepLink::Listen(std::function<void(std::string)> callback) {
    _callbacks.push_back(callback);
}

void DeepLink::OnDeepLink(std::string payload) {
    AsyncTask(ENamedThreads::GameThread, [payload]() {
        for (auto callback : _callbacks) {
            callback(payload);
        }
        _callbacks.clear();
    });
}

#if PLATFORM_ANDROID
JNI_METHOD void Java_io_getready_deeplink_DeepLink_OnDeepLinkInvocationJNI(
    JNIEnv* Env,
    jobject Thiz,
    jstring Payload)
{
    const char* payloadChars = Env->GetStringUTFChars(Payload, nullptr);
    std::string payloadString = std::string(payloadChars);
    DeepLink::OnDeepLink(payloadString);
}
#endif

#endif