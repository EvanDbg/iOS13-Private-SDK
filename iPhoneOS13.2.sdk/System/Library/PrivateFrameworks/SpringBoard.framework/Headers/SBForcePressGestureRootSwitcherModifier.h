//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBGestureRootSwitcherModifier.h>

@class SBSwitcherModifier;
@protocol SBFluidSwitcherScrollProviding;

@interface SBForcePressGestureRootSwitcherModifier : SBGestureRootSwitcherModifier
{
    SBSwitcherModifier<SBFluidSwitcherScrollProviding> *_multitaskingModifier;
}

// - (void).cxx_destruct;
- (id)transitionChildModifierForMainTransitionEvent:(id)arg1 activeGestureModifier:(id)arg2;
- (id)gestureChildModifierForGestureEvent:(id)arg1 activeTransitionModifier:(id)arg2;
- (long long)gestureType;
- (id)initWithStartingEnvironmentMode:(long long)arg1 multitaskingModifier:(id)arg2;

@end

