//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;
@protocol NUArticleDataProvider;

@protocol NUArticlePrefetcherType
- (id <NUArticleDataProvider>)prefetchedArticleDataProviderForArticleID:(NSString *)arg1;
- (void)removePrefetchInterestInArticleID:(NSString *)arg1;
- (void)addPrefetchInterestInArticleID:(NSString *)arg1;
@end

