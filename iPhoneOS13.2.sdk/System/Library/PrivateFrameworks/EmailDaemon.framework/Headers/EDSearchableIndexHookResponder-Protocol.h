//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class EDPersistenceDatabaseGenerationWindow, EDSearchableIndexUpdates, NSArray;

@protocol EDSearchableIndexHookResponder <NSObject>

@optional
- (void)searchableIndexDidAssignIndexingType:(long long)arg1 forIdentifiers:(NSArray *)arg2 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg3;
- (void)searchableIndexDidAssignTransaction:(long long)arg1 toUpdates:(EDSearchableIndexUpdates *)arg2 withMissingIdentifiers:(NSArray *)arg3 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg4;
@end

