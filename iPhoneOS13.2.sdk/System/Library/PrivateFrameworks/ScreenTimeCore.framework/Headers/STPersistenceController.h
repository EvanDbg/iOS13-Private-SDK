//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenTimeCore/STPersistenceControllerProtocol-Protocol.h>

@class NSManagedObjectContext, NSMutableDictionary, NSPersistentContainer, NSPersistentStore;
@protocol OS_dispatch_queue;

@interface STPersistenceController : NSObject <STPersistenceControllerProtocol>
{
    NSObject *_lastPersistentHistoryTokenByStoreIdentifierLock;
    NSPersistentContainer *_persistentContainer;
    NSMutableDictionary *_lastPersistentHistoryTokenByStoreIdentifier;
    NSObject<OS_dispatch_queue> *_coreDataQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *coreDataQueue; // @synthesize coreDataQueue=_coreDataQueue;
@property(readonly, copy, nonatomic) NSMutableDictionary *lastPersistentHistoryTokenByStoreIdentifier; // @synthesize lastPersistentHistoryTokenByStoreIdentifier=_lastPersistentHistoryTokenByStoreIdentifier;
@property(retain, nonatomic) NSPersistentContainer *persistentContainer; // @synthesize persistentContainer=_persistentContainer;
// - (void).cxx_destruct;
- (void)_logAboutMissingStoreName:(id)arg1;
- (void)_persistentStoreCoordinatorStoresDidChange:(id)arg1;
- (void)_remotePersistentStoreDidChange:(id)arg1;
- (id)descriptionForPersistentStore:(id)arg1;
- (void)savePersistentHistoryToken:(id)arg1 forStore:(id)arg2;
- (id)persistentHistoryTokenForStore:(id)arg1;
@property(readonly, nonatomic) BOOL hasStoreLoaded;
- (void)setLocalPersistentStoreValue:(id)arg1 forKey:(id)arg2;
- (id)localPersistentStoreMetadataValueForKey:(id)arg1;
@property(readonly) NSPersistentStore *cloudStore;
@property(readonly) NSPersistentStore *localStore;
@property(readonly, nonatomic) NSManagedObjectContext *viewContext;
- (id)newBackgroundContext;
- (void)performBackgroundTaskAndWait:(CDUnknownBlockType)arg1;
- (void)performBackgroundTask:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithPersistentContainer:(id)arg1;

@end

