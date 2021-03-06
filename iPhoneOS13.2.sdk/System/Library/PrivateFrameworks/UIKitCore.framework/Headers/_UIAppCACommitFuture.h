//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIAppCACommitFuture : NSObject
{
    id /* CDUnknownBlockType */ _block;
    BOOL _invalidated;
    BOOL _finished;
}

+ (id)scheduledPreCommitFuture:(CDUnknownBlockType)arg1;
+ (id)scheduledPostCommitFuture:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=_isFinished) BOOL finished; // @synthesize finished=_finished;
@property(readonly, nonatomic, getter=_isInvalidated) BOOL invalidated; // @synthesize invalidated=_invalidated;
// - (void).cxx_destruct;
- (void)_invoke;
- (void)invalidate;
- (id)initWithPhase:(NSUInteger)arg1 block:(CDUnknownBlockType)arg2;

@end

