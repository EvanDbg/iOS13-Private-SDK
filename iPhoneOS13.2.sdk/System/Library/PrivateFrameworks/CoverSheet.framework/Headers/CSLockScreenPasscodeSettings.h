//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrototypeTools/PTSettings.h>

@interface CSLockScreenPasscodeSettings : PTSettings
{
    double _lightenSourceOverColorWhite;
    double _lightenSourceOverColorAlpha;
    double _plusDColorWhite;
    double _plusDColorAlpha;
}

+ (id)settingsControllerModule;
@property(nonatomic) double plusDColorAlpha; // @synthesize plusDColorAlpha=_plusDColorAlpha;
@property(nonatomic) double plusDColorWhite; // @synthesize plusDColorWhite=_plusDColorWhite;
@property(nonatomic) double lightenSourceOverColorAlpha; // @synthesize lightenSourceOverColorAlpha=_lightenSourceOverColorAlpha;
@property(nonatomic) double lightenSourceOverColorWhite; // @synthesize lightenSourceOverColorWhite=_lightenSourceOverColorWhite;
- (void)setDefaultValues;

@end

