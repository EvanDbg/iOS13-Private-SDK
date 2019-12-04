//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>
#import <SpringBoard/SBButtonEventsHandler-Protocol.h>
#import <SpringBoard/SBFIdleTimerBehaviorProviding-Protocol.h>
#import <SpringBoard/SBHomeGrabberDelegate-Protocol.h>
#import <SpringBoard/SBIdleTimerProviding-Protocol.h>

@class FBDisplayLayoutElement, NSNumber, NSString, SBDisplayItem, SBFHomeGrabberSettings, SBHomeGrabberView, SBKeyboardHomeAffordanceAssertion, UIStatusBar, UIStatusBarStyleRequest, UIView, UIWindow, _UILegibilitySettings;
@protocol SBIdleTimerCoordinating, SBTransientOverlayViewControllerDelegate;

@interface SBTransientOverlayViewController : UIViewController <SBHomeGrabberDelegate, BSDescriptionProviding, SBButtonEventsHandler, SBFIdleTimerBehaviorProviding, SBIdleTimerProviding>
{
    long long _appearanceUpdateIgnoreCount;
    UIView *_contentContainerView;
    long long _contentOverlayInsetUpdateIgnoreCount;
    SBHomeGrabberView *_grabberView;
    SBFHomeGrabberSettings *_grabberSettings;
    _Bool _hasPreservedInputViews;
    _Bool _isDisplayLayoutElementActive;
    SBKeyboardHomeAffordanceAssertion *_keyboardHomeAffordanceAssertion;
    UIWindow *_keyboardHomeAffordanceAssertionWindow;
    UIView *_presentationBackgroundView;
    long long _presentationPrefersHomeGrabberHidden;
    UIStatusBar *_statusBar;
    long long _keyboardVisible;
    _Bool _allowsStackingOverlayContentAbove;
    _Bool _contentOpaque;
    _Bool _prefersProximityDetectionEnabled;
    _Bool _prefersStatusBarActivityItemVisible;
    _Bool _shouldDisableBanners;
    _Bool _shouldDisableControlCenter;
    _Bool _shouldDisableReachability;
    _Bool _shouldDisableInteractiveScreenshotGesture;
    _Bool _shouldDisableSiri;
    _Bool _shouldPendAlertItems;
    _Bool _shouldDisableOrientationUpdates;
    _Bool _presentationAllowsHomeGrabberAutoHide;
    _Bool _presentationPrefersStatusBarHidden;
    int _preferredStatusBarStyleOverridesToCancel;
    int _pictureInPictureProcessIdentifier;
    UIView *_contentView;
    UIView *_backgroundView;
    _UILegibilitySettings *_preferredStatusBarLegibilitySettings;
    id <SBIdleTimerCoordinating> _idleTimerCoordinator;
    long long _containerOrientation;
    long long _preferredLockedGestureDismissalStyle;
    long long _preferredUnlockedGestureDismissalStyle;
    SBDisplayItem *_representedDisplayItem;
    FBDisplayLayoutElement *_displayLayoutElement;
    id <SBTransientOverlayViewControllerDelegate> _transientOverlayDelegate;
    UIStatusBarStyleRequest *_currentStatusBarStyleRequest;
    double _presentationContentCornerRadius;
    double _presentationHomeGrabberAlpha;
    double _presentationHomeGrabberAdditionalEdgeSpacing;
    struct CGAffineTransform _presentationContentTransform;
}

