//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class MTXPCConnectionInfo, NSArray, NSMutableSet, NSString, NSXPCListener;
@protocol NAScheduler;

@interface MTXPCConnectionListenerProvider : NSObject <NSXPCListenerDelegate>
{
    MTXPCConnectionInfo *_info;
    id <NAScheduler> _serializer;
    NSString *_requiredEntitlement;
    id /* CDUnknownBlockType */ _errorHandler;
    NSMutableSet *_clients;
    NSXPCListener *_connectionListener;
}

+ (id)providerWithConnectionInfo:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSXPCListener *connectionListener; // @synthesize connectionListener=_connectionListener;
@property(retain, nonatomic) NSMutableSet *clients; // @synthesize clients=_clients;
@property(copy, nonatomic) id /* CDUnknownBlockType */ errorHandler; // @synthesize errorHandler=_errorHandler;
@property(copy, nonatomic) NSString *requiredEntitlement; // @synthesize requiredEntitlement=_requiredEntitlement;
@property(retain, nonatomic) id <NAScheduler> serializer; // @synthesize serializer=_serializer;
@property(retain, nonatomic) MTXPCConnectionInfo *info; // @synthesize info=_info;
// - (void).cxx_destruct;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (void)stopListening;
- (void)_performBlockOnClientInfos:(CDUnknownBlockType)arg1 excludingClient:(id)arg2;
- (void)performBlockOnAllClients:(CDUnknownBlockType)arg1 excludingClient:(id)arg2;
- (void)performBlockOnClientInfos:(CDUnknownBlockType)arg1 excludeCurrent:(BOOL)arg2;
- (void)performBlockOnAllClients:(CDUnknownBlockType)arg1 excludingCurrent:(BOOL)arg2;
- (void)performBlockOnAllClients:(CDUnknownBlockType)arg1;
- (void)performBlockOnCurrentClient:(CDUnknownBlockType)arg1;
- (id)_currentClientForConnection:(id)arg1;
- (id)currentClient;
- (id)_connectedClients;
@property(readonly, nonatomic) NSArray *connectedClients;
- (void)removeClientConnection:(id)arg1;
- (void)addClientConnection:(id)arg1 clientLink:(id)arg2;
- (void)_didInvalidateConnection:(id)arg1;
- (void)_didInterruptConnection;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)startListening;
- (id)initWithConnectionInfo:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;

@end

