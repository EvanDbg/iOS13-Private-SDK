//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SBModelessSyncController : NSObject
{
    BOOL _isAppSyncing;
    BOOL _isSyncing;
    int _syncRegistrationToken;
    int _iCloudRestoreToken;
    BOOL _restoringFromICloud;
    BOOL _isAutoSyncing;
    BOOL _isWirelessSyncing;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) BOOL isWirelessSyncing; // @synthesize isWirelessSyncing=_isWirelessSyncing;
@property(readonly, nonatomic) BOOL isAutoSyncing; // @synthesize isAutoSyncing=_isAutoSyncing;
@property(readonly, nonatomic) BOOL isSyncing; // @synthesize isSyncing=_isSyncing;
@property(readonly, nonatomic) BOOL isAppSyncing; // @synthesize isAppSyncing=_isAppSyncing;
- (void)_endObservingICloudRestoreStatus;
- (void)_beginObservingICloudRestoreStatus;
- (void)_iCloudStatusChanged;
@property(readonly, nonatomic) BOOL isRestoringFromICloud;
- (void)_updateIconsForStateChange;
- (void)_setAppSyncState:(BOOL)arg1;
- (void)_appSyncStateChanged;
- (void)gotLowBatteryWarning;
- (void)endMonitoring;
- (void)beginMonitoring;
- (void)dealloc;
- (id)init;

@end

