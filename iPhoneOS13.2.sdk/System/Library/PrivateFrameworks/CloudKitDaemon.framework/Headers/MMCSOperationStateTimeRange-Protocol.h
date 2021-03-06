//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDate;
@protocol MMCSOperationStateTimeRange;

@protocol MMCSOperationStateTimeRange <NSObject>
@property(readonly) double absoluteStop;
@property(readonly) double absoluteStart;
@property(readonly) double duration;
@property(readonly) NSDate *startDate;
@property(readonly) NSUInteger operationState;
- (long long)compareStopTime:(id <MMCSOperationStateTimeRange>)arg1;
- (long long)compareStartTime:(id <MMCSOperationStateTimeRange>)arg1;
@end

