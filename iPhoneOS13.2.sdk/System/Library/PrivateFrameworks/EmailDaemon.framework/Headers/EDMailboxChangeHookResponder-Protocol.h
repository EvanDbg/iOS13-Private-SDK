//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class EDPersistenceDatabaseGenerationWindow, EMMailboxObjectID;

@protocol EDMailboxChangeHookResponder <NSObject>

@optional
- (void)persistenceDidUpdateLastSyncAndMostRecentStatusCount:(long long)arg1 forMailboxWithObjectID:(EMMailboxObjectID *)arg2 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg3;
- (void)persistenceDidUpdateMostRecentStatusCount:(long long)arg1 forMailboxWithObjectID:(EMMailboxObjectID *)arg2 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg3;
- (void)persistenceDidUpdateServerCount:(long long)arg1 forMailboxWithObjectID:(EMMailboxObjectID *)arg2 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg3;
- (void)persistenceIsAddingMailboxWithDatabaseID:(long long)arg1 objectID:(EMMailboxObjectID *)arg2 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg3;
@end

