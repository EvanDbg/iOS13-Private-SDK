//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSCountedSet;
@protocol WBSHistoryLoader;

@protocol WBSHistoryLoaderDelegate <NSObject>
- (void)historyLoaderDidFinishLoading:(id <WBSHistoryLoader>)arg1;
- (void)historyLoader:(id <WBSHistoryLoader>)arg1 didLoadItems:(NSArray *)arg2 discardedItems:(NSArray *)arg3 stringsForUserTypeDomainExpansion:(NSCountedSet *)arg4;
@end

