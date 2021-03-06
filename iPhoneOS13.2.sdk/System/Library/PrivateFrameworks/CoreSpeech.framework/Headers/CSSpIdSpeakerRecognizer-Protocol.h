//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CSAudioChunk, CSSpIdContext, NSDictionary;
@protocol CSSpIdSpeakerRecognizerDelegate;

@protocol CSSpIdSpeakerRecognizer <NSObject>
@property(readonly, nonatomic) NSDictionary *lastSpeakerIdInfo;
- (void)setCVTTriggerPhraseDetected;
- (void)processMyriadDecision:(NSUInteger)arg1;
- (void)recordingStoppedForReason:(long long)arg1;
- (void)processAudioChunk:(CSAudioChunk *)arg1;
- (id)initWithContext:(CSSpIdContext *)arg1 delegate:(id <CSSpIdSpeakerRecognizerDelegate>)arg2;
@end

