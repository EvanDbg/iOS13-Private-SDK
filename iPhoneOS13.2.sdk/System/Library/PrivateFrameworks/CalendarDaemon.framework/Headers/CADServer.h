//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarDaemon/CalActivatable-Protocol.h>
#import <CalendarDaemon/ClientConnectionDelegate-Protocol.h>
#import <CalendarDaemon/DatabaseChangeHandling-Protocol.h>


@class CDBDataProtectionObserver, NSArray, NSLock, NSMutableSet, NSString, NSXPCListener;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface CADServer : NSObject <NSXPCListenerDelegate, ClientConnectionDelegate, DatabaseChangeHandling, CalActivatable>
{
    NSObject<OS_dispatch_queue> *_notificationQueue;
    int _backgroundTaskCount;
    NSXPCListener *_NSXPCListener;
    NSObject<OS_xpc_object> *_xpcConnection;
    NSObject<OS_dispatch_queue> *_xpcQueue;
    NSMutableSet *_clientConnections;
    NSLock *_connectionLock;
    NSArray *_signalSensors;
    _Bool _active;
    CDBDataProtectionObserver *_dataProtectionObserver;
    NSArray *_modules;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_alarmQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *alarmQueue; // @synthesize alarmQueue=_alarmQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) NSArray *modules; // @synthesize modules=_modules;
@property(retain, nonatomic) CDBDataProtectionObserver *dataProtectionObserver; // @synthesize dataProtectionObserver=_dataProtectionObserver;
- (void)_enableICloudBackups;
- (void)_dumpState;
- (void)_exitWithStatus:(int)arg1;
- (void)_deactivateAndExitWithStatus:(int)arg1;
-     // Error parsing type: v24@0:8^{CalDatabase={__CFRuntimeBase=QAQ}i^{CPRecordStore}^{CalEventOccurrenceCache}^{CalScheduledTaskCache}^{__CFDictionary}^{__CFDictionary}{_opaque_pthread_mutex_t=q[56c]}II^{__CFArray}^{__CFString}^{__CFArray}ii^{__CFString}^{__CFString}^{__CFString}i@?{_opaque_pthread_mutex_t=q[56c]}B^{__CFArray}^{__CFArray}^{__CFArray}@B^{__CFSet}@B}16, name: _cleanupChangeTablesInDatabase:
-     // Error parsing type: v24@0:8^{CalDatabase={__CFRuntimeBase=QAQ}i^{CPRecordStore}^{CalEventOccurrenceCache}^{CalScheduledTaskCache}^{__CFDictionary}^{__CFDictionary}{_opaque_pthread_mutex_t=q[56c]}II^{__CFArray}^{__CFString}^{__CFArray}ii^{__CFString}^{__CFString}^{__CFString}i@?{_opaque_pthread_mutex_t=q[56c]}B^{__CFArray}^{__CFArray}^{__CFArray}@B^{__CFSet}@B}16, name: cleanupDatabase:
- (void)_registerForChangeTableCleanup;
- (void)_registerForAttachmentCleanup;
- (void)_registerForAnalyticsCollection;
- (void)_registerForDatabaseCleanup;
- (void)_registerActivityWithIdentifier:(const char *)arg1 block:(id /* block */)arg2;
- (void)_registerMaintenanceActivities;
- (void)_registerForBackgroundTaskAgentJobs;
- (void)_registerForAlarmEvents;
- (void)_registerForNotifications;
- (void)_updateOccurrenceCacheTimeZone;
- (_Bool)_trimAndExtendOccurrenceCache;
- (void)_tearDownSignalHandlers;
- (void)_setUpSignalHandlers;
- (void)_startBirthdayManager;
- (void)_protectedDataDidBecomeAvailable;
- (void)_finishInitializationWithDataAvailable;
- (void)_handleXPCConnection:(id)arg1;
- (void)clientConnectionDied:(id)arg1;
- (void)_handleDatabaseChanged;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)deactivate;
- (void)activate;
- (void)dealloc;
- (id)initWithModules:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
