//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVVideoComposition;

@interface ISPlaybackSettings : NSObject
{
    float _audioVolume;
    AVVideoComposition *_videoComposition;
}

@property(nonatomic) float audioVolume; // @synthesize audioVolume=_audioVolume;
@property(retain, nonatomic) AVVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
- (id)init;

@end
