//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface ACDLazyArray : NSArray
{
//    struct os_unfair_lock_s _initializationLock;
    id /* CDUnknownBlockType */ _initializationBlock;
    NSArray *_underlyingArray;
}

// - (void).cxx_destruct;
- (id)objectAtIndex:(NSUInteger)arg1;
- (NSUInteger)count;
- (id)initWithObjects:(const id )arg1 count:(NSUInteger)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithInitializer:(CDUnknownBlockType)arg1;
- (id)init;

@end

