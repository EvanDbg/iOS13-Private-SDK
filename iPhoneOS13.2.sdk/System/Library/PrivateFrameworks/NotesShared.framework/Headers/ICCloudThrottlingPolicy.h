//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICCloudThrottlingLevel, NSArray, NSDate, NSTimer;

@interface ICCloudThrottlingPolicy : NSObject
{
    NSArray *_throttlingLevels;
    double _resetInterval;
    NSUInteger _currentBatchCount;
    NSUInteger _currentLevelIndex;
    NSDate *_policyStartDate;
    NSTimer *_policyResetTimer;
}

+ (void)resetSavedPolicyState;
@property(retain) NSTimer *policyResetTimer; // @synthesize policyResetTimer=_policyResetTimer;
@property(retain) NSDate *policyStartDate; // @synthesize policyStartDate=_policyStartDate;
@property(nonatomic) NSUInteger currentLevelIndex; // @synthesize currentLevelIndex=_currentLevelIndex;
@property(nonatomic) NSUInteger currentBatchCount; // @synthesize currentBatchCount=_currentBatchCount;
@property double resetInterval; // @synthesize resetInterval=_resetInterval;
@property(retain, nonatomic) NSArray *throttlingLevels; // @synthesize throttlingLevels=_throttlingLevels;
// - (void).cxx_destruct;
- (void)savePolicyState;
- (void)loadSavedPolicyState;
- (void)startPolicyResetTimer;
- (void)resetPolicy;
@property(readonly, nonatomic) ICCloudThrottlingLevel *currentLevel;
@property(readonly, nonatomic) double batchInterval;
- (void)changeLevelIfNecessary;
- (void)incrementBatchCount;
- (void)dealloc;
- (id)initWithThrottlingLevels:(id)arg1 resetInterval:(double)arg2;
- (id)init;

@end

