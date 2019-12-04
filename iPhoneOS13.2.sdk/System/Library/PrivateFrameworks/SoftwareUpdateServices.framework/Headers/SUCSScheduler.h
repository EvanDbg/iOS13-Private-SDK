//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _CDContextualChangeRegistration;
@protocol _CDContext;

@interface SUCSScheduler : NSObject
{
    id <_CDContext> _context;
    _CDContextualChangeRegistration *_registration;
}

+ (_Bool)_hasNetworkConnection;
+ (_Bool)_callInProgress;
+ (int)_batteryLevel;
+ (int)_getIntForKeyPath:(id)arg1;
+ (_Bool)_getBoolForKeyPath:(id)arg1;
+ (id)carplayPredicate:(_Bool)arg1;
+ (id)batteryLevelPredicate:(id)arg1;
+ (id)phoneCallPredicate:(_Bool)arg1;
+ (id)networkPredicate:(_Bool)arg1;
- (void)unregisterInstallationAlertAction;
- (void)registerInstallAlertConditionsWithHandler:(id /* block */)arg1;
- (void)dealloc;
- (id)init;

@end
