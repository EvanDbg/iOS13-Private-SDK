//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class NSUUID, SBAppLayout, SBEntityRemovalDosidoSlideOutAnimationSettings, SBEntityRemovalToHomeSwitcherModifier, SBSwitcherModifier;

@interface SBEntityRemovalSlideOffscreenSwitcherModifier : SBTransitionSwitcherModifier
{
    BOOL _isSecondStage;
    NSUUID *_transitionID;
    SBAppLayout *_appLayout;
    SBSwitcherModifier *_multitaskingModifier;
    NSUInteger _direction;
    SBEntityRemovalToHomeSwitcherModifier *_toHomeRemovalModifier;
    SBEntityRemovalDosidoSlideOutAnimationSettings *_animationSettings;
}

// - (void).cxx_destruct;
- (id)layoutSettings;
- (double)scaleForIndex:(NSUInteger)arg1;
- (CGRect)frameForIndex:(NSUInteger)arg1;
- (BOOL)isIndexVisible:(NSUInteger)arg1;
- (id)handleTimerEvent:(id)arg1;
- (id)transitionWillUpdate;
- (id)transitionWillBegin;
- (void)didMoveToParentModifier:(id)arg1;
- (id)initWithTransitionID:(id)arg1 appLayout:(id)arg2 direction:(NSUInteger)arg3 animationSettings:(id)arg4 multitaskingModifier:(id)arg5;

@end

