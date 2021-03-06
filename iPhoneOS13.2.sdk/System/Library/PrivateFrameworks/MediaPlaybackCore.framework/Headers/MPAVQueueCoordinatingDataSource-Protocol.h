//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class MPAVItem;
@protocol MPAVQueueCoordinating;

@protocol MPAVQueueCoordinatingDataSource <NSObject>
- (MPAVItem *)queueCoordinator:(id <MPAVQueueCoordinating>)arg1 itemToFollowItem:(MPAVItem *)arg2;

@optional
- (void)queueCoordinatorDidChangeItems:(id <MPAVQueueCoordinating>)arg1;
- (void)queueCoordinator:(id <MPAVQueueCoordinating>)arg1 willInsertItem:(MPAVItem *)arg2 afterItem:(MPAVItem *)arg3;
- (void)queueCoordinator:(id <MPAVQueueCoordinating>)arg1 failedToLoadItem:(MPAVItem *)arg2;
@end

