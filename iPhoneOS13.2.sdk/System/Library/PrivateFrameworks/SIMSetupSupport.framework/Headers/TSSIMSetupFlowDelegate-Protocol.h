//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIViewController;

@protocol TSSIMSetupFlowDelegate <NSObject>
- (void)viewControllerDidComplete:(UIViewController *)arg1;

@optional
- (void)popViewController:(UIViewController *)arg1;
- (void)receivedResponse;
- (void)waitForResponse:(UIViewController *)arg1;
- (void)userDidTapCancel;
- (long long)signupUserConsentResponse;
- (void)setDefaultNavigationItems:(UIViewController *)arg1;
@end

