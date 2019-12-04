//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NUScheduledQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    NSMutableArray *_items;
    double _timerLeeway;
    double _timerCoalesce;
}

@property double timerCoalesce; // @synthesize timerCoalesce=_timerCoalesce;
@property double timerLeeway; // @synthesize timerLeeway=_timerLeeway;
- (void)dispatchAt:(unsigned long long)arg1 queue:(id)arg2 block:(id /* block */)arg3;
- (void)dispatchAfter:(double)arg1 queue:(id)arg2 block:(id /* block */)arg3;
- (void)_dispatchItemsThrough:(unsigned long long)arg1;
- (void)_timerFired;
- (void)_stopTimer;
- (void)_startTimer;
- (void)_scheduleTimer:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;

@end
