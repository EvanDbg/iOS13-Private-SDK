//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SUMenuViewController, SUProtocolButton;

@protocol SUMenuViewControllerDelegate <NSObject>

@optional
- (void)menuViewControllerDidCancel:(SUMenuViewController *)arg1;
- (void)menuViewController:(SUMenuViewController *)arg1 didTapButton:(SUProtocolButton *)arg2;
- (void)menuViewController:(SUMenuViewController *)arg1 didSelectItemAtIndex:(long long)arg2;
@end

