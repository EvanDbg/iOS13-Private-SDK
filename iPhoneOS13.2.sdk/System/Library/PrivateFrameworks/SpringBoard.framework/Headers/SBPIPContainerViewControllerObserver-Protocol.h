//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SBPIPContainerViewController;

@protocol SBPIPContainerViewControllerObserver <NSObject>

@optional
- (void)containerViewControllerRequiredInterfaceOrientationDidChange:(SBPIPContainerViewController *)arg1;
- (void)containerViewControllerRequiredInterfaceOrientationWillChange:(SBPIPContainerViewController *)arg1;
- (void)containerViewControllerRelinquishInterfaceOrientationLock:(SBPIPContainerViewController *)arg1;
- (void)containerViewControllerAcquireInterfaceOrientationLock:(SBPIPContainerViewController *)arg1;
@end