@property(readonly, nonatomic) _Bool presentationPrefersStatusBarHidden; // @synthesize presentationPrefersStatusBarHidden=_presentationPrefersStatusBarHidden;
@property(nonatomic) double presentationHomeGrabberAdditionalEdgeSpacing; // @synthesize presentationHomeGrabberAdditionalEdgeSpacing=_presentationHomeGrabberAdditionalEdgeSpacing;
@property(nonatomic) double presentationHomeGrabberAlpha; // @synthesize presentationHomeGrabberAlpha=_presentationHomeGrabberAlpha;
@property(nonatomic) struct CGAffineTransform presentationContentTransform; // @synthesize presentationContentTransform=_presentationContentTransform;
@property(nonatomic) double presentationContentCornerRadius; // @synthesize presentationContentCornerRadius=_presentationContentCornerRadius;
@property(nonatomic) _Bool presentationAllowsHomeGrabberAutoHide; // @synthesize presentationAllowsHomeGrabberAutoHide=_presentationAllowsHomeGrabberAutoHide;
@property(readonly, copy, nonatomic) UIStatusBarStyleRequest *currentStatusBarStyleRequest; // @synthesize currentStatusBarStyleRequest=_currentStatusBarStyleRequest;
@property(nonatomic) __weak id <SBTransientOverlayViewControllerDelegate> transientOverlayDelegate; // @synthesize transientOverlayDelegate=_transientOverlayDelegate;
@property(readonly, nonatomic) int pictureInPictureProcessIdentifier; // @synthesize pictureInPictureProcessIdentifier=_pictureInPictureProcessIdentifier;
@property(retain, nonatomic) FBDisplayLayoutElement *displayLayoutElement; // @synthesize displayLayoutElement=_displayLayoutElement;
@property(readonly, copy, nonatomic) SBDisplayItem *representedDisplayItem; // @synthesize representedDisplayItem=_representedDisplayItem;
@property(readonly, nonatomic) long long preferredUnlockedGestureDismissalStyle; // @synthesize preferredUnlockedGestureDismissalStyle=_preferredUnlockedGestureDismissalStyle;
@property(readonly, nonatomic) long long preferredLockedGestureDismissalStyle; // @synthesize preferredLockedGestureDismissalStyle=_preferredLockedGestureDismissalStyle;
@property(readonly, nonatomic) _Bool shouldDisableOrientationUpdates; // @synthesize shouldDisableOrientationUpdates=_shouldDisableOrientationUpdates;
@property(nonatomic) long long containerOrientation; // @synthesize containerOrientation=_containerOrientation;
@property(nonatomic) __weak id <SBIdleTimerCoordinating> idleTimerCoordinator; // @synthesize idleTimerCoordinator=_idleTimerCoordinator;
@property(readonly, nonatomic) _Bool shouldPendAlertItems; // @synthesize shouldPendAlertItems=_shouldPendAlertItems;
@property(readonly, nonatomic) _Bool shouldDisableSiri; // @synthesize shouldDisableSiri=_shouldDisableSiri;
@property(readonly, nonatomic) _Bool shouldDisableInteractiveScreenshotGesture; // @synthesize shouldDisableInteractiveScreenshotGesture=_shouldDisableInteractiveScreenshotGesture;
@property(readonly, nonatomic) _Bool shouldDisableReachability; // @synthesize shouldDisableReachability=_shouldDisableReachability;
@property(readonly, nonatomic) _Bool shouldDisableControlCenter; // @synthesize shouldDisableControlCenter=_shouldDisableControlCenter;
@property(readonly, nonatomic) _Bool shouldDisableBanners; // @synthesize shouldDisableBanners=_shouldDisableBanners;
@property(readonly, nonatomic) _Bool prefersStatusBarActivityItemVisible; // @synthesize prefersStatusBarActivityItemVisible=_prefersStatusBarActivityItemVisible;
@property(readonly, nonatomic) int preferredStatusBarStyleOverridesToCancel; // @synthesize preferredStatusBarStyleOverridesToCancel=_preferredStatusBarStyleOverridesToCancel;
@property(readonly, copy, nonatomic) _UILegibilitySettings *preferredStatusBarLegibilitySettings; // @synthesize preferredStatusBarLegibilitySettings=_preferredStatusBarLegibilitySettings;
@property(readonly, nonatomic) _Bool prefersProximityDetectionEnabled; // @synthesize prefersProximityDetectionEnabled=_prefersProximityDetectionEnabled;
@property(readonly, nonatomic, getter=isContentOpaque) _Bool contentOpaque; // @synthesize contentOpaque=_contentOpaque;
@property(readonly, nonatomic) _Bool allowsStackingOverlayContentAbove; // @synthesize allowsStackingOverlayContentAbove=_allowsStackingOverlayContentAbove;
@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void)_setDisplayLayoutElementActive:(_Bool)arg1;
- (void)_updateGrabberViewHiddenConfigurationAnimated:(_Bool)arg1;
- (void)_updateGrabberViewConfiguration;
- (void)_invalidateKeyboardHomeAffordanceAssertion;
- (struct CGRect)_currentStatusBarFrameForStyle:(long long)arg1;
- (void)_applyStatusBarStyleRequestWithInitialStatusBarSettings:(id)arg1;
- (id)_newHomeGrabberViewWithFrame:(struct CGRect)arg1;
- (void)_keyboardWillShowNotification:(id)arg1;
- (void)_keyboardWillHideNotification:(id)arg1;
- (void)removePresentationBackgroundView:(id)arg1;
- (void)addPresentationBackgroundView:(id)arg1;
- (void)setPresentationPrefersStatusBarHidden:(_Bool)arg1 initialStatusBarSettings:(id)arg2;
- (void)setPresentationPrefersHomeGrabberHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setNeedsSceneDeactivationUpdate;
- (void)setNeedsProximityDetectionUpdate;
- (void)setNeedsOrientationUpdatesDisabledUpdate;
- (void)setNeedsIdleTimerReset;
- (void)setNeedsGestureDismissalStyleUpdate;
- (void)setNeedsFeaturePolicyUpdate;
- (void)setNeedsContentOpaqueUpdate;
- (void)restoreInputViewsAnimated:(_Bool)arg1;
- (void)preserveInputViewsAnimated:(_Bool)arg1;
- (id)newTransientOverlayPresentationTransitionCoordinator;
- (id)newTransientOverlayDismissalTransitionCoordinator;
- (void)handlePictureInPictureDidBegin;
- (_Bool)handleDoubleHeightStatusBarTap;
- (void)endIgnoringContentOverlayInsetUpdates;
- (void)beginIgnoringContentOverlayInsetUpdates;
- (void)endIgnoringAppearanceUpdates;
- (void)beginIgnoringAppearanceUpdates;
@property(readonly, copy, nonatomic) id /* block */ sceneDeactivationPredicate;
@property(readonly, copy, nonatomic) NSNumber *preferredSceneDeactivationReasonValue;
@property(readonly, copy, nonatomic) NSString *preferredDisplayLayoutElementIdentifier;
@property(readonly, nonatomic) _Bool isIgnoringContentOverlayInsetUpdates;
@property(readonly, nonatomic) _Bool isIgnoringAppearanceUpdates;
@property(readonly, nonatomic) _Bool hasVisibleStatusBar;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (struct UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(_Bool *)arg2;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)setNeedsWhitePointAdaptivityStyleUpdate;
- (void)setNeedsUpdateOfHomeIndicatorAutoHidden;
- (void)setNeedsUpdateOfScreenEdgesDeferringSystemGestures;
- (void)setNeedsStatusBarAppearanceUpdate;
- (long long)preferredInterfaceOrientationForPresentation;
- (id)coordinatorRequestedIdleTimerBehavior:(id)arg1;
@property(readonly, nonatomic) long long idleWarnMode;
@property(readonly, nonatomic) long long idleTimerMode;
@property(readonly, nonatomic) long long idleTimerDuration;
- (_Bool)shouldAllowAutoHideForHomeGrabberView:(id)arg1;
- (_Bool)shouldAllowThinStyleForHomeGrabberView:(id)arg1;
- (double)additionalEdgeSpacingForHomeGrabberView:(id)arg1;
- (_Bool)handleVolumeDownButtonPress;
- (_Bool)handleVolumeUpButtonPress;
- (_Bool)handleLockButtonPress;
- (_Bool)handleHomeButtonLongPress;
- (_Bool)handleHomeButtonDoublePress;
- (_Bool)handleHomeButtonPress;
- (_Bool)handleHeadsetButtonPress:(_Bool)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) double customIdleExpirationTimeout;
@property(readonly, nonatomic) double customIdleWarningTimeout;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
