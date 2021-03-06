//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoRegistry/NRNSXPCConnectionProtocol-Protocol.h>

@class NRMockServerNSXPCConnection, NSString, NSXPCInterface;
@protocol OS_dispatch_queue;

@interface NRMockClientNSXPCConnection : NSObject <NRNSXPCConnectionProtocol>
{
    NSString *_name;
    NRMockServerNSXPCConnection *_serverConnection;
    id _synchronousRemoteObjectProxy;
    id _remoteObjectProxy;
    BOOL _invalidated;
    NSXPCInterface *_exportedInterface;
    id _exportedObject;
    id /* CDUnknownBlockType */ _invalidationHandler;
    id /* CDUnknownBlockType */ _interruptionHandler;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(readonly, nonatomic) BOOL invalidated; // @synthesize invalidated=_invalidated;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) id /* CDUnknownBlockType */ interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) id exportedObject; // @synthesize exportedObject=_exportedObject;
@property(retain, nonatomic) NSXPCInterface *exportedInterface; // @synthesize exportedInterface=_exportedInterface;
// - (void).cxx_destruct;
@property(readonly, nonatomic) int processIdentifier;
- (void)_invalidate;
- (id)valueForEntitlement:(id)arg1;
- (void)invalidate;
- (void)suspend;
- (void)resume;
- (void)_setQueue:(id)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
@property(readonly, retain, nonatomic) id remoteObjectProxy;
- (id)remoteObjectProxyAsync:(BOOL)arg1;
@property(retain, nonatomic) NSXPCInterface *remoteObjectInterface;
@property(readonly, nonatomic) NRMockServerNSXPCConnection *serverConnection;
- (void)runCompletionBlock:(CDUnknownBlockType)arg1;
@property(readonly, retain, nonatomic) NSString *processName;
- (id)initWithMachServiceName:(id)arg1 options:(NSUInteger)arg2;

@end

