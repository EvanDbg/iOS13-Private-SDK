//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSPComponentWriteChannel-Protocol.h>

@class TSUStreamCompression;
@protocol OS_dispatch_queue, TSPComponentWriteChannel;

__attribute__((visibility("hidden")))
@interface TSPCompressionComponentWriteChannel : NSObject <TSPComponentWriteChannel>
{
    NSObject<OS_dispatch_queue> *_writeQueue;
    id <TSPComponentWriteChannel> _writeChannel;
    TSUStreamCompression *_compressor;
}

// - (void).cxx_destruct;
- (void)writeData:(id)arg1;
- (void)close;
- (void)dealloc;
- (id)initWithWriteChannel:(id)arg1 compressionAlgorithm:(int)arg2 operation:(int)arg3;

@end

