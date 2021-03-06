//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <KeyboardServices/_KSTextReplacementServiceProtocol-Protocol.h>

@class NSXPCConnection;

@interface _KSTextReplacementServerConnection : NSObject <_KSTextReplacementServiceProtocol>
{
    NSXPCConnection *_serviceConnection;
}

+ (id)serviceConnection;
// - (void).cxx_destruct;
- (id)textReplacementEntries;
- (void)queryTextReplacementsWithPredicate:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)queryTextReplacementEntriesWithReply:(CDUnknownBlockType)arg1;
- (void)cancelPendingUpdatesWithReply:(CDUnknownBlockType)arg1;
- (void)requestSyncWithReply:(CDUnknownBlockType)arg1;
- (void)removeAllEntries;
- (void)addEntries:(id)arg1 removeEntries:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;

@end

