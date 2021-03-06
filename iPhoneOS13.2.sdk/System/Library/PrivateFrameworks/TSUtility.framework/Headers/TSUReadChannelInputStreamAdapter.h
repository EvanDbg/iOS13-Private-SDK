//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSUtility/SFUInputStream-Protocol.h>

@protocol OS_dispatch_data, OS_dispatch_queue, TSUReadChannel, TSUStreamReadChannel;

@interface TSUReadChannelInputStreamAdapter : NSObject <SFUInputStream>
{
    id <TSUReadChannel> _readChannel;
    id <TSUStreamReadChannel> _streamReadChannel;
    NSObject<OS_dispatch_data> *_leftoverData;
    NSObject<OS_dispatch_queue> *_readQueue;
    long long _offset;
}

// - (void).cxx_destruct;
- (id)closeLocalStream;
- (void)enableSystemCaching;
- (void)disableSystemCaching;
- (void)seekToOffset:(long long)arg1;
- (BOOL)canSeek;
- (void)close;
- (NSUInteger)readToBuffer:(char )arg1 size:(NSUInteger)arg2;
- (long long)offset;
- (void)dealloc;
- (id)_initWithReadChannel:(id)arg1 streamReadChannel:(id)arg2;
- (id)initWithStreamReadChannel:(id)arg1;
- (id)initWithReadChannel:(id)arg1;

@end

