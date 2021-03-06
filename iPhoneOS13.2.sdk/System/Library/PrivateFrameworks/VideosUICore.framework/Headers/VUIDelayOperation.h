//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUICore/VUIAsynchronousOperation.h>

@class NSDate, NSObject;
@protocol OS_dispatch_source;

@interface VUIDelayOperation : VUIAsynchronousOperation
{
    NSObject<OS_dispatch_source> *_timerSource;
    BOOL _shouldIgnoreTolerance;
    double _delay;
    double _tolerance;
    NSDate *_fireDate;
}

+ (id)delayOperationWithFireDate:(id)arg1;
+ (id)delayOperationWithDelay:(double)arg1;
@property(nonatomic) BOOL shouldIgnoreTolerance; // @synthesize shouldIgnoreTolerance=_shouldIgnoreTolerance;
@property(readonly, copy, nonatomic) NSDate *fireDate; // @synthesize fireDate=_fireDate;
@property(readonly, nonatomic) double tolerance; // @synthesize tolerance=_tolerance;
@property(readonly, nonatomic) double delay; // @synthesize delay=_delay;
// - (void).cxx_destruct;
- (void)cancel;
- (void)executionDidBegin;
- (void)_cancelTimer;
- (void)dealloc;
- (id)init;
- (id)initWithFireDate:(id)arg1 tolerance:(double)arg2;
- (id)initWithDelay:(double)arg1 tolerance:(double)arg2;

@end

