//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CAMFullscreenViewfinder;

@protocol CAMFullscreenViewfinderDelegate <NSObject>
- (void)fullscreenViewfinder:(CAMFullscreenViewfinder *)arg1 didChangeExpanded:(BOOL)arg2 forDrawerControlOfType:(long long)arg3 animated:(BOOL)arg4;
- (void)fullscreenViewfinder:(CAMFullscreenViewfinder *)arg1 didChangeControlDrawerVisibility:(BOOL)arg2;
- (void)fullscreenViewfinderDidCreatePortraitControls:(CAMFullscreenViewfinder *)arg1;
- (void)fullscreenViewfinderDidCreateControlDrawer:(CAMFullscreenViewfinder *)arg1;
@end

