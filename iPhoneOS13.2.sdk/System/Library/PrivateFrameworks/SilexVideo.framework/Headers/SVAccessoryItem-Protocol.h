//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIView;
@protocol SVVideoAccessoryItemDisplayModeTransitioning;

@protocol SVAccessoryItem <NSObject>
@property(nonatomic) NSUInteger displayMode;
@property(readonly, nonatomic) UIView *view;

@optional
- (void)willTransitionToDisplayMode:(NSUInteger)arg1 withTransitionCoordinator:(id <SVVideoAccessoryItemDisplayModeTransitioning>)arg2;
@end

