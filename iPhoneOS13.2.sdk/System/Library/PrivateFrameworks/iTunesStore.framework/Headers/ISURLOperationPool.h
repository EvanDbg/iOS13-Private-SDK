//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ISOperationQueue;

@interface ISURLOperationPool : NSObject
{
    ISOperationQueue *_operationQueue;
}

@property(retain, nonatomic) ISOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (id)_poolOperationForOperation:(id)arg1 flags:(long long)arg2;
- (void)cancelOperation:(id)arg1;
- (void)addOperation:(id)arg1 withFlags:(long long)arg2;
- (void)dealloc;
- (id)init;

@end

