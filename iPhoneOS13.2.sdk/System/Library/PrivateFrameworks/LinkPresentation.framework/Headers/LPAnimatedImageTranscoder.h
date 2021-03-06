//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, LPImage, NSURL;

__attribute__((visibility("hidden")))
@interface LPAnimatedImageTranscoder : NSObject
{
    LPImage *_sourceImage;
    id /* CDUnknownBlockType */ _completionHandler;
    CGImageSource _imageSource;
    NSURL *_outputURL;
    NSUInteger _frameCount;
    NSUInteger _currentFrame;
    double _nextFrameTime;
    AVAssetWriterInputPixelBufferAdaptor *_adaptor;
    AVAssetWriter *_writer;
    AVAssetWriterInput *_input;
    BOOL _stopEncoding;
    BOOL _hasReadyForDataObserver;
    unsigned int _loggingID;
}

+ (id)encodeQueue;
// - (void).cxx_destruct;
- (void)cancel;
- (void)encodeNextFrame;
- (void)encodeUntilNotReadyForMoreMediaData;
- (void)removeReadyForDataObserverIfNeeded;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)failed;
- (void)_transcodeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)transcodeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithAnimatedImage:(id)arg1;

@end

