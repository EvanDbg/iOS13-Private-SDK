//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class DEDXPCInbound, NSXPCConnection, NSXPCListener;
@protocol DEDXPCConnectorDaemonDelegate, OS_os_log;

@interface DEDXPCConnector : NSObject <NSXPCListenerDelegate>
{
    BOOL _isDaemon;
    BOOL _started;
    NSXPCConnection *_connection;
    id <DEDXPCConnectorDaemonDelegate> _daemonDelegate;
    NSObject<OS_os_log> *_log;
    DEDXPCInbound *_inbound;
    NSXPCListener *_listener;
    NSUInteger _connType;
}

@property BOOL started; // @synthesize started=_started;
@property BOOL isDaemon; // @synthesize isDaemon=_isDaemon;
@property NSUInteger connType; // @synthesize connType=_connType;
@property(retain) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain) DEDXPCInbound *inbound; // @synthesize inbound=_inbound;
@property(retain) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property __weak id <DEDXPCConnectorDaemonDelegate> daemonDelegate; // @synthesize daemonDelegate=_daemonDelegate;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
// - (void).cxx_destruct;
- (id)_whitelistedXPCInterface;
- (id)connectionWithEndpoint:(id)arg1 forMachService:(id)arg2;
- (void)startForApp;
- (BOOL)validateConnection:(id)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)startForDaemon;
- (void)start;
- (void)configureXPCInbound:(id)arg1;
- (void)configureDaemonModeWithDelegate:(id)arg1;
- (void)configureConnectionType:(NSUInteger)arg1;
- (id)init;

@end

