//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, WBSPerSitePreference, WBSPerSitePreferencesSQLiteStore;

@protocol WBSPerSitePreferenceManagerDefaultsDelegate <NSObject>
@property(readonly, nonatomic) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore;
- (id)defaultPreferenceValueForPreferenceIfNotCustomized:(WBSPerSitePreference *)arg1;
- (long long)preferencesStoreKeyForPreference:(WBSPerSitePreference *)arg1;

@optional
- (void)getDefaultPreferenceValueIfNotCustomizedForPreference:(WBSPerSitePreference *)arg1 domain:(NSString *)arg2 completionHandler:(void (^)(id))arg3;
@end

