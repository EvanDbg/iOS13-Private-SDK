//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol SBIdleTimer;

@protocol SBIdleTimerObserving <NSObject>

@optional
- (void)idleTimerDidWarn:(id <SBIdleTimer>)arg1;
- (void)idleTimerDidResetForUserAttention:(id <SBIdleTimer>)arg1;
- (void)idleTimerDidExpire:(id <SBIdleTimer>)arg1;
- (void)idleTimerDidRefresh:(id <SBIdleTimer>)arg1;
@end

