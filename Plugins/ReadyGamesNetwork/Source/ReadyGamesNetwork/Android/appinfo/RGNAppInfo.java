package io.getready.appinfo;

import android.content.Context;
import android.content.pm.InstallSourceInfo;
import android.content.pm.PackageManager;
import android.os.Build;

public class RGNAppInfo {
    public static String getInstallerName(Context context) {
        PackageManager packageManager = context.getPackageManager();
        String packageName = context.getPackageName();
        String storePackageName;
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.R) {
            try {
                InstallSourceInfo installSourceInfo = packageManager.getInstallSourceInfo(packageName);
                String installingPackageName = installSourceInfo.getInstallingPackageName();
                storePackageName = installingPackageName != null ? installingPackageName : "";
            } catch (PackageManager.NameNotFoundException e) {
                throw new RuntimeException("Package name not found: " + e.getMessage());
            }
        } else {
            // Use the legacy method for older SDK versions
            String installerPackageName = packageManager.getInstallerPackageName(packageName);
            storePackageName = installerPackageName != null ? installerPackageName : "";
        }
        return storePackageName;
    }
}
