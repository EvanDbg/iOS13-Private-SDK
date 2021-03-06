//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface PXLIFOQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableArray *_internalQueue_pendingBlocks;
    NSObject<OS_dispatch_queue> *_targetQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *targetQueue; // @synthesize targetQueue=_targetQueue;
// - (void).cxx_destruct;
- (void)_executeNextPendingBlock;
- (void)dispatchAsync:(CDUnknownBlockType)arg1;
- (id)initWithTargetQueue:(id)arg1;

@end

