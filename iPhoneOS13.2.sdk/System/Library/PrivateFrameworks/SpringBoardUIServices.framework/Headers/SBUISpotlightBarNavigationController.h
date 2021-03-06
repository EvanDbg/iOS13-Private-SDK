//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//



@class UIViewController, _UILegibilitySettings;
@protocol SBUISearchBarControlling;

@interface SBUISpotlightBarNavigationController : UINavigationController <UINavigationControllerDelegate>
{
    BOOL _pullingToSearch;
    UIViewController<SBUISearchBarControlling> *_searchBarViewController;
    _UILegibilitySettings *_legibilitySettings;
}

@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(nonatomic, getter=isPullingToSearch) BOOL pullingToSearch; // @synthesize pullingToSearch=_pullingToSearch;
@property(retain, nonatomic) UIViewController<SBUISearchBarControlling> *searchBarViewController; // @synthesize searchBarViewController=_searchBarViewController;
// - (void).cxx_destruct;
- (double)_statusBarHeightAdjustmentForCurrentOrientation;
- (BOOL)_canShowWhileLocked;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
@property(getter=isNavigationBarBottomTrailingCornerRounded) BOOL navigationBarBottomTrailingCornerRounded;
- (void)setNavigationBarBlurProgress:(double)arg1 animated:(BOOL)arg2;
- (id)initWithRootViewController:(id)arg1;
- (id)initWithRootViewController:(id)arg1 searchBarViewController:(id)arg2;

@end

