// Copyright 2004-present Facebook. All Rights Reserved.

package com.facebook.profilo.provider.packageinfo;

import android.content.Context;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import com.facebook.profilo.core.BaseTraceProvider;
import com.facebook.profilo.core.Identifiers;
import com.facebook.profilo.core.ProfiloConstants;
import com.facebook.profilo.entries.EntryType;
import com.facebook.profilo.ipc.TraceContext;
import com.facebook.profilo.logger.Logger;
import java.io.File;
import javax.annotation.Nullable;

/** Logs versionName and versionCode from AndroidManifest.xml as trace annotations. */
public class PackageInfoProvider extends BaseTraceProvider {

  @Nullable private String mVersionName;
  private int mVersionCode;
  // Android can return null from Context::getApplicationContext
  @Nullable private final Context mContext;

  public PackageInfoProvider(Context context) {
    super();
    mContext = context.getApplicationContext();
  }

  private void resolvePackageInfo() {
    if (mContext == null) {
      return;
    }
    if (mVersionName != null) {
      return;
    }
    PackageManager pm = mContext.getPackageManager();
    if (pm == null) {
      return;
    }
    PackageInfo pi;
    try {
      pi = pm.getPackageInfo(mContext.getPackageName(), 0);
    } catch (PackageManager.NameNotFoundException e) {
      return;
    } catch (RuntimeException e) {
      return;
    }
    mVersionName = pi.versionName;
    mVersionCode = pi.versionCode;
  }

  @Override
  protected void enable() {}

  @Override
  protected void disable() {}

  @Override
  protected void onTraceEnded(TraceContext context, @Nullable File extraDataFile) {
    resolvePackageInfo();

    if (mVersionName == null) {
      return;
    }

    Logger.writeEntryWithString(
        ProfiloConstants.PROVIDER_PROFILO_SYSTEM,
        EntryType.TRACE_ANNOTATION,
        Identifiers.APP_VERSION_NAME,
        ProfiloConstants.NO_MATCH,
        0,
        "App version",
        mVersionName);

    Logger.writeEntryWithoutMatch(
        ProfiloConstants.PROVIDER_PROFILO_SYSTEM,
        EntryType.TRACE_ANNOTATION,
        Identifiers.APP_VERSION_CODE,
        mVersionCode);
  }

  @Override
  protected int getSupportedProviders() {
    return EVERY_PROVIDER_CHANGE;
  }

  @Override
  protected int getTracingProviders() {
    return 0;
  }
}
