//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, NUJobQueue;
@protocol OS_dispatch_queue;

@interface NUJobPriorityQueue : NSObject
{
    NSMutableArray *_jobs;
    BOOL _needSort;
    NUJobQueue *_owner;
    NSObject<OS_dispatch_queue> *_runQueue;
    NSObject<OS_dispatch_queue> *_stateQueue;
    BOOL _isRunning;
    NSString *_name;
}

@property(readonly) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
- (BOOL)_runNextJob;
- (void)_run;
- (void)_startRunning;
- (BOOL)start;
- (void)_sort;
- (void)_sortIfNeeded;
@property(readonly) long long count;
- (id)_popJob;
- (id)popJob;
- (BOOL)_removeJob:(id)arg1;
- (BOOL)removeJob:(id)arg1;
- (void)_addJob:(id)arg1;
- (void)addJob:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithName:(id)arg1 owner:(id)arg2 qos:(unsigned int)arg3;

@end

