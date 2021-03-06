//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMFUnfairLock, NSMutableArray;

@interface MovingAverage : NSObject
{
    double _movingAverage;
    HMFUnfairLock *_lock;
    NSMutableArray *_queue;
    NSUInteger _windowSize;
}

@property(readonly, nonatomic) NSUInteger windowSize; // @synthesize windowSize=_windowSize;
@property(retain, nonatomic) NSMutableArray *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) HMFUnfairLock *lock; // @synthesize lock=_lock;
@property double movingAverage; // @synthesize movingAverage=_movingAverage;
// - (void).cxx_destruct;
- (double)movingAverageForInterval:(double)arg1 defaultValue:(double)arg2;
- (void)addNumber:(id)arg1;
- (id)initWithWindowSize:(NSUInteger)arg1;

@end

