//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/CSApplicationInforming-Protocol.h>

@class NSHashTable;

@interface SBDashBoardApplicationInformer : NSObject <CSApplicationInforming>
{
    NSHashTable *_observers;
}

// - (void).cxx_destruct;
- (void)_screenTimeNotificationPolicyDidChange:(id)arg1;
- (void)_installedApplicationsDidChange:(id)arg1;
- (void)removeApplicationInformationObserver:(id)arg1;
- (void)addApplicationInformationObserver:(id)arg1;
- (BOOL)_isBundleIdentifierBlockedForCommunicationPolicy:(id)arg1;
- (BOOL)_isBundleIdentifierBlockedForScreenTimeExpiration:(id)arg1;
- (BOOL)shouldScreenTimeSuppressNotificationsForBundleIdentifier:(id)arg1;
- (BOOL)isBundleIdentifierWallet:(id)arg1;
- (BOOL)isBundleIdentifierClock:(id)arg1;
- (void)dealloc;
- (id)init;

@end

