//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, UIScreen, UITraitCollection, UIWindow;
@protocol UICoordinateSpace;

@protocol _UISceneUIWindowHosting <NSObject>
+ (BOOL)_hostsWindows;
@property(readonly, nonatomic) UITraitCollection *_traitCollection;
@property(readonly, nonatomic) id <UICoordinateSpace> _coordinateSpace;
@property(readonly, nonatomic) long long _interfaceOrientation;
@property(readonly, nonatomic) UIScreen *_screen;
- (NSArray *)_allWindowsIncludingInternalWindows:(BOOL)arg1 onlyVisibleWindows:(BOOL)arg2;
- (void)_windowUpdatedProperties:(UIWindow *)arg1;
- (void)_windowUpdatedVisibility:(UIWindow *)arg1;
- (void)_updateVisibleWindowOrderWithTest:(BOOL (^)(UIWindow *))arg1;
- (void)_detachWindow:(UIWindow *)arg1;
- (void)_attachWindow:(UIWindow *)arg1;
@end

