//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface LPYouTubeURLComponents : NSObject
{
    NSString *_videoID;
    double _startTime;
}

+ (id)formatAsYouTubeTime:(double)arg1;
+ (BOOL)parseYouTubeTimeFormat:(id)arg1 outTime:(double )arg2;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *videoID; // @synthesize videoID=_videoID;
// - (void).cxx_destruct;

@end

