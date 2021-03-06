//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBTransientOverlayViewController.h>

#import <SpringBoard/CSExternalBehaviorProviding-Protocol.h>

@class NSString, SBLogoutDebugBlockingViewController, SBLogoutProgressView, SBMultiUserDefaults, SBPlatformController, SBTransientOverlayWallpaperEffectView, UMUser;
@protocol SBLogoutProgressDataSource, SBLogoutProgressDelegate;

@interface SBLogoutProgressTransientOverlayViewController : SBTransientOverlayViewController <CSExternalBehaviorProviding>
{
    SBLogoutDebugBlockingViewController *_debugTasksViewController;
    SBMultiUserDefaults *_multiUserDefaults;
    SBPlatformController *_platformController;
    SBLogoutProgressView *_progressView;
    SBTransientOverlayWallpaperEffectView *_wallpaperEffectView;
    id <SBLogoutProgressDataSource> _dataSource;
    UMUser *_user;
    id <SBLogoutProgressDelegate> _delegate;
}

@property(nonatomic) __weak id <SBLogoutProgressDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UMUser *user; // @synthesize user=_user;
@property(nonatomic) __weak id <SBLogoutProgressDataSource> dataSource; // @synthesize dataSource=_dataSource;
// - (void).cxx_destruct;
- (void)_updateData;
- (void)_updateLegibility;
- (id)_legibilitySettings;
- (void)_updateDebugTasksViewControllerSizeFromSize:(CGSize)arg1;
- (BOOL)_supportsDebugUI;
@property(readonly, nonatomic) long long proximityDetectionMode;
- (long long)idleWarnMode;
- (long long)idleTimerMode;
- (long long)idleTimerDuration;
@property(readonly, nonatomic) NSUInteger restrictedCapabilities;
@property(readonly, nonatomic) long long notificationBehavior;
@property(readonly, nonatomic) long long scrollingStrategy;
@property(readonly, nonatomic) long long participantState;
@property(readonly, copy, nonatomic) NSString *coverSheetIdentifier;
- (void)setContainerOrientation:(long long)arg1;
- (id)newTransientOverlayPresentationTransitionCoordinator;
- (id)newTransientOverlayDismissalTransitionCoordinator;
- (BOOL)isContentOpaque;
- (BOOL)_canShowWhileLocked;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(BOOL)arg1;
- (long long)preferredStatusBarStyle;
- (void)prepareForRestart;
- (void)refreshData;
- (id)initWithUserAccount:(id)arg1;

@end

