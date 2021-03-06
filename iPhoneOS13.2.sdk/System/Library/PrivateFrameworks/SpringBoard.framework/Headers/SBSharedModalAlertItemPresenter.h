//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBBarSwipeAffordanceObserver-Protocol.h>
#import <SpringBoard/SBHomeGestureParticipantDelegate-Protocol.h>
#import <SpringBoard/SBModalViewControllerStackDelegate-Protocol.h>
#import <SpringBoard/SBReachabilityObserver-Protocol.h>
#import <SpringBoard/_SBAlertControllerDelegate-Protocol.h>

@class SBAlertItem, SBBarSwipeAffordanceView, SBFWindow, SBHomeGestureArbiter, SBHomeGestureParticipant, SBModalViewControllerStack, SBSystemGestureManager;
@protocol SBFLockOutStatusProvider;

@interface SBSharedModalAlertItemPresenter : NSObject <_SBAlertControllerDelegate, SBModalViewControllerStackDelegate, UIAlertControllerCoordinatedActionPerforming, SBBarSwipeAffordanceObserver, SBHomeGestureParticipantDelegate, SBReachabilityObserver>
{
    id <SBFLockOutStatusProvider> _lockOutProvider;
    SBSystemGestureManager *_systemGestureManager;
    SBHomeGestureParticipant *_homeGestureParticipant;
    SBHomeGestureArbiter *_homeGestureArbiter;
    SBBarSwipeAffordanceView *_barSwipeView;
    SBModalViewControllerStack *_modalViewControllerStack;
    SBFWindow *_window;
}

@property(retain, nonatomic, getter=_modalViewControllerStack, setter=_setModalViewControllerStack:) SBModalViewControllerStack *modalViewControllerStack; // @synthesize modalViewControllerStack=_modalViewControllerStack;
// - (void).cxx_destruct;
- (void)homeGesturePerformedForBarSwipeAffordanceView:(id)arg1;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1;
- (void)_updateBarSwipeViewWithAlertController:(id)arg1;
- (void)_updateHomeGestureParticipantWithItemCountAdjustment:(long long)arg1;
- (void)handleReachabilityYOffsetDidChange;
- (void)alertControllerDidDisappear:(id)arg1;
- (void)_performActionForAlertController:(id)arg1 invokeActionBlock:(CDUnknownBlockType)arg2 dismissControllerBlock:(CDUnknownBlockType)arg3;
- (void)modalViewControllerStack:(id)arg1 didDismissViewController:(id)arg2;
- (void)modalViewControllerStack:(id)arg1 willDismissViewController:(id)arg2 animated:(BOOL)arg3;
- (void)modalViewControllerStack:(id)arg1 didPresentViewController:(id)arg2;
- (void)modalViewControllerStack:(id)arg1 willPresentViewController:(id)arg2;
- (void)dismissAlertItem:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentAlertItem:(id)arg1 isLocked:(BOOL)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) SBAlertItem *currentlyPresentedAlertItem;
- (void)dealloc;
- (id)initWithLockOutProvider:(id)arg1 systemGestureManager:(id)arg2 homeGestureArbiter:(id)arg3;

@end

