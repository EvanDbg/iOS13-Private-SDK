//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProactiveML/PMLPlistAndChunksSerializableProtocol-Protocol.h>

@class AWDProactiveModelFittingEvalMetrics, AWDProactiveModelFittingMinibatchStats, NSDictionary;

@protocol PMLEvaluationTrackerProtocol <PMLPlistAndChunksSerializableProtocol>
- (NSDictionary *)trackEvaluationMetrics:(AWDProactiveModelFittingEvalMetrics *)arg1 minibatchStats:(AWDProactiveModelFittingMinibatchStats *)arg2;
@end

