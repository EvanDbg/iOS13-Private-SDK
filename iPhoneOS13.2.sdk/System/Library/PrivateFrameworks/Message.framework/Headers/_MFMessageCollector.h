//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/MessageConsumer-Protocol.h>
#import <Message/QueryProgressMonitor-Protocol.h>

@class MFActivityMonitor, NSMutableArray;

@interface _MFMessageCollector : NSObject <MessageConsumer, QueryProgressMonitor>
{
    NSMutableArray *_messages;
    MFActivityMonitor *_monitor;
    id /* CDUnknownBlockType */ _transmogrifier;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ transmogrifier; // @synthesize transmogrifier=_transmogrifier;
// - (void).cxx_destruct;
- (BOOL)shouldCancel;
- (void)newMessagesAvailable:(id)arg1;
- (id)copyMessages;
- (id)messages;
- (id)init;

@end

