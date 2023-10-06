#ifdef READY_GAMES_SDK_UNREAL

#include "DeepLinkAdapter.h"

#if PLATFORM_ANDROID
#include "Android/AndroidJNI.h"
#include "Android/AndroidApplication.h"
#endif

#if PLATFORM_IOS
#include "IOS/IOSAppDelegate.h"
#import <UIKit/UIKit.h>
#endif

std::vector<DeepLinkListener*> DeepLinkAdapter::_listeners;

#if PLATFORM_IOS
static FDelegateHandle _onOpenURLHandle;

static void OnOpenIOSUrl(UIApplication* Application, NSURL* Url, NSString* SourceApplication, id Annotation) {
    NSString* absoluteUrlNString = Url.absoluteString;
    const char* absoluteUrlChars = [absoluteUrlNString UTF8String];
    std::string absoluteUrlString = std::string(absoluteUrlChars);
    DeepLinkAdapter::OnDeepLink(absoluteUrlString);
}
#endif

void DeepLinkAdapter::Initialize() {
#if PLATFORM_ANDROID
    JNIEnv* JEnv = FAndroidApplication::GetJavaEnv();
    jclass android_deeplink_class = FAndroidApplication::FindJavaClass("io/getready/deeplink/DeepLink");
    jmethodID initialize_method = JEnv->GetStaticMethodID(android_deeplink_class, "Initialize", "()V");
    JEnv->CallStaticVoidMethod(android_deeplink_class, initialize_method);
#endif
}

void DeepLinkAdapter::Start() {
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

void DeepLinkAdapter::Stop() {
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

void DeepLinkAdapter::AddListener(DeepLinkListener* listener) {
    _listeners.push_back(listener);
}

void DeepLinkAdapter::RemoveListener(DeepLinkListener* listener) {
    auto it = std::find(_listeners.begin(), _listeners.end(), listener);
    if (it != _listeners.end()) {
        _listeners.erase(it);
    }
}

void DeepLinkAdapter::OnDeepLink(std::string payload) {
    for (auto listener : _listeners) {
        listener->onDeepLink(payload);
    }
}


#if PLATFORM_ANDROID
JNI_METHOD void Java_io_getready_deeplink_DeepLink_OnDeepLinkInvocationJNI(
    JNIEnv* Env,
    jobject Thiz,
    jstring Payload)
{
    const char* payloadChars = Env->GetStringUTFChars(Payload, nullptr);
    std::string payloadString = std::string(payloadChars);
    DeepLinkAdapter::OnDeepLink(payloadString);
}
#endif

#endif