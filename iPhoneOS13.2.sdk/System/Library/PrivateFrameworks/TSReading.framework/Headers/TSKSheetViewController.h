//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//



@class NSLayoutConstraint;
@protocol TSKSheetViewControllerDelegate;

@interface TSKSheetViewController : UIViewController <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, UIGestureRecognizerDelegate>
{
    UIViewController *_contentViewController;
    NSLayoutConstraint *_contentVerticalConstraint;
    BOOL _isContentHidden;
    id <TSKSheetViewControllerDelegate> _delegate;
}

@property(nonatomic) id <TSKSheetViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setContentHidden:(BOOL)arg1;
- (void)animateDismissWithContext:(id)arg1;
- (void)animateShowWithContext:(id)arg1;
- (BOOL)isShowingForTransitionContext:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (BOOL)shouldAutorotate;
- (void)didTapView;
- (void)dismissSheetAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithContentViewController:(id)arg1 allowTapsOutsideContentView:(BOOL)arg2;
- (id)initWithContentViewController:(id)arg1;

@end

