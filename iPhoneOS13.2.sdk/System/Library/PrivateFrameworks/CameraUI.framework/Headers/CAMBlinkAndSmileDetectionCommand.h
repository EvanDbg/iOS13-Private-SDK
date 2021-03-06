//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMBlinkAndSmileDetectionCommand : CAMCaptureCommand
{
    BOOL __blinkDetectionEnabled;
    BOOL __smileDetectionEnabled;
}

@property(readonly, nonatomic, getter=_isSmileDetectionEnabled) BOOL _smileDetectionEnabled; // @synthesize _smileDetectionEnabled=__smileDetectionEnabled;
@property(readonly, nonatomic, getter=_isBlinkDetectionEnabled) BOOL _blinkDetectionEnabled; // @synthesize _blinkDetectionEnabled=__blinkDetectionEnabled;
- (void)executeWithContext:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBlinkDetection:(BOOL)arg1 smileDetection:(BOOL)arg2;

@end

