//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface HMDLaunchHandler : HMFObject <HMFLogging>
{
    NSObject<OS_dispatch_queue> *_handlerQueue;
    NSMutableSet *_registeredRelaunchClients;
}

+ (id)logCategory;
+ (int)_setJetsamPriorityUsingCommand:(int)arg1;
+ (BOOL)_removeFileAtPath:(id)arg1 error:(id )arg2;
+ (BOOL)_fileExistsAtPath:(id)arg1;
+ (BOOL)_writeDictionary:(id)arg1 toFileURL:(id)arg2 error:(id )arg3;
+ (id)relaunchPlistPath;
+ (id)sharedHandler;
@property(readonly, nonatomic) NSMutableSet *registeredRelaunchClients; // @synthesize registeredRelaunchClients=_registeredRelaunchClients;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue; // @synthesize handlerQueue=_handlerQueue;
// - (void).cxx_destruct;
- (void)_setJetsamPriorityElevated:(BOOL)arg1;
- (void)_updateOrRemoveRelaunchPlist;
- (void)deregisterForRelaunch:(id)arg1;
- (void)registerForRelaunch:(id)arg1;
- (void)removePersistentRelaunchRegistrationsIfNecessary;
- (id)init;

@end

