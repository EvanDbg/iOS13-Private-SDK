//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MIME/MFDataConsumer-Protocol.h>

@interface MFBlockDataConsumer : NSObject <MFDataConsumer>
{
    id /* CDUnknownBlockType */ _appendHandler;
    id /* CDUnknownBlockType */ _doneHandler;
}

// - (void).cxx_destruct;
- (void)done;
- (long long)appendData:(id)arg1;
- (id)initWithAppendHandler:(CDUnknownBlockType)arg1 doneHandler:(CDUnknownBlockType)arg2;

@end

