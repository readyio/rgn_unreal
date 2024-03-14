package io.getready.deeplink;

import android.content.Context;
import android.content.pm.ApplicationInfo;
import android.net.Uri;
import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.net.ParseException;
import android.widget.Toast;

import java.util.List;

public class RGNActivity extends Activity {
    // helper function to extract referrer (origin) if possible
    private Uri getReferrerInternal() {
        Intent intent = this.getIntent();
        Uri referrerUri = intent.getParcelableExtra(Intent.EXTRA_REFERRER);
        if (referrerUri != null) {
            return referrerUri;
        }
        String referrer = intent.getStringExtra("android.intent.extra.REFERRER_NAME");
        if (referrer != null) {
            // try parsing the referrer URL; if it's invalid, return null
            try {
                return Uri.parse(referrer);
            } catch (ParseException e) {
                return null;
            }
        }
        return null;
    }
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        Intent intent = getIntent();
        String action = intent.getAction();

        if (Intent.ACTION_VIEW.equals(action)) {
            Uri data = intent.getData();
            if(data != null) {
                RGNDeepLink.OnDeepLinkInvocation(data.toString());
                intent = getPackageManager().getLaunchIntentForPackage(getPackageName());
                if (intent != null && isTaskRoot()) {
                    intent.addFlags(Intent.FLAG_ACTIVITY_REORDER_TO_FRONT);
                    startActivity(intent);
                }
            }
        }

        finish();
    }
}