//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REPredictorObserver-Protocol.h>

@class REPeriodOfDayPredictor;

@protocol REPeriodOfDayPredictorDelegate <REPredictorObserver>

@optional
- (void)periodOfDayPredictorDidUpdatePredictedIntervals:(REPeriodOfDayPredictor *)arg1;
- (void)periodOfDayPredictorDidUpdateCurrentPeriodOfDay:(REPeriodOfDayPredictor *)arg1;
@end

