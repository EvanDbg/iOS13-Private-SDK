//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/VSSpeechSynthesizerDelegate-Protocol.h>

@class NSString, SFSiriRequest, VSSpeechSynthesizer;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFSiriClient : NSObject <VSSpeechSynthesizerDelegate>
{
    BOOL _invalidateCalled;
    unsigned int _invalidateFlags;
    SFSiriRequest *_currentRequest;
    NSObject<OS_dispatch_source> *_currentTimer;
    NSString *_languageCode;
    NSMutableArray *_requests;
    VSSpeechSynthesizer *_speechSynthesizer;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id /* CDUnknownBlockType */ _invalidationHandler;
    id /* CDUnknownBlockType */ _siriDialogHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ siriDialogHandler; // @synthesize siriDialogHandler=_siriDialogHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
// - (void).cxx_destruct;
- (void)speechSynthesizer:(id)arg1 didFinishSynthesisRequest:(id)arg2 withInstrumentMetrics:(id)arg3 error2:(id)arg4;
- (void)speechSynthesizer:(id)arg1 didFinishSynthesisRequest:(id)arg2 withInstrumentMetrics:(id)arg3 error:(id)arg4;
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(BOOL)arg3 withError2:(id)arg4;
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(BOOL)arg3 phonemesSpoken:(id)arg4 withError:(id)arg5;
- (void)speechSynthesizer:(id)arg1 withRequest:(id)arg2 didReceiveTimingInfo2:(id)arg3;
- (void)speechSynthesizer:(id)arg1 withRequest:(id)arg2 didReceiveTimingInfo:(id)arg3;
- (void)speechSynthesizer:(id)arg1 didStartSpeakingRequest:(id)arg2;
- (void)deviceSetupPlayGreetingID:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deviceSetupPrepareGreeting:(CDUnknownBlockType)arg1;
- (void)_deviceSetupEnd;
- (void)deviceSetupEnd;
- (void)deviceSetupBegin:(NSUInteger)arg1;
- (void)startDelayedRequest:(id)arg1;
- (void)_completeRequest:(id)arg1 error:(id)arg2;
- (void)_completeAllRequestsWithError:(id)arg1;
- (void)_processQueuedRequests;
- (void)stopSpeaking;
- (void)_speakText:(id)arg1 languageCode:(id)arg2 flags:(unsigned int)arg3 rate:(double)arg4 delay:(double)arg5 startHandler:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;
- (void)speakText:(id)arg1 flags:(unsigned int)arg2 rate:(double)arg3 delay:(double)arg4 startHandler:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (void)speakText:(id)arg1 languageCode:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)speakText:(id)arg1 rate:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)speakText:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_speakPasscode:(id)arg1 instructions:(id)arg2 languageCode:(id)arg3 flags:(unsigned int)arg4 completion:(CDUnknownBlockType)arg5;
- (void)speakPasscode:(id)arg1 instructions:(id)arg2 languageCode:(id)arg3 flags:(unsigned int)arg4 completion:(CDUnknownBlockType)arg5;
- (void)speakDeviceSetupWelcomePhaseWithCompletion:(CDUnknownBlockType)arg1;
- (void)preWarmDeviceSetupWelcomePhaseWithCompletion:(CDUnknownBlockType)arg1;
- (void)_invalidate;
- (void)invalidateWithFlags:(unsigned int)arg1;
- (void)invalidate;
- (void)_activate;
- (void)activate;
- (id)init;

@end

