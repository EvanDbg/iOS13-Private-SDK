//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CDPDCircleStateObserver, NSArray;
@protocol CDPDCircleDelegate, CDPDCircleProxy, CDPStateUIProviderInternal, OS_dispatch_queue;

@interface CDPDCircleController : NSObject
{
    CDPDCircleStateObserver *_circleJoinObserver;
    NSObject<OS_dispatch_queue> *_requestSynchronizationQueue;
    NSObject<OS_dispatch_queue> *_retryQueue;
    NSUInteger _cliqueStatusRetryCount;
    NSArray *_retryIntervals;
    id <CDPStateUIProviderInternal> _uiProvider;
    NSObject<CDPDCircleDelegate> *_delegate;
    id <CDPDCircleProxy> _circleProxy;
}

@property(retain, nonatomic) id <CDPDCircleProxy> circleProxy; // @synthesize circleProxy=_circleProxy;
@property(nonatomic) __weak NSObject<CDPDCircleDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <CDPStateUIProviderInternal> uiProvider; // @synthesize uiProvider=_uiProvider;
// - (void).cxx_destruct;
- (void)cancelApplicationToJoinCircle;
- (void)_requestCircleJoinWithObserver:(id)arg1 requestBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_requestToJoinWithRequestBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_requestToJoinAfterRestoreAndWaitForSuccessWithHandler:(CDUnknownBlockType)arg1;
- (void)_requestToJoinAndWaitForSuccessWithHandler:(CDUnknownBlockType)arg1;
- (void)_requestToJoinWithObserver:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)applyToJoinCircleWithJoinHandler:(CDUnknownBlockType)arg1;
- (id)_peerDeviceNamesByPeerID;
- (void)useCircleInfoToUpdateNameForDevices:(id)arg1;
- (void)resetCircleIncludingCloudKitData:(BOOL)arg1 cloudKitResetReasonDescription:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (NSUInteger)_peerCount;
- (void)promptForCredentials:(CDUnknownBlockType)arg1;
- (long long)nextRetryInterval;
- (BOOL)canRetryCliqueStatus;
- (void)_joinCircleIgnoringBackups:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)joinCircleIgnoringBackups:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)joinCircleWithCompletion:(CDUnknownBlockType)arg1;
- (void)prepareCircleStateForRecovery;
- (BOOL)synchronizeCircleViews;
- (id)peerID;
- (NSUInteger)circleStatus;
- (void)dealloc;
- (id)initWithUiProvider:(id)arg1 delegate:(id)arg2 circleProxy:(id)arg3;

@end

