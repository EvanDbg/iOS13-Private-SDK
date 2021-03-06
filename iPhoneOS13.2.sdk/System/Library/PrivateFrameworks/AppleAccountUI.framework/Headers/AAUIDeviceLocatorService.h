//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface AAUIDeviceLocatorService : NSObject
{
    NSUInteger _lastKnownState;
    BOOL _hasAttemptedToFetchState;
    BOOL _wantsToEnable;
    NSObject<OS_dispatch_queue> *_stateUpdateQueue;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (BOOL)shouldEnable;
- (void)setShouldEnable:(BOOL)arg1;
- (void)disableInContext:(NSUInteger)arg1 withWipeToken:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)disableInContext:(NSUInteger)arg1 withWipeToken:(id)arg2;
- (void)enableInContext:(NSUInteger)arg1 completion:(CDUnknownBlockType)arg2;
- (void)enableInContext:(NSUInteger)arg1;
- (void)refreshCurrentState:(CDUnknownBlockType)arg1;
- (void)_updateStateAndNotify:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)isStateKnown;
- (BOOL)isChangingState;
- (BOOL)isEnabled;
- (id)init;

@end

