//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PersonalizationPortraitInternals/PPFeedbackAccepting-Protocol.h>

@class NSArray, NSDate, NSString;

@protocol PPEventServerProtocol <PPFeedbackAccepting>
- (void)sendRTCLogsWithWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)interactionSummaryMetricsWithQueryId:(NSUInteger)arg1;
- (void)logEventInteractionForEventWithEventIdentifier:(NSString *)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3;
- (void)eventHighlightsFrom:(NSDate *)arg1 to:(NSDate *)arg2 options:(int)arg3 queryId:(NSUInteger)arg4;
- (void)resolveEventNameRecordChanges:(NSArray *)arg1 client:(NSString *)arg2 queryId:(NSUInteger)arg3;
- (void)eventNameRecordsForClient:(NSString *)arg1 queryId:(NSUInteger)arg2;
@end

