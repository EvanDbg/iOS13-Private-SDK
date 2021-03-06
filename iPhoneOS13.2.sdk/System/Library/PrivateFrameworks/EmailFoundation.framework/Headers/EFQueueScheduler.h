//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailFoundation/EFScheduler-Protocol.h>

@protocol OS_dispatch_queue;

@interface EFQueueScheduler : NSObject <EFScheduler>
{
    NSObject<OS_dispatch_queue> *_queue;
}

// - (void).cxx_destruct;
- (id)performWithObject:(id)arg1;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2;
- (id)performCancelableBlock:(CDUnknownBlockType)arg1;
- (void)performVoucherPreservingBlock:(CDUnknownBlockType)arg1;
- (void)performSyncBlock:(CDUnknownBlockType)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1;
@property(readonly) BOOL prefersImmediateExecution;
- (id)initWithQueue:(id)arg1;
- (id)init;

@end

