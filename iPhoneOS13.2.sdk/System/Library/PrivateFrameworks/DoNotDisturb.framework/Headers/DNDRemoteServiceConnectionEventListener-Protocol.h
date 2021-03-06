//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class DNDBehaviorSettings, DNDBypassSettings, DNDModeAssertion, DNDModeAssertionInvalidation, DNDRemoteServiceConnection, DNDScheduleSettings, DNDStateUpdate, NSString;

@protocol DNDRemoteServiceConnectionEventListener <NSObject>
@property(readonly, copy, nonatomic) NSString *clientIdentifier;

@optional
- (void)remoteService:(DNDRemoteServiceConnection *)arg1 didReceiveUpdatedScheduleSettings:(DNDScheduleSettings *)arg2;
- (void)remoteService:(DNDRemoteServiceConnection *)arg1 didReceiveUpdatedPhoneCallBypassSettings:(DNDBypassSettings *)arg2;
- (void)remoteService:(DNDRemoteServiceConnection *)arg1 didReceiveUpdatedBehaviorSettings:(DNDBehaviorSettings *)arg2;
- (void)remoteService:(DNDRemoteServiceConnection *)arg1 didChangeActiveModeAssertion:(DNDModeAssertion *)arg2 invalidation:(DNDModeAssertionInvalidation *)arg3;
- (void)remoteService:(DNDRemoteServiceConnection *)arg1 didReceiveDoNotDisturbStateUpdate:(DNDStateUpdate *)arg2;
- (void)didReceiveConnectionInvalidatedEventForRemoteService:(DNDRemoteServiceConnection *)arg1;
- (void)didReceiveConnectionInterruptedEventForRemoteService:(DNDRemoteServiceConnection *)arg1;
@end

