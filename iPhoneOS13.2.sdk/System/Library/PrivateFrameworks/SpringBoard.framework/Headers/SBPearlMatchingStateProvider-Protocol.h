//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol SBPearlMatchingStateProviderDelegate;

@protocol SBPearlMatchingStateProvider <NSObject>
@property(readonly, nonatomic) BOOL seenMatchResultSinceScreenOn;
@property(readonly, nonatomic) BOOL pearlMatchEnabledAndPossible;
@property(nonatomic) __weak id <SBPearlMatchingStateProviderDelegate> delegate;
- (void)reset;
@end

