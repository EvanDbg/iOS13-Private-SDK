//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/_SBIconProgressTransition.h>

@class CAMediaTimingFunction;

@interface _SBIconProgressStateTransition : _SBIconProgressTransition
{
    double _totalElapsedTime;
    double _duration;
    CAMediaTimingFunction *_timingFunction;
    long long _fromState;
    long long _toState;
    double _fraction;
}

+ (Class)_classForTransitionFromState:(long long)arg1 toState:(long long)arg2;
+ (id)newTransitionFromState:(long long)arg1 toState:(long long)arg2;
// - (void).cxx_destruct;
- (void)_updateView:(id)arg1;
- (BOOL)isCompleteWithView:(id)arg1;
- (void)completeTransitionAndUpdateView:(id)arg1;
- (void)updateView:(id)arg1 withElapsedTime:(double)arg2;
- (id)_initWithFromState:(long long)arg1 toState:(long long)arg2;

@end

