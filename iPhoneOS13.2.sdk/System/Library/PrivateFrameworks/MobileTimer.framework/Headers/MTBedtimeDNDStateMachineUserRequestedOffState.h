//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MobileTimer/MTBedtimeDNDStateMachineOffState.h>

@class NSDate;

@interface MTBedtimeDNDStateMachineUserRequestedOffState : MTBedtimeDNDStateMachineOffState
{
    NSDate *_keepOffUntilDate;
}

@property(retain, nonatomic) NSDate *keepOffUntilDate; // @synthesize keepOffUntilDate=_keepOffUntilDate;
- (void)updateState:(_Bool)arg1;
- (void)didEnterWithPreviousState:(id)arg1;
- (_Bool)isEqualToState:(id)arg1;
- (id)initWithKeepOffUntilDate:(id)arg1 stateMachine:(id)arg2;

@end
