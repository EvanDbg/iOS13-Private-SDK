//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSManagedObjectContext, NSPersistentStore, NSString;

@protocol STPersistenceControllerProtocol <NSObject>
@property(readonly) NSPersistentStore *cloudStore;
@property(readonly) NSPersistentStore *localStore;
@property(readonly, nonatomic) BOOL hasStoreLoaded;
@property(readonly, nonatomic) NSManagedObjectContext *viewContext;
- (void)setLocalPersistentStoreValue:(id)arg1 forKey:(NSString *)arg2;
- (id)localPersistentStoreMetadataValueForKey:(NSString *)arg1;
- (NSManagedObjectContext *)newBackgroundContext;
- (void)performBackgroundTaskAndWait:(void (^)(NSManagedObjectContext *))arg1;
- (void)performBackgroundTask:(void (^)(NSManagedObjectContext *))arg1;
@end

