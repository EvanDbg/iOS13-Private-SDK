//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_os_log, PRProximityEstimatorDelegate;

@interface PRProximityEstimator : NSObject
{
    BOOL usingST;
    NSObject<OS_os_log> *_logger;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSMutableDictionary *devicesMonitered;
    id <PRProximityEstimatorDelegate> _delegate;
}

@property(readonly) __weak id <PRProximityEstimatorDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)invokeDelegateBlock:(CDUnknownBlockType)arg1;
- (BOOL)addRssiSample:(double)arg1 channel:(unsigned int)arg2 forPeer:(id)arg3 withError:(id )arg4;
- (BOOL)stopEstimatingProximityFor:(id)arg1 withError:(id )arg2;
- (BOOL)startEstimatingProximityFor:(id)arg1 peerDeviceModel:(id)arg2 withError:(id )arg3;
- (id)initSingleThresholdEstmatorWithDelegate:(id)arg1 delegateQueue:(id)arg2;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;
- (id)init;

@end

