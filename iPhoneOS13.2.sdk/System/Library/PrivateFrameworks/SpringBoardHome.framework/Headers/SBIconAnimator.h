//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, SBFolderControllerAnimationContext, SBHIconAnimationSettings, SBValueConvergenceAnimator, UIView;
@protocol SBIconAnimationContaining, SBIconAnimatorDelegate;

@interface SBIconAnimator : NSObject
{
    double _fraction;
    double _hintFraction;
    BOOL _startAnimationAfterRotationEnds;
    BOOL _windowIsRotating;
    BOOL _cleanedUp;
    BOOL _animating;
    NSMutableArray *_pendedAnimationContexts;
    SBFolderControllerAnimationContext *_animationContext;
    BOOL _invalidated;
    id <SBIconAnimatorDelegate> _delegate;
    SBHIconAnimationSettings *_settings;
    SBValueConvergenceAnimator *_hintAnimator;
    UIView *_backgroundDarkeningView;
    id <SBIconAnimationContaining> _animationContainer;
}

@property(readonly, nonatomic) id <SBIconAnimationContaining> animationContainer; // @synthesize animationContainer=_animationContainer;
@property(retain, nonatomic) UIView *backgroundDarkeningView; // @synthesize backgroundDarkeningView=_backgroundDarkeningView;
@property(retain, nonatomic) SBValueConvergenceAnimator *hintAnimator; // @synthesize hintAnimator=_hintAnimator;
@property(nonatomic) double hintFraction; // @synthesize hintFraction=_hintFraction;
@property(nonatomic) BOOL invalidated; // @synthesize invalidated=_invalidated;
@property(retain, nonatomic) SBHIconAnimationSettings *settings; // @synthesize settings=_settings;
@property(nonatomic) __weak id <SBIconAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_windowFinishedRotating;
- (void)_invalidateCompletions;
- (void)_animateToFraction:(double)arg1 afterDelay:(double)arg2 withSharedCompletion:(CDUnknownBlockType)arg3;
- (NSUInteger)_numberOfSignificantAnimations;
- (void)_cleanupAnimation;
- (void)_setAnimationFraction:(double)arg1;
- (void)_prepareAnimation;
- (BOOL)_isDelayedForRotation;
- (void)_animateToFractionFromContext:(id)arg1;
- (void)_animateToFractionFromPendingContexts;
- (void)cleanup;
- (void)animateToFraction:(double)arg1 afterDelay:(double)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)hintToFraction:(double)arg1;
@property(readonly, nonatomic, getter=isAnimating) BOOL animating;
@property(nonatomic) double fraction;
- (void)prepare;
- (id)centralAnimationFactory;
@property(readonly, nonatomic) UIView *referenceView;
@property(readonly, nonatomic, getter=isPastPointOfNoReturn) BOOL pastPointOfNoReturn;
- (void)dealloc;
- (id)initWithAnimationContainer:(id)arg1;

@end

