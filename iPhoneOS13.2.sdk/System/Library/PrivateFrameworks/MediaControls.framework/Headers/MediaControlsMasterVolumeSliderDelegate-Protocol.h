//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class MediaControlsMasterVolumeSlider, UITouch;

@protocol MediaControlsMasterVolumeSliderDelegate <NSObject>

@optional
- (BOOL)slider:(MediaControlsMasterVolumeSlider *)arg1 shouldCancelSnapWithTouch:(UITouch *)arg2;
- (BOOL)slider:(MediaControlsMasterVolumeSlider *)arg1 syncStateWillChangeFromState:(long long)arg2 toState:(long long)arg3;
- (BOOL)shouldEnableSyncingForSlider:(MediaControlsMasterVolumeSlider *)arg1;
@end

