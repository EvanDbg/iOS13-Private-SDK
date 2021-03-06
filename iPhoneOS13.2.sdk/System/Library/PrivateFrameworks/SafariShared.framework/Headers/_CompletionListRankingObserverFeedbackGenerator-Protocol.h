//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSString;
@protocol WBSCompletionListItem, _CompletionListRankingObserverFeedbackGeneratorDelegate;

@protocol _CompletionListRankingObserverFeedbackGenerator <NSObject>
- (void)removeAllSectionsAndItems;
- (void)didAddItem:(id <WBSCompletionListItem>)arg1 hidingOutrankedResults:(NSArray *)arg2 hidingDuplicateResults:(NSArray *)arg3;

@optional
@property(nonatomic) __weak id <_CompletionListRankingObserverFeedbackGeneratorDelegate> delegate;
- (void)didBeginSectionWithBundleIdentifier:(NSString *)arg1;
- (void)didEndRanking;
- (void)didBeginRanking;
@end

