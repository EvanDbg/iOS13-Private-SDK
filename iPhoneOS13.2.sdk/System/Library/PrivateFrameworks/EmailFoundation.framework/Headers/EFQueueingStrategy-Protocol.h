//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSMutableArray, NSString;

@protocol EFQueueingStrategy <NSObject>
@property(readonly, nonatomic) NSString *descriptionType;
- (void)dequeueObject:(id)arg1 buffer:(NSMutableArray *)arg2;
- (void)enqueueObject:(id)arg1 replaceIfExists:(BOOL)arg2 buffer:(NSMutableArray *)arg3;
@end

