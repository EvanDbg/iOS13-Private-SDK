//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BSMonotonicReferenceTime, NSArray, NSNumber, NSString, NSURL, SBSApplicationShortcutService, SBSApplicationShortcutServiceFetchResult;

@interface SBFApplication : NSObject
{
    SBSApplicationShortcutService *_applicationShortcutService;
    SBSApplicationShortcutServiceFetchResult *_applicationShortcutServiceFetchResult;
    BSMonotonicReferenceTime *_applicationShortcutServiceFetchResultExpirationReferenceTime;
    BOOL _systemOrInternalApplication;
    NSString *_applicationBundleIdentifier;
    NSString *_displayName;
    NSURL *_bundleURL;
    NSNumber *_appStoreItemID;
    NSString *_applicationShortcutWidgetBundleIdentifier;
}

@property(readonly, nonatomic) NSString *applicationShortcutWidgetBundleIdentifier; // @synthesize applicationShortcutWidgetBundleIdentifier=_applicationShortcutWidgetBundleIdentifier;
@property(readonly, nonatomic) NSNumber *appStoreItemID; // @synthesize appStoreItemID=_appStoreItemID;
@property(readonly, nonatomic, getter=isSystemOrInternalApplication) BOOL systemOrInternalApplication; // @synthesize systemOrInternalApplication=_systemOrInternalApplication;
@property(readonly, nonatomic) NSURL *bundleURL; // @synthesize bundleURL=_bundleURL;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSString *applicationBundleIdentifier; // @synthesize applicationBundleIdentifier=_applicationBundleIdentifier;
// - (void).cxx_destruct;
- (void)_updateApplicationShortcutServiceFetchResult;
@property(readonly, nonatomic) NSArray *dynamicApplicationShortcutItems;
@property(readonly, nonatomic) NSArray *staticApplicationShortcutItems;
- (void)dealloc;
- (id)init;
- (id)initWithApplicationBundleIdentifier:(id)arg1;

@end

