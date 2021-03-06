//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSKThreadDispatcher.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface TSKLowPriorityThreadDispatcher : TSKThreadDispatcher
{
    NSObject<OS_dispatch_queue> *_queue;
    int _suspendCount;
}

+ (id)allocWithZone:(_NSZone )arg1;
+ (id)sharedLowPriorityDispatcher;
+ (id)_singletonAlloc;
- (id)p_dispatchQueue;
- (void)resume;
- (void)suspend;
@property(readonly, getter=isSuspended) BOOL suspended;
- (id)init;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)autorelease;
- (oneway void)release;
- (NSUInteger)retainCount;
- (id)retain;

@end

