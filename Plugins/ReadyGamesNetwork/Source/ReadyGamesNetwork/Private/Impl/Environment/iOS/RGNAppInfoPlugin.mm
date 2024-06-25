#if PLATFORM_IOS

#import "RGNAppInfoPlugin.h"
#import <Foundation/Foundation.h>

BOOL isAppStoreReceiptSandbox(void) {
#if TARGET_OS_SIMULATOR
    return NO;
#else
    if (![NSBundle.mainBundle respondsToSelector:@selector(appStoreReceiptURL)]) {
        return NO;
    }
    NSURL *appStoreReceiptURL = NSBundle.mainBundle.appStoreReceiptURL;
    NSString *appStoreReceiptLastComponent = appStoreReceiptURL.lastPathComponent;
    BOOL isSandboxReceipt = [appStoreReceiptLastComponent isEqualToString:@"sandboxReceipt"];
    return isSandboxReceipt;
#endif
}

BOOL hasEmbeddedMobileProvision(void) {
    BOOL hasEmbeddedMobileProvision = !![[NSBundle mainBundle] pathForResource:@"embedded" ofType:@"mobileprovision"];
    return hasEmbeddedMobileProvision;
}

const char* getApplicationInstallerName(void) {
#if !TARGET_OS_SIMULATOR
    if (!hasEmbeddedMobileProvision() && !isAppStoreReceiptSandbox()) {
        return "Apple App Store";
    }
#endif
    return "";
}

const char* getApplicationIdentifier(void) {
	return [[NSBundle mainBundle] bundleIdentifier].UTF8String;
}

#endif