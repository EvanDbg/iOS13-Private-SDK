//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/PTSettingsKeyObserver-Protocol.h>
#import <SpringBoard/SBViewControllerInteractiveAnimatedTransitioning-Protocol.h>

@class SBSearchBackdropView, SBSystemAnimationSettings, SPUIRemoteSearchViewController, UIView;
@protocol SBUISpotlightInitiating, SBViewControllerContextTransitioning;

@interface SBSpotlightTransitionAnimator : NSObject <PTSettingsKeyObserver, SBViewControllerInteractiveAnimatedTransitioning>
{
    SBSystemAnimationSettings *_settings;
    id <SBViewControllerContextTransitioning> _transitionContext;
    double _percentComplete;
    double _transitionDuration;
    NSUInteger _transitionToken;
    NSUInteger _operation;
    UIView *_touchSwallowingView;
    UIView *_containerView;
    UIView *_searchView;
    SBSearchBackdropView *_backdropView;
    BOOL _ownsBackdropView;
   struct {
//         CDStruct_e3385c33 start;
//         CDStruct_e3385c33 end;
    } _pulldownInterval;
    id <SBUISpotlightInitiating> _initiatingViewController;
    SPUIRemoteSearchViewController *_spotlightViewController;
}

// - (void).cxx_destruct;
- (double)_percentVisibleForPercentComplete:(double)arg1;
- (void)_prototypeSettingsChanged;
- (void)_restoreSpotlightHeaderToInitiatingViewControllerForCancellation:(BOOL)arg1;
- (void)_restoreSpotlightHeaderToInitiatingViewController;
- (void)_cleanupAfterAnimating:(BOOL)arg1;
- (void)_animateIntoSearch:(BOOL)arg1;
- (void)_finishInteractiveTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (void)_cancelInteractiveTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (void)_updateTransitionIntoSearch:(BOOL)arg1 percentComplete:(double)arg2;
- (void)_animateInteractiveTransition:(id)arg1;
- (void)_prepareToAnimate;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (BOOL)supportsRestarting;
- (double)percentComplete;
- (void)finishInteractiveTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (void)cancelTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (void)updateTransition:(id)arg1 withPercentComplete:(double)arg2;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (BOOL)shouldMoveIntoSearchOnCancel;
- (BOOL)shouldMoveIntoSearch;
- (id)init;

@end

