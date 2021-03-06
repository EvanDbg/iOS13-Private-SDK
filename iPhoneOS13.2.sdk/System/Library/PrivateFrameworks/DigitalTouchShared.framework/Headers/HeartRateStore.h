//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKHealthStore, HKQuery;

@interface HeartRateStore : NSObject
{
    BOOL _heartRateEnabled;
    HKHealthStore *_healthStore;
    HKQuery *_heartRateQuery;
    NSUInteger _recentHeartRate;
    double _recentHeartRateTime;
}

+ (id)sharedStore;
@property(nonatomic) double recentHeartRateTime; // @synthesize recentHeartRateTime=_recentHeartRateTime;
@property(nonatomic) NSUInteger recentHeartRate; // @synthesize recentHeartRate=_recentHeartRate;
@property(retain, nonatomic) HKQuery *heartRateQuery; // @synthesize heartRateQuery=_heartRateQuery;
// - (void).cxx_destruct;
- (void)_updateHeartRateEnabled;
- (void)_updateHeartRateWithCompletion:(CDUnknownBlockType)arg1;
- (void)recentHeartRateWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end

