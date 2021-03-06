//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface PLInstrumentedBlockOperation : NSBlockOperation
{
    BOOL _postambleAdded;
    double _creationTime;
    double _executionStartTime;
    double _executionEndTime;
}

+ (id)blockOperationWithBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) BOOL postambleAdded; // @synthesize postambleAdded=_postambleAdded;
@property(nonatomic) double executionEndTime; // @synthesize executionEndTime=_executionEndTime;
@property(nonatomic) double executionStartTime; // @synthesize executionStartTime=_executionStartTime;
@property(nonatomic) double creationTime; // @synthesize creationTime=_creationTime;
@property(readonly, nonatomic) double timeSpentWaitingInQueue; // @dynamic timeSpentWaitingInQueue;
@property(readonly, nonatomic) double executionTime; // @dynamic executionTime;
- (id)description;
- (void)addExecutionBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end

