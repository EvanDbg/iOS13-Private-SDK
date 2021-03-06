//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HMCameraSource, NSError;
@protocol HFCameraLiveStreamControllerDelegate;

@protocol HFCameraLiveStreamControlling <NSObject>
@property(nonatomic, getter=isMicrophoneEnabled) BOOL microphoneEnabled;
@property(nonatomic) float streamAudioVolume;
@property(nonatomic, getter=isStreamAudioEnabled) BOOL streamAudioEnabled;
@property(readonly, nonatomic) NSError *streamError;
@property(readonly, nonatomic) HMCameraSource *liveCameraSource;
@property(readonly, nonatomic) NSUInteger streamState;
@property(readonly, nonatomic, getter=isStreamingEnabled) BOOL streamingEnabled;
@property(nonatomic) __weak id <HFCameraLiveStreamControllerDelegate> delegate;
- (void)stopStreaming;
- (void)startStreaming;
@end

