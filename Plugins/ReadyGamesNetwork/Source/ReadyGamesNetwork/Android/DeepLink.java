package io.getready.deeplink;

import java.util.ArrayDeque;
import android.util.Log;

public class DeepLink {
    public static native void OnDeepLinkInvocationJNI(String payload);

    private static Boolean initialized = false;
    private static Boolean started = false;
    private static ArrayDeque<String> invocations = new ArrayDeque<String>();

    public static void Initialize() {
        initialized = true;
    }

    public static void Start() {
        started = true;
        ReleaseDeepLinkInvocations();
    }

    public static void Stop() {
        started = false;
        CleanUpDeepLinkInvocations();
    }

    public static void OnDeepLinkInvocation(String payload) {
        invocations.add(payload);
        ReleaseDeepLinkInvocations();
    }

    private static void ReleaseDeepLinkInvocations() {
        if (!initialized || !started) {
            return;
        }

        while (invocations.peek() != null) {
            Log.v("ReadyGamesNetwork", "ReleaseDeepLinkInvocation");

            String deepLink = invocations.pop();
            OnDeepLinkInvocationJNI(deepLink);
        }
    }

    private static void CleanUpDeepLinkInvocations() {
        invocations.clear();
    }
}