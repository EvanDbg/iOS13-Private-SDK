//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface PPXPCClientPipelinedBatchQueryContext : NSObject
{
    BOOL _stop;
    id /* CDUnknownBlockType */ _finalizeCall;
//    struct atomic_flag _calledFinalizeBlock;
    NSObject<OS_dispatch_queue> *_queue;
    id /* CDUnknownBlockType */ _handleBatch;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ handleBatch; // @synthesize handleBatch=_handleBatch;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
// - (void).cxx_destruct;
- (id)description;
- (void)finalizeCallWithSuccess:(BOOL)arg1 error:(id)arg2;
- (void)setFinalizeCall:(CDUnknownBlockType)arg1;

@end

