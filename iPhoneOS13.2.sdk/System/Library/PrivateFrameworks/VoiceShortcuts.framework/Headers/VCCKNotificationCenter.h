//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceShortcuts/APSConnectionDelegate-Protocol.h>

@class APSConnection, NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface VCCKNotificationCenter : NSObject <APSConnectionDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_observerTable;
    APSConnection *_connection;
    NSString *_topic;
}

+ (void)notificationCenterForContainer:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(readonly, nonatomic) APSConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) NSHashTable *observerTable; // @synthesize observerTable=_observerTable;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
// - (void).cxx_destruct;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(nonatomic, getter=isEnabled) BOOL enabled;
- (id)initWithEnvironment:(id)arg1;

@end

