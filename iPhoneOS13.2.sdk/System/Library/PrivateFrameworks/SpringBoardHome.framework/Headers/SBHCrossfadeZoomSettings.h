//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBHScaleZoomSettings.h>

@class SBFAnimationSettings;

@interface SBHCrossfadeZoomSettings : SBHScaleZoomSettings
{
    BOOL _morphWithZoom;
    SBFAnimationSettings *_morphSettings;
}

+ (id)settingsControllerModule;
@property(retain, nonatomic) SBFAnimationSettings *morphSettings; // @synthesize morphSettings=_morphSettings;
@property(nonatomic) BOOL morphWithZoom; // @synthesize morphWithZoom=_morphWithZoom;
// - (void).cxx_destruct;
- (id)effectiveMorphAnimationSettings;
- (void)setDefaultValues;

@end

