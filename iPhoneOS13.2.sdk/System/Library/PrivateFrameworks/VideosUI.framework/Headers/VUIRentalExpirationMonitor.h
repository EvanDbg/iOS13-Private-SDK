//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSTimer, TVPStateMachine;

@interface VUIRentalExpirationMonitor : NSObject
{
    TVPStateMachine *_stateMachine;
    NSDate *_dateOfLastRentalExpirationHandling;
    NSTimer *_earliestExpirationTimer;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSTimer *earliestExpirationTimer; // @synthesize earliestExpirationTimer=_earliestExpirationTimer;
@property(retain, nonatomic) NSDate *dateOfLastRentalExpirationHandling; // @synthesize dateOfLastRentalExpirationHandling=_dateOfLastRentalExpirationHandling;
@property(retain, nonatomic) TVPStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
// - (void).cxx_destruct;
- (void)_registerStateMachineHandlers;
- (void)_expirationTimerDidFire:(id)arg1;
- (void)_libraryContentsDidChange:(id)arg1;
- (void)_isPlaybackUIBeingShownDidChange:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)startMonitoring;
- (void)dealloc;
- (id)init;

@end

