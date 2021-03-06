//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDataObserver-Protocol.h>
#import <HealthDaemon/HDDatabaseProtectedDataObserver-Protocol.h>
#import <HealthDaemon/HDDiagnosticObject-Protocol.h>
#import <HealthDaemon/HDHealthDaemonReadyObserver-Protocol.h>

@class HDProfile, NSDate, NSDictionary, NSHashTable;
@protocol OS_dispatch_queue;

@interface HDUserCharacteristicsManager : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, HDDataObserver, HDDiagnosticObject>
{
    BOOL _shouldUpdateQuantityCharacteristics;
    BOOL _needsUpdateAfterUnlock;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSDate *_userProfileLastUpdated;
    NSDictionary *_lastUserProfile;
    NSHashTable *_observers;
}

@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) BOOL needsUpdateAfterUnlock; // @synthesize needsUpdateAfterUnlock=_needsUpdateAfterUnlock;
@property(copy, nonatomic) NSDictionary *lastUserProfile; // @synthesize lastUserProfile=_lastUserProfile;
@property(retain, nonatomic) NSDate *userProfileLastUpdated; // @synthesize userProfileLastUpdated=_userProfileLastUpdated;
@property(readonly, nonatomic) BOOL shouldUpdateQuantityCharacteristics; // @synthesize shouldUpdateQuantityCharacteristics=_shouldUpdateQuantityCharacteristics;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *observerQueue; // @synthesize observerQueue=_observerQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
// - (void).cxx_destruct;
- (void)_queue_alertObserversDidUpdateUserProfile;
- (void)removeProfileObserver:(id)arg1;
- (void)addProfileObserver:(id)arg1;
- (id)diagnosticDescription;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2;
- (void)daemonReady:(id)arg1;
- (id)_mostRecentSampleOfType:(id)arg1 error:(id )arg2;
- (void)_queue_updateQuantityCharacteristics;
- (void)_queue_updateUserProfile;
- (void)_queue_updateQuantityCharacteristicsAndUserProfileIfNeeded;
- (void)_queue_updateQuantityCharacteristicsAndUserProfile;
- (void)_userCharacteristicsDidChangeShouldUpdateUserProfile:(BOOL)arg1 shouldSync:(BOOL)arg2;
- (double)restingCaloriesFromTotalCalories:(double)arg1 timeInterval:(double)arg2 authorizedToRead:(BOOL)arg3;
- (BOOL)_setUserCharacteristic:(id)arg1 forType:(id)arg2 shouldInsertSample:(BOOL)arg3 updateProfileAndSync:(BOOL)arg4 error:(id )arg5;
- (BOOL)setUserCharacteristic:(id)arg1 forType:(id)arg2 error:(id )arg3;
- (id)modificationDateForCharacteristicWithType:(id)arg1 error:(id )arg2;
- (id)_userCharacteristicForType:(id)arg1 entity:(id )arg2 error:(id )arg3;
- (id)userCharacteristicForType:(id)arg1 error:(id )arg2;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;

@end

