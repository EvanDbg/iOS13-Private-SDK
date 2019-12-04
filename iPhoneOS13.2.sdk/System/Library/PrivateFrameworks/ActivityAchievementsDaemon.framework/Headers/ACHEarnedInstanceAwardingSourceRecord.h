//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivityAchievementsDaemon/ACHDataStorePropertyProviding-Protocol.h>

@class ACHDataStore, ACHEarnedInstanceStore, NSArray, NSDate, NSDateInterval, NSDictionary, NSOperationQueue, NSString;
@protocol ACHEarnedInstanceAwarding, OS_dispatch_queue;

@interface ACHEarnedInstanceAwardingSourceRecord : NSObject <ACHDataStorePropertyProviding>
{
    ACHDataStore *_dataStore;
    ACHEarnedInstanceStore *_earnedInstanceStore;
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSDateInterval *_lastScheduledEvaluationInterval;
    NSDateInterval *_lastCompletedEvaluationInterval;
    id <ACHEarnedInstanceAwarding> _source;
    NSDate *_registrationDate;
}

@property(readonly, nonatomic) NSDate *registrationDate; // @synthesize registrationDate=_registrationDate;
@property(readonly, nonatomic) id <ACHEarnedInstanceAwarding> source; // @synthesize source=_source;
@property(readonly, copy) NSString *description;
- (void)dataStoreDidClearAllProperties:(id)arg1 completion:(id /* block */)arg2;
@property(retain, nonatomic) NSDictionary *dataStoreProperties;
@property(readonly, nonatomic) NSArray *dataStorePropertyKeys;
@property(readonly, nonatomic) NSString *uniqueName;
- (void)addEvaluationOperationWithDateInterval:(id)arg1 databaseContext:(id)arg2 evaluationBlock:(id /* block */)arg3 completion:(id /* block */)arg4;
@property(readonly, nonatomic) NSDateInterval *lastScheduledEvaluationInterval;
@property(readonly, nonatomic) NSDateInterval *lastCompletedEvaluationInterval;
- (void)cancelAllEvaluationOperations;
- (id)initWithSource:(id)arg1 earnedInstanceStore:(id)arg2 dataStore:(id)arg3 registrationDate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
