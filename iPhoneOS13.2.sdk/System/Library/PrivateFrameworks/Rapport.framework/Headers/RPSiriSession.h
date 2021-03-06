//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Rapport/AVVoiceControllerRecordDelegate-Protocol.h>

@class AVAudioFormat, AVVoiceController, NSString;
@protocol OS_dispatch_queue, RPMessageable;

@interface RPSiriSession : NSObject <AVVoiceControllerRecordDelegate>
{
    id /* CDUnknownBlockType */ _activateCompletion;
    int _activateState;
    AVAudioFormat *_audioFormat;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    RPSiriSession *_selfRef;
    int _startRecordingState;
    int _stopRecordingState;
    AVVoiceController *_voiceController;
    NSString *_destinationID;
    id <RPMessageable> _messenger;
}

@property(retain, nonatomic) id <RPMessageable> messenger; // @synthesize messenger=_messenger;
@property(retain, nonatomic) NSString *destinationID; // @synthesize destinationID=_destinationID;
// - (void).cxx_destruct;
- (void)voiceControllerMediaServicesWereReset:(id)arg1;
- (void)voiceControllerEncoderErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)voiceControllerDidDetectEndpoint:(id)arg1 ofType:(int)arg2 atTime:(double)arg3;
- (void)voiceControllerDidDetectStartpoint:(id)arg1;
- (void)voiceControllerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
- (void)voiceControllerDidStopRecording:(id)arg1 forReason:(long long)arg2;
- (void)voiceControllerDidStartRecording:(id)arg1 successfully:(BOOL)arg2 error:(id)arg3;
- (void)voiceControllerTearDown;
- (BOOL)voiceControllerSetupAndReturnError:(id )arg1;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (void)_activateCompletedWithError:(id)arg1;
- (void)_activate2;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSString *description;
- (id)init;

@end

