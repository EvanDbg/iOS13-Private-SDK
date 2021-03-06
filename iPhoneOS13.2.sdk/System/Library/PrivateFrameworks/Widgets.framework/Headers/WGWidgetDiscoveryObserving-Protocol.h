//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSSet, NSString, WGWidgetDiscoveryController;

@protocol WGWidgetDiscoveryObserving <NSObject>

@optional
- (void)widgetDiscoveryControllerSignificantWidgetsChange:(WGWidgetDiscoveryController *)arg1;
- (void)widgetDiscoveryController:(WGWidgetDiscoveryController *)arg1 orderDidChangeForWidgetIdentifiers:(NSSet *)arg2;
- (void)widgetDiscoveryController:(WGWidgetDiscoveryController *)arg1 widgetWithIdentifier:(NSString *)arg2 shouldBecomeHiddenInGroup:(NSString *)arg3;
- (void)widgetDiscoveryController:(WGWidgetDiscoveryController *)arg1 widgetWithIdentifier:(NSString *)arg2 shouldBecomeVisibleInGroup:(NSString *)arg3;
@end

