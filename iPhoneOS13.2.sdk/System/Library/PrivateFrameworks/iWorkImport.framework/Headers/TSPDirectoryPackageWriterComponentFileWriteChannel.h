//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSPComponentWriteChannel-Protocol.h>

@class NSURL, TSUFileIOChannel;

__attribute__((visibility("hidden")))
@interface TSPDirectoryPackageWriterComponentFileWriteChannel : NSObject <TSPComponentWriteChannel>
{
    NSURL *_URL;
    id /* CDUnknownBlockType */ _handler;
    TSUFileIOChannel *_writeChannel;
    BOOL _isClosed;
}

// - (void).cxx_destruct;
- (void)close;
- (void)writeData:(id)arg1;
- (id)initWithURL:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end

