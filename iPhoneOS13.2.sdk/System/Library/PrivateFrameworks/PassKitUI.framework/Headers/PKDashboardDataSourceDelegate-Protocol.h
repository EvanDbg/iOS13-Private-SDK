//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSIndexPath, NSIndexSet;
@protocol PKDashboardItem;

@protocol PKDashboardDataSourceDelegate 
- (void)reloadSections:(NSIndexSet *)arg1;
- (void)deleteSections:(NSIndexSet *)arg1;
- (void)insertSections:(NSIndexSet *)arg1;
- (void)performBatchUpdates:(void (^)(void))arg1 completion:(void (^)(_Bool))arg2;
- (void)itemChanged:(id <PKDashboardItem>)arg1 atIndexPath:(NSIndexPath *)arg2;
- (void)contentIsLoaded;
@end
