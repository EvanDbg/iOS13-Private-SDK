//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface _DKSyncOperation : NSOperation
{
    _Atomic unsigned char _state;
}

+ (BOOL)_removesDependenciesAfterFinish;
- (void)endOperation;
- (void)startOperation;
- (void)start;
- (void)dealloc;
- (id)init;
- (BOOL)isFinished;
- (BOOL)isExecuting;

@end

