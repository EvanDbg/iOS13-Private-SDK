//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSTimer;

__attribute__((visibility("hidden")))
@interface VUINowPlayingTimerFeatureInfo : NSObject
{
    NSTimer *_repeatingTimer;
    NSTimer *_oneTimeTimer;
    NSDate *_startDate;
    NSDate *_backgroundedDate;
}

@property(retain, nonatomic) NSDate *backgroundedDate; // @synthesize backgroundedDate=_backgroundedDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) __weak NSTimer *oneTimeTimer; // @synthesize oneTimeTimer=_oneTimeTimer;
@property(nonatomic) __weak NSTimer *repeatingTimer; // @synthesize repeatingTimer=_repeatingTimer;
// - (void).cxx_destruct;

@end

