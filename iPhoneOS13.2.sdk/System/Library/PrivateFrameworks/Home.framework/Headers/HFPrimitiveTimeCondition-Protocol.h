//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HFTimeCondition;

@protocol HFPrimitiveTimeCondition <NSObject>
@property(readonly, nonatomic) NSUInteger comparisonType;
- (long long)compare:(HFTimeCondition *)arg1;
@end

