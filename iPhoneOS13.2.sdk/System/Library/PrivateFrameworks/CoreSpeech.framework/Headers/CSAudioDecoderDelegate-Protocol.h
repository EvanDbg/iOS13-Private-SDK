//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CSAudioDecoder, NSData;

@protocol CSAudioDecoderDelegate <NSObject>
- (void)audioDecoderDidDecodePackets:(CSAudioDecoder *)arg1 audioStreamHandleId:(NSUInteger)arg2 buffer:(NSData *)arg3 remoteVAD:(NSData *)arg4 timestamp:(NSUInteger)arg5 receivedNumChannels:(unsigned int)arg6;
@end

