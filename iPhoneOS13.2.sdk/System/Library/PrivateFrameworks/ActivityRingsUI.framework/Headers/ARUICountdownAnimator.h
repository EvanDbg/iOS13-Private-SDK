//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ARUICountdownTimeline, ARUICountdownView;
@protocol ARUICountdownAnimation, ARUICountdownAnimatorDelegate;

@interface ARUICountdownAnimator : NSObject
{
    struct {
        unsigned int willBeginAnimating:1;
        unsigned int willBeginAnimation:1;
        unsigned int performingAnimation:1;
        unsigned int completedAnimation:1;
        unsigned int didFinishAnimating:1;
    } _delegateFlags;
    _Bool _animating;
    _Bool _canceled;
    id <ARUICountdownAnimation> _currentAnimation;
    ARUICountdownTimeline *_timeline;
    ARUICountdownView *_countdownView;
    id <ARUICountdownAnimatorDelegate> _delegate;
}

@property(nonatomic) __weak id <ARUICountdownAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak ARUICountdownView *countdownView; // @synthesize countdownView=_countdownView;
@property(retain, nonatomic) ARUICountdownTimeline *timeline; // @synthesize timeline=_timeline;
- (void)_delegate_didFinishAnimating;
- (void)_delegate_completedAnimation:(id)arg1;
- (void)_delegate_performingAnimation:(id)arg1 withDuration:(double)arg2;
- (void)_delegate_willBeginAnimation:(id)arg1 afterDelay:(double)arg2;
- (void)_delegate_willBeginAnimating;
- (void)_applyCancelAnimationAtIndex:(unsigned long long)arg1;
- (void)cancelAnimations;
- (void)_applyAnimationAtIndex:(unsigned long long)arg1;
- (_Bool)isAnimating;
- (_Bool)canceled;
- (void)beginAnimations;
- (void)prepareToAnimate;
- (id)initWithTimeline:(id)arg1;

@end
