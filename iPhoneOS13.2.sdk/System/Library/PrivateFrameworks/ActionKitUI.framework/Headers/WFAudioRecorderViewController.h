//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ActionKitUI/WFAudioInputViewController.h>

#import <ActionKitUI/WFAudioRecorderDelegate-Protocol.h>

@class NSString, UIButton, WFAudioRecorder;

__attribute__((visibility("hidden")))
@interface WFAudioRecorderViewController : WFAudioInputViewController <WFAudioRecorderDelegate>
{
    _Bool _startImmediately;
    _Bool _isFinishing;
    id /* block */ _completionHandler;
    double _recordingDuration;
    WFAudioRecorder *_audioRecorder;
    UIButton *_inputButton;
}

@property(nonatomic) _Bool isFinishing; // @synthesize isFinishing=_isFinishing;
@property(nonatomic) __weak UIButton *inputButton; // @synthesize inputButton=_inputButton;
@property(retain, nonatomic) WFAudioRecorder *audioRecorder; // @synthesize audioRecorder=_audioRecorder;
@property(nonatomic) double recordingDuration; // @synthesize recordingDuration=_recordingDuration;
@property(nonatomic) _Bool startImmediately; // @synthesize startImmediately=_startImmediately;
@property(copy, nonatomic) id /* block */ completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)audioRecorder:(id)arg1 didFinishWithDestinationURL:(id)arg2 error:(id)arg3;
- (void)audioRecorder:(id)arg1 didProgressToTime:(double)arg2;
- (void)inputButtonTapped;
- (void)finishRecording;
- (void)startRecording;
- (void)viewWillAppear:(_Bool)arg1;
- (void)handleTap;
- (void)viewDidLoad;
- (id)initWithOutputFormat:(long long)arg1 destinationURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
