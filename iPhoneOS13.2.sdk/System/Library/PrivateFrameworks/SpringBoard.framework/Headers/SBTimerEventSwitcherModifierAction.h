//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifierAction.h>

@class NSString;

@interface SBTimerEventSwitcherModifierAction : SBSwitcherModifierAction
{
    NSString *_reason;
}

@property(readonly, nonatomic) NSString *reason; // @synthesize reason=_reason;
// - (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithDelay:(double)arg1 validator:(CDUnknownBlockType)arg2 reason:(id)arg3;
- (long long)type;

@end

