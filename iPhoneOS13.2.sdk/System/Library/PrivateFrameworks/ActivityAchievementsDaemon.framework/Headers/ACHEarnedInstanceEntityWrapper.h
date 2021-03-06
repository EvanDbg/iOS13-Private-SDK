//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivityAchievementsDaemon/ACHEarnedInstanceEntitySyncedEarnedInstancesObserver-Protocol.h>

@class HDProfile;
@protocol ACHEarnedInstanceEntitySyncedEarnedInstancesObserver;

@interface ACHEarnedInstanceEntityWrapper : NSObject <ACHEarnedInstanceEntitySyncedEarnedInstancesObserver>
{
    HDProfile *_profile;
    id <ACHEarnedInstanceEntitySyncedEarnedInstancesObserver> _syncedEarnedInstancesObserver;
}

@property(nonatomic) __weak id <ACHEarnedInstanceEntitySyncedEarnedInstancesObserver> syncedEarnedInstancesObserver; // @synthesize syncedEarnedInstancesObserver=_syncedEarnedInstancesObserver;
@property(retain, nonatomic) HDProfile *profile; // @synthesize profile=_profile;
// - (void).cxx_destruct;
- (BOOL)earnedInstanceEntityDidReceiveSyncedEarnedInstances:(id)arg1 provenance:(long long)arg2;
- (BOOL)removeAllEarnedInstancesWithError:(id )arg1;
- (id)allEarnedInstancesWithError:(id )arg1;
- (BOOL)removeEarnedInstances:(id)arg1 error:(id )arg2;
- (id)insertEarnedInstances:(id)arg1 provenance:(long long)arg2 databaseContext:(id)arg3 error:(id )arg4;
- (id)initWithProfile:(id)arg1;

@end

