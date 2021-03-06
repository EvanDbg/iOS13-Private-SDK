//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CSAudioCircularBuffer : NSObject
{
//     struct unique_ptr<corespeech::CSAudioCircularBufferImpl<unsigned short>, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned short>>> _csAudioCircularBufferImpl;
    NSUInteger _bufferLength;
}

+ (id)createAudioCircularBufferWithDefaultSettings;
@property(nonatomic) NSUInteger bufferLength; // @synthesize bufferLength=_bufferLength;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)saveRecordingBufferFrom:(NSUInteger)arg1 to:(NSUInteger)arg2 toURL:(id)arg3;
- (NSUInteger)sampleCount;
- (void)reset;
- (id)copyBufferWithNumSamplesCopiedIn:(NSUInteger )arg1;
- (id)copySamplesFrom:(NSUInteger)arg1 to:(NSUInteger)arg2;
- (id)copySamplesFromHostTime:(NSUInteger)arg1;
- (void)addSamples:(const void *)arg1 numSamples:(NSUInteger)arg2 atHostTime:(NSUInteger)arg3;
- (void)addSamples:(const void *)arg1 numSamples:(NSUInteger)arg2;
- (id)initWithNumChannels:(NSUInteger)arg1 recordingDuration:(float)arg2 samplingRate:(float)arg3;

@end

