//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SFSiriWordTimingInfo;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFSiriWordTimingPlayer : NSObject
{
    NSObject<OS_dispatch_source> *_timer;
    NSUInteger _wordIndex;
    SFSiriWordTimingInfo *_wordInfo;
    unsigned int _flags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    double _startTime;
    NSString *_text;
    id /* CDUnknownBlockType */ _wordHandler;
    NSArray *_wordTimings;
}

@property(copy, nonatomic) NSArray *wordTimings; // @synthesize wordTimings=_wordTimings;
@property(copy, nonatomic) id /* CDUnknownBlockType */ wordHandler; // @synthesize wordHandler=_wordHandler;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
// - (void).cxx_destruct;
- (void)_processWord;
- (void)_processNextWord;
- (void)invalidate;
- (void)activate;
- (id)init;

@end

