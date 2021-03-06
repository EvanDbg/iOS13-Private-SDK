//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//



@class UIImageView, UIView, UIVisualEffectView;

@interface PKNavigationController : UINavigationController <UINavigationControllerDelegate>
{
    BOOL _hasExplicitlyDefinedSupportedInterfaceOrientations;
    NSUInteger _explicitlyDefinedSupportedInterfaceOrientations;
    UIView *_backgroundView;
    UIImageView *_wallpaperView;
    UIVisualEffectView *_blurView;
    BOOL _hasStatusBarStyleOverride;
    long long _statusBarStyleOverride;
}

// - (void).cxx_destruct;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (NSUInteger)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)setSupportedInterfaceOrientations:(NSUInteger)arg1;
- (void)_updateWithWallpaperImage:(id)arg1;
- (void)setNeedsNavigationBarUpdate;
- (void)setupWallpaper;
- (void)setupBackgroundViewWithBlurEffect:(long long)arg1;
- (void)_updateBarAppearanceForViewController:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (BOOL)_canShowWhileLocked;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (id)initWithRootViewController:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

@end

